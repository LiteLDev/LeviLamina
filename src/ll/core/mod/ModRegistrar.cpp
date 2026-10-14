#include "ll/core/mod/ModRegistrar.h"

#include <algorithm>
#include <chrono>
#include <cstddef>
#include <filesystem>
#include <functional>
#include <memory>
#include <mutex>
#include <ranges>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/Versions.h"
#include "ll/api/base/Containers.h"
#include "ll/api/coro/Generator.h"
#include "ll/api/data/DependencyGraph.h"
#include "ll/api/data/Version.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/io/LogLevel.h"
#include "ll/api/mod/Manifest.h"
#include "ll/api/mod/Mod.h"
#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/reflection/Deserialization.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"

#include "ll/core/LeviLamina.h"
#include "ll/core/mod/ModLoadPlanner.h"
#include "ll/core/mod/NativeModManager.h"

#include "nlohmann/json.hpp"

#include "pl/Config.h"

namespace ll::mod {

namespace {

std::vector<std::string> sortedKeys(auto const& map) {
    std::vector<std::string> result;
    result.reserve(map.size());
    for (auto const& [name, _] : map) {
        result.emplace_back(name);
    }
    std::ranges::sort(result);
    return result;
}

std::string dependencyDescription(Dependency const& dependency) {
    if (!dependency.version) {
        return dependency.name;
    }
    return fmt::format("{} ({})", dependency.name, dependency.version->to_string());
}

constexpr std::string_view trimWhitespace(std::string_view value) noexcept {
    auto isWhitespace = [](char c) { return c == ' ' || c == '\t' || c == '\r' || c == '\n'; };
    while (!value.empty() && isWhitespace(value.front())) {
        value.remove_prefix(1);
    }
    while (!value.empty() && isWhitespace(value.back())) {
        value.remove_suffix(1);
    }
    return value;
}

bool containsLegacyVersionRequirement(nlohmann::json const& dependencies) {
    if (!dependencies.is_array()) {
        return false;
    }
    for (auto const& dependency : dependencies) {
        if (!dependency.is_object()) {
            continue;
        }
        auto version = dependency.find("version");
        if (version == dependency.end() || !version->is_string()) {
            continue;
        }
        if (data::Version::valid(trimWhitespace(version->get_ref<std::string const&>()))) {
            return true;
        }
    }
    return false;
}

void warnLegacyVersionRequirements(nlohmann::json const& json, std::string_view modName) {
    constexpr char const* fields[]{"dependencies", "optionalDependencies", "conflicts", "loadBefore"};
    for (auto field : fields) {
        auto dependencies = json.find(field);
        if (dependencies != json.end() && containsLegacyVersionRequirement(*dependencies)) {
            getLogger().warn(
                "Mod {0} uses a legacy bare version requirement; use an explicit range such as =1.2.3 or ^1.2.3"_tr(
                    modName
                )
            );
            return;
        }
    }
}

void logLoadIssue(std::string const& name, ModLoadIssue const& issue) {
    switch (issue.kind) {
    case ModLoadIssueKind::MissingDependency:
        getLogger().error("{0} will not be loaded because dependency {1} is missing"_tr(name, issue.related));
        break;
    case ModLoadIssueKind::IncompatibleDependencyVersion:
        getLogger().error(
            "{0} will not be loaded because dependency {1} requires {2}, but found {3}"_tr(
                name,
                issue.related,
                issue.requiredVersion.transform([](auto const& value) { return value.to_string(); }).value_or("*"),
                issue.actualVersion.transform(
                                       [](auto const& value) { return value.to_string(); }
                ).value_or("unversioned")
            )
        );
        break;
    case ModLoadIssueKind::IncompatiblePlatform:
        getLogger().error("{0} is not compatible with the current platform ({1})"_tr(name, issue.related));
        break;
    case ModLoadIssueKind::Conflict:
        getLogger().error("{0} will not be loaded because it conflicts with {1}"_tr(name, issue.related));
        break;
    case ModLoadIssueKind::DependencyUnavailable:
        getLogger().error("{0} will not be loaded because dependency {1} cannot be loaded"_tr(name, issue.related));
        break;
    case ModLoadIssueKind::DependencyCycle:
        getLogger().error("{0} will not be loaded because it is in dependency cycle {1}"_tr(name, issue.cycle));
        break;
    }
}

Expected<Manifest> loadManifest(std::filesystem::path const& dir) {
    auto content = file_utils::readFile(dir / u8"manifest.json");
    if (!content || content->empty()) {
        return makeSuccessed();
    }

    auto json = nlohmann::json::parse(*content, nullptr, false, true);
    if (json.is_discarded()) {
        return makeI18nStringError<"Manifest is not a valid JSON text">();
    }

    return reflection::deserialize_to<Manifest>(json).and_then([&](auto&& manifest) -> Expected<Manifest> {
        using namespace pl;
        if (manifest.type == pl_mod_manager_name) {
            return makeSuccessed();
        }
        if (std::string dirName = string_utils::u8str2str(dir.filename().u8string()); manifest.name != dirName) {
            return makeI18nStringError<"Mod name {0} do not match folder {1}">(manifest.name, dirName);
        }
        warnLegacyVersionRequirements(json, manifest.name);
        return std::forward<decltype(manifest)>(manifest);
    });
}

coro::Generator<std::pair<std::filesystem::path, std::string_view>> getModLoadSources(ModManagerRegistry const& registry) {
    for (auto& manager : registry.managers()) {
        co_yield {manager.getLoadDirectory(), manager.getType()};
    }
}

Expected<Manifest> loadManifestFromRegisteredDirectories(ModManagerRegistry const& registry, std::string_view name) {
    for (auto const& source : getModLoadSources(registry)) {
        auto result = loadManifest(source.first / string_utils::sv2u8sv(name));
        if (result && result->type != source.second) {
            continue;
        }
        if (result || result.error()) {
            return result;
        }
    }
    return makeSuccessed();
}

void scanRegisteredManifests(ModManagerRegistry const& registry, DenseMap<std::string, Manifest>& manifests) {
    for (auto const& source : getModLoadSources(registry)) {
        std::error_code                     ec;
        std::filesystem::directory_iterator files(source.first, ec);
        if (ec) {
            continue;
        }
        for (auto const& file : files) {
            if (!file.is_directory(ec)) {
                continue;
            }
            auto result = loadManifest(file.path());
            if (result) {
                if (result->type != source.second) {
                    continue;
                }
                manifests.try_emplace(result->name, std::move(*result));
            } else if (result.error()) {
                getLogger().error(
                    "Failed to load manifest for {0}"_tr(string_utils::u8str2str(file.path().stem().u8string()))
                );
                result.error().log(getLogger());
            }
        }
    }
}

} // namespace

struct ModRegistrar::Impl {
    std::recursive_mutex               mutex;
    data::DependencyGraph<std::string> lifecycleDependencies;
    std::vector<std::string>           loadedOrder;
    ModManagerRegistry&                registry = ModManagerRegistry::getInstance();

    void commitLoadedMod(std::string const& name) {
        auto mod = registry.getMod(name);
        if (!mod) {
            return;
        }

        lifecycleDependencies.emplace(name);
        if (!std::ranges::contains(loadedOrder, name)) {
            loadedOrder.emplace_back(name);
        }

        auto const& manifest = mod->getManifest();
        auto        bind     = [&](auto const& dependencies) {
            if (!dependencies) {
                return;
            }
            for (auto const& dependency : *dependencies) {
                auto target = registry.getMod(dependency.name);
                if (target && ModLoadPlanner::matchesDependency(target->getManifest(), dependency)) {
                    lifecycleDependencies.emplaceDependency(name, dependency.name);
                }
            }
        };
        bind(manifest.dependencies);
        bind(manifest.optionalDependencies);
    }

    void eraseLoadedMod(std::string const& name) {
        lifecycleDependencies.erase(name);
        std::erase(loadedOrder, name);
    }
};

ModRegistrar::ModRegistrar() : impl(std::make_unique<Impl>()) {}
ModRegistrar::~ModRegistrar() = default;

ModRegistrar& ModRegistrar::getInstance() {
    static ModRegistrar instance;
    return instance;
}

void ModRegistrar::loadAllMods() noexcept try {
    std::lock_guard lock(impl->mutex);

    getLogger().info("Loading mods..."_tr());
    auto& registry = impl->registry;
    if (!registry.hasManager(NativeModManagerName)
        && !registry.addManager(std::make_shared<NativeModManager>(getModsRoot()))) {
        getLogger().error("Failed to create native mod manager"_tr());
        return;
    }

    DenseMap<std::string, Manifest> manifests;
    DenseSet<std::string>           failedMods;
    DenseSet<std::filesystem::path> scannedManagerDirectorys;
    size_t                          loadedCount{};

    while (true) {
        auto manifestCount = manifests.size();
        for (auto const& source : getModLoadSources(registry)) {
            if (!scannedManagerDirectorys.emplace(source.first).second) {
                continue;
            }
            std::error_code                     ec;
            std::filesystem::directory_iterator files(source.first, ec);
            if (ec) {
                continue;
            }
            for (auto const& file : files) {
                if (!file.is_directory(ec)) {
                    continue;
                }
                auto result = loadManifest(file.path());
                if (result) {
                    if (manifests.contains(result->name)) {
                        continue;
                    }
                    manifests.try_emplace(result->name, std::move(*result));
                } else if (result.error()) {
                    getLogger().error(
                        "Failed to load manifest for {0}"_tr(string_utils::u8str2str(file.path().stem().u8string()))
                    );
                    result.error().log(getLogger());
                }
            }
        }

        auto plan = ModLoadPlanner::resolve(manifests, isClient());

        bool loadedAny{};
        bool configurationChanged{};
        auto configurationRevision = registry.getLoadConfigurationRevision();
        for (auto const& name : plan.order) {
            if (registry.hasMod(name) || failedMods.contains(name)) {
                continue;
            }
            auto& manifest = manifests.at(name);

            getLogger().info("Loading {0} v{1}"_tr(name, manifest.version.value_or(data::Version{0, 0, 0})));
            if (auto result = registry.loadMod(manifest); result) {
                impl->commitLoadedMod(name);
                ++loadedCount;
                loadedAny = true;
                getLogger().info("{0} loaded"_tr(name));
            } else {
                failedMods.emplace(name);
                getLogger().error("Failed to load mod {0}"_tr(name));
                result.error().log(getLogger());
            }
            if (registry.getLoadConfigurationRevision() != configurationRevision) {
                // A mod can register a manager while it is loading. Rebuild the plan after
                // scanning the newly registered manager so cross-manager dependencies remain ordered.
                configurationChanged = true;
                break;
            }
        }

        if (!configurationChanged && !loadedAny && manifests.size() == manifestCount) {
            for (auto const& name : sortedKeys(plan.rejected)) {
                logLoadIssue(name, plan.rejected.at(name));
            }
            break;
        }
    }

    getLogger().info("{0} mod(s) loaded"_tr(loadedCount));
} catch (...) {
    error_utils::printCurrentException(getLogger());
}

std::vector<std::string> ModRegistrar::getSortedModNames() const {
    std::lock_guard          lock(impl->mutex);
    std::vector<std::string> result;
    result.reserve(impl->loadedOrder.size());
    for (auto const& name : impl->loadedOrder) {
        if (impl->registry.hasMod(name)) {
            result.emplace_back(name);
        }
    }
    return result;
}

void ModRegistrar::enableAllMods() noexcept try {
    std::lock_guard lock(impl->mutex);
    auto            names = getSortedModNames();
    if (names.empty()) {
        return;
    }

    getLogger().info("Enabling mods..."_tr());
    auto   begin = std::chrono::steady_clock::now();
    size_t count{};
    for (auto const& name : names) {
        auto mod = impl->registry.getMod(name);
        if (!mod || mod->isEnabled()) {
            continue;
        }
        getLogger().info("Enabling {0} v{1}"_tr(name, mod->getManifest().version.value_or(data::Version{0, 0, 0})));
        if (auto result = enableMod(name); result) {
            ++count;
        } else {
            getLogger().error("Failed to enable mod {0}"_tr(name));
            result.error().log(getLogger());
        }
    }
    if (count > 0) {
        getLogger().info(
            "{0} mod(s) enabled in ({1:.1f}s)"_tr(
                count,
                std::chrono::duration_cast<std::chrono::duration<double>>(std::chrono::steady_clock::now() - begin)
                    .count()
            )
        );
    }
} catch (...) {
    error_utils::printCurrentException(getLogger());
}

void ModRegistrar::disableAllMods() noexcept try {
    std::lock_guard lock(impl->mutex);
    auto            names = getSortedModNames();
    if (names.empty()) {
        return;
    }

    getLogger().info("Disabling mods..."_tr());
    for (auto const& name : std::ranges::reverse_view(names)) {
        auto mod = impl->registry.getMod(name);
        if (!mod || mod->isDisabled()) {
            continue;
        }
        getLogger().info("Disabling {0} v{1}"_tr(name, mod->getManifest().version.value_or(data::Version{0, 0, 0})));
        if (auto result = disableMod(name); !result) {
            result.error().log(getLogger(), io::LogLevel::Warn);
        }
    }
} catch (...) {
    error_utils::printCurrentException(getLogger());
}

Expected<> ModRegistrar::loadMod(std::string_view name, bool loadDependents) noexcept try {
    std::lock_guard lock(impl->mutex);
    auto            manifestResult = loadManifestFromRegisteredDirectories(impl->registry, name);
    if (!manifestResult) {
        if (manifestResult.error()) {
            return forwardError(
                makeI18nStringError<"Failed to load manifest for {0}">(name).error().join(
                    std::move(manifestResult.error())
                )
            );
        }
        return makeI18nStringError<"Mod does not exist, or the manifest is empty">();
    }

    auto& registry   = impl->registry;
    auto  loadSingle = [&](Manifest manifest) -> Expected<> {
        if (!ModLoadPlanner::isPlatformCompatible(manifest, isClient())) {
            return makeI18nStringError<"{0} is not compatible with current platform">(manifest.name);
        }

        if (manifest.dependencies) {
            for (auto const& dependency : *manifest.dependencies) {
                auto target = registry.getMod(dependency.name);
                if (!target) {
                    return makeI18nStringError<"Missing dependency {0}">(dependencyDescription(dependency));
                }
                if (!ModLoadPlanner::matchesDependency(target->getManifest(), dependency)) {
                    return makeI18nStringError<"Dependency {0} requires {1}, but found {2}">(
                        dependency.name,
                        dependency.version.transform([](auto const& value) { return value.to_string(); }).value_or("*"),
                        target->getManifest().version.transform(
                                                         [](auto const& value) { return value.to_string(); }
                        ).value_or("unversioned")
                    );
                }
            }
        }

        if (manifest.conflicts) {
            for (auto const& conflict : *manifest.conflicts) {
                auto target = registry.getMod(conflict.name);
                if (target && ModLoadPlanner::matchesDependency(target->getManifest(), conflict)) {
                    return makeI18nStringError<"{0} conflicts with {1}">(
                        manifest.name,
                        dependencyDescription(conflict)
                    );
                }
            }
        }
        for (auto const& loaded : registry.mods()) {
            auto const& loadedManifest = loaded.getManifest();
            if (!loadedManifest.conflicts) {
                continue;
            }
            for (auto const& conflict : *loadedManifest.conflicts) {
                if (conflict.name == manifest.name && ModLoadPlanner::matchesDependency(manifest, conflict)) {
                    return makeI18nStringError<"{0} conflicts with {1}">(loaded.getName(), manifest.name);
                }
            }
        }

        if (manifest.loadBefore) {
            for (auto const& dependency : *manifest.loadBefore) {
                auto target = registry.getMod(dependency.name);
                if (target && ModLoadPlanner::matchesDependency(target->getManifest(), dependency)) {
                    getLogger().warn(
                        "Loading {0} after {1}; its loadBefore constraint cannot be satisfied during dynamic load"_tr(
                            manifest.name,
                            dependency.name
                        )
                    );
                }
            }
        }

        std::string modName = manifest.name;
        return registry.loadMod(std::move(manifest)).transform([&, modName = std::move(modName)] {
            impl->commitLoadedMod(modName);
        });
    };

    auto rootManifest = *manifestResult;
    auto rootName     = rootManifest.name;
    if (auto result = loadSingle(std::move(*manifestResult)); !result) {
        return result;
    }
    if (!loadDependents) {
        return {};
    }

    DenseMap<std::string, Manifest> manifests;
    for (auto& mod : registry.mods()) {
        manifests.try_emplace(mod.getName(), mod.getManifest());
    }

    while (true) {
        scanRegisteredManifests(registry, manifests);
        if (auto root = registry.getMod(rootName)) {
            manifests.insert_or_assign(rootName, root->getManifest());
        } else {
            manifests.try_emplace(rootName, rootManifest);
        }

        DenseSet<std::string> roots{rootName};
        bool                  rootsChanged{};
        do {
            rootsChanged = false;
            for (auto const& [candidateName, candidate] : manifests) {
                if (roots.contains(candidateName) || !candidate.dependencies) {
                    continue;
                }
                for (auto const& dependency : *candidate.dependencies) {
                    if (!roots.contains(dependency.name)) {
                        continue;
                    }
                    auto target = manifests.find(dependency.name);
                    if (target != manifests.end() && ModLoadPlanner::matchesDependency(target->second, dependency)
                        && roots.emplace(candidateName).second) {
                        rootsChanged = true;
                    }
                    break;
                }
            }
        } while (rootsChanged);

        // Dynamic loading does not pull optional dependencies into the plan. They
        // are still bound by commitLoadedModTree when already loaded.
        DenseMap<std::string, Manifest> planManifests;
        for (auto const& [manifestName, manifest] : manifests) {
            auto planManifest = manifest;
            planManifest.optionalDependencies.reset();
            planManifests.emplace(manifestName, std::move(planManifest));
        }

        auto plan                  = ModLoadPlanner::resolve(planManifests, roots, isClient());
        auto configurationRevision = registry.getLoadConfigurationRevision();
        bool configurationChanged{};
        for (auto const& modName : plan.order) {
            if (registry.hasMod(modName)) {
                continue;
            }
            if (auto result = loadSingle(manifests.at(modName)); !result) {
                return result;
            }
            if (registry.getLoadConfigurationRevision() != configurationRevision) {
                configurationChanged = true;
                break;
            }
        }
        if (configurationChanged) {
            continue;
        }

        for (auto const& rejected : sortedKeys(plan.rejected)) {
            logLoadIssue(rejected, plan.rejected.at(rejected));
        }
        break;
    }
    return {};
} catch (...) {
    return makeExceptionError();
}

Expected<> ModRegistrar::reloadMod(std::string_view name, bool reloadDependents) noexcept try {
    std::lock_guard lock(impl->mutex);
    if (!impl->registry.hasMod(name)) {
        return makeI18nStringError<"Mod {0} not found">(name);
    }

    DenseSet<std::string> reloadSet{std::string{name}};
    if (reloadDependents) {
        std::vector<std::string> pending{std::string{name}};
        for (size_t index = 0; index < pending.size(); ++index) {
            auto const& current = pending[index];
            for (auto const& dependent : impl->lifecycleDependencies.dependentBy(current)) {
                if (reloadSet.emplace(dependent).second) {
                    pending.emplace_back(dependent);
                }
            }
        }
    }

    std::vector<std::string> reloadOrder;
    reloadOrder.reserve(reloadSet.size());
    for (auto const& loaded : impl->loadedOrder) {
        if (reloadSet.contains(loaded) && impl->registry.hasMod(loaded)) {
            reloadOrder.emplace_back(loaded);
        }
    }

    if (auto result = unloadMod(name, reloadDependents); !result) {
        return result;
    }
    for (auto const& modName : reloadOrder) {
        if (impl->registry.hasMod(modName)) {
            continue;
        }
        if (auto result = loadMod(modName); !result) {
            return result;
        }
    }
    return {};
} catch (...) {
    return makeExceptionError();
}

Expected<> ModRegistrar::unloadMod(std::string_view name, bool unloadDependents) noexcept try {
    std::lock_guard lock(impl->mutex);

    if (unloadDependents) {
        std::function<Expected<>(std::string_view)> unload = [&](std::string_view current) -> Expected<> {
            auto dependents = impl->lifecycleDependencies.dependentBy(std::string{current});
            for (auto const& loaded : std::ranges::reverse_view(impl->loadedOrder)) {
                if (!dependents.contains(loaded) || !impl->registry.hasMod(loaded)) {
                    continue;
                }
                if (auto result = unload(loaded); !result) {
                    return result;
                }
            }
            return unloadMod(current, false);
        };
        return unload(name);
    }

    std::string modName{name};
    auto        dependents = impl->lifecycleDependencies.dependentBy(modName);
    if (!dependents.empty()) {
        return makeI18nStringError<"{0} still depends on {1}">(dependents, name);
    }

    return impl->registry.unloadMod(name).transform([this, modName = std::move(modName)] {
        impl->eraseLoadedMod(modName);
    });
} catch (...) {
    return makeExceptionError();
}

Expected<> ModRegistrar::enableMod(std::string_view name, bool enableDependencies) noexcept try {
    std::lock_guard lock(impl->mutex);
    auto&           registry = impl->registry;
    auto            mod      = registry.getMod(name);
    if (!mod) {
        return makeI18nStringError<"Mod {0} not found">(name);
    }

    if (enableDependencies && mod->getManifest().dependencies) {
        for (auto const& dependency : *mod->getManifest().dependencies) {
            auto target = registry.getMod(dependency.name);
            if (!target || target->isEnabled()) {
                continue;
            }
            if (auto result = enableMod(dependency.name, true); !result) {
                return forwardError(
                    makeI18nStringError<"Failed to enable dependency {0} of {1}">(dependency.name, name)
                        .error()
                        .join(std::move(result.error()))
                );
            }
        }
    }

    SmallDenseSet<std::string> unavailable;
    auto const&                dependencies = mod->getManifest().dependencies;
    if (dependencies) {
        for (auto const& dependency : *dependencies) {
            auto target = registry.getMod(dependency.name);
            if (!target || !target->isEnabled()) {
                unavailable.emplace(dependency.name);
            }
        }
    }
    if (!unavailable.empty()) {
        return makeI18nStringError<"Dependency {0} of {1} is not enabled">(unavailable, name);
    }
    return registry.enableMod(name);
} catch (...) {
    return makeExceptionError();
}

Expected<> ModRegistrar::disableMod(std::string_view name, bool disableDependents) noexcept try {
    std::lock_guard lock(impl->mutex);
    auto&           registry = impl->registry;

    if (disableDependents) {
        auto dependents = impl->lifecycleDependencies.dependentBy(std::string{name});
        for (auto const& loaded : std::ranges::reverse_view(impl->loadedOrder)) {
            if (!dependents.contains(loaded)) {
                continue;
            }
            auto mod = registry.getMod(loaded);
            if (!mod || mod->isDisabled()) {
                continue;
            }
            if (auto result = disableMod(loaded, true); !result) {
                return result;
            }
        }
    }

    auto dependents = impl->lifecycleDependencies.dependentBy(std::string{name});
    erase_if(dependents, [&](auto const& dependent) {
        auto mod = registry.getMod(dependent);
        return !mod || mod->isDisabled();
    });
    if (!dependents.empty()) {
        return makeI18nStringError<"{0} still depends on {1}">(dependents, name);
    }
    return registry.disableMod(name);
} catch (...) {
    return makeExceptionError();
}

} // namespace ll::mod
