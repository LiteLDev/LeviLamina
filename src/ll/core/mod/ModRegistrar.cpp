#include "ll/core/mod/ModRegistrar.h"

#include <chrono>
#include <cstddef>
#include <filesystem>
#include <memory>
#include <mutex>
#include <ranges>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/base/Containers.h"
#include "ll/api/data/DependencyGraph.h"
#include "ll/api/data/Version.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/mod/Manifest.h"
#include "ll/api/mod/Mod.h"
#include "ll/api/mod/ModManager.h"
#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/reflection/Deserialization.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"

#include "ll/core/LeviLamina.h"
#include "ll/core/mod/NativeModManager.h"

#include "nlohmann/json.hpp"

#include "pl/Config.h"

namespace ll::mod {
struct ModRegistrar::Impl {
    std::recursive_mutex               mutex;
    data::DependencyGraph<std::string> deps;
    ModManagerRegistry&                registry = ModManagerRegistry::getInstance();
};

ModRegistrar::ModRegistrar() : impl(std::make_unique<Impl>()) {}
ModRegistrar::~ModRegistrar() = default;

ModRegistrar& ModRegistrar::getInstance() {
    static ModRegistrar instance;
    return instance;
}

static bool checkVersion(Manifest const& real, Dependency const& need) {
    if (!real.version || !need.version) {
        return true;
    }
    return real.version->major == need.version->major && (*real.version) >= (*need.version);
}
static Expected<Manifest> loadManifest(std::filesystem::path const& dir) {
    auto content = file_utils::readFile(dir / u8"manifest.json");
    if (!content || content->empty()) {
        return makeSuccessed();
    }
    auto json = nlohmann::json::parse(*content, nullptr, false, true);
    if (json.is_discarded()) {
        return makeStringError("Manifest is not a valid JSON text"_tr());
    }
    return ::ll::reflection::deserialize_to<Manifest>(json).and_then([&](auto&& manifest) -> Expected<Manifest> {
        using namespace pl;
        if (manifest.type == pl::pl_mod_manager_name) {
            return makeSuccessed(); // bypass preloader mod
        }
        if (std::string dirName = string_utils::u8str2str(dir.filename().u8string()); manifest.name != dirName) {
            return makeStringError("Mod name {0} do not match folder {1}"_tr(manifest.name, dirName));
        }
        return manifest;
    });
}

void ModRegistrar::loadAllMods() noexcept try {
    std::lock_guard lock(impl->mutex);

    DenseMap<std::string, Manifest> manifests;

    getLogger().info("Loading mods..."_tr());

    auto& registry = impl->registry;

    if (!registry.addManager(std::make_shared<NativeModManager>())) {
        getLogger().error("Failed to create native mod manager"_tr());
        return;
    }

    for (auto& file : std::filesystem::directory_iterator(getModsRoot())) {
        if (!file.is_directory()) {
            continue;
        }
        if (auto res = loadManifest(file.path()).transform([&](auto&& manifest) {
                manifests.try_emplace(manifest.name, std::forward<decltype(manifest)>(manifest));
            });
            !res) {
            if (res.error()) {
                getLogger().error(
                    "Failed to load manifest for {0}"_tr(string_utils::u8str2str(file.path().stem().u8string()))
                );
                res.error().log(getLogger());
            }
            continue;
        }
    }

    DenseSet<std::string>    loadingQueueHash;
    std::vector<std::string> pendingRemoved;
    std::queue<std::string>  loadingQueue;

    for (auto& [name, manifest] : manifests) {
        if (manifest.passive == true) {
            continue;
        }
        loadingQueue.push(name);
        loadingQueueHash.emplace(name);
    }

    while (!loadingQueue.empty()) {
        auto name = std::move(loadingQueue.front());
        loadingQueue.pop();
        auto& manifest = manifests.at(name);
        if (manifest.dependencies) {
            bool error = false;
            for (auto& dependency : *manifest.dependencies) {
                if (!manifests.contains(dependency.name) || !checkVersion(manifests.at(dependency.name), dependency)) {
                    error = true;
                    getLogger().error(
                        "Missing dependency {0}"_tr(
                            dependency.version
                                .transform([&](auto& ver) {
                                    return fmt::format("{} v{}", dependency.name, ver.to_string());
                                })
                                .value_or(dependency.name)
                        )
                    );
                }
            }
            if (error) {
                getLogger().error("{0} will not be loaded because the dependencies are missing"_tr(name));
                pendingRemoved.emplace_back(name);
                continue;
            }
            for (auto& dependency : *manifest.dependencies) {
                if (loadingQueueHash.emplace(dependency.name).second) {
                    loadingQueue.push(dependency.name);
                }
            }
        }
        if (manifest.optionalDependencies) {
            for (auto& dependency : *manifest.optionalDependencies) {
                if (manifests.contains(dependency.name) && checkVersion(manifests.at(dependency.name), dependency)) {
                    if (loadingQueueHash.emplace(dependency.name).second) {
                        loadingQueue.push(dependency.name);
                    }
                }
            }
        }
    }
    for (auto& name : loadingQueueHash) {
        auto& manifest = manifests.at(name);
        if (!manifest.conflicts) {
            continue;
        }
        for (auto& conflict : *manifest.conflicts) {
            if (manifests.contains(conflict.name) && checkVersion(manifests.at(conflict.name), conflict)) {
                pendingRemoved.emplace_back(name);
                getLogger().error(
                    "{0} conflicts with {1}"_tr(
                        name,
                        conflict.version
                            .transform([&](auto& ver) { return fmt::format("{} v{}", conflict.name, ver.to_string()); })
                            .value_or(conflict.name)
                    )
                );
            }
        }
    }
    for (auto& name : pendingRemoved) {
        loadingQueueHash.erase(name);
    }
    for (auto& name : loadingQueueHash) {
        auto& manifest = manifests.at(name);
        if (manifest.dependencies && !manifest.dependencies->empty()) {
            bool denied = false;
            for (auto& dependency : *manifest.dependencies) {
                if (!loadingQueueHash.contains(dependency.name)) {
                    denied = true;
                }
            }
            if (denied) {
                getLogger().error("{0} will not be loaded because the dependencies can't loaded"_tr(name));
                continue;
            }
            for (auto& dependency : *manifest.dependencies) {
                impl->deps.emplaceDependency(name, dependency.name);
            }
        } else {
            impl->deps.emplace(name);
        }
        if (manifest.optionalDependencies) {
            for (auto& dependency : *manifest.optionalDependencies) {
                if (loadingQueueHash.contains(dependency.name)) {
                    impl->deps.emplaceDependency(name, dependency.name);
                }
            }
        }
        if (manifest.loadBefore) {
            for (auto& dependency : *manifest.loadBefore) {
                if (loadingQueueHash.contains(dependency.name)
                    && checkVersion(manifests.at(dependency.name), dependency)) {
                    impl->deps.emplaceDependency(dependency.name, name);
                }
            }
        }
    }
    auto sort = impl->deps.sort();
    for (auto& name : sort.unsorted) {
        getLogger().error("{0} will not be loaded because the dependency are in loops"_tr(name));
    }
    DenseSet<std::string> loadErrored;
    for (auto& name : sort.sorted) {
        auto& manifest = manifests.at(name);
        if (manifest.dependencies) {
            bool deniedByDepError = false;
            for (auto& dependency : *manifest.dependencies) {
                if (loadErrored.contains(dependency.name)) {
                    deniedByDepError = true;
                }
            }
            if (deniedByDepError) {
                getLogger().error("{0} will not be loaded because the dependencies are not loaded"_tr(name));
                loadErrored.emplace(name);
                continue;
            }
        }
        getLogger().info("Loading {0} v{1}"_tr(name, manifest.version.value_or(data::Version{0, 0, 0})));
        if (auto res = registry.loadMod(std::move(manifest)); res) {
            getLogger().info("{0} loaded"_tr(name));
        } else {
            loadErrored.emplace(name);
            getLogger().error("Failed to load mod {0}"_tr(name));
            res.error().log(getLogger());
        }
    }
    size_t loadedCount = sort.sorted.size() - loadErrored.size();

    for (auto& errored : std::ranges::reverse_view(sort.sorted)) {
        if (loadErrored.contains(errored)) impl->deps.erase(errored);
    }

    getLogger().info("{0} mod(s) loaded"_tr(loadedCount));
} catch (...) {
    error_utils::printCurrentException(getLogger());
}

std::vector<std::string> ModRegistrar::getSortedModNames() const {
    std::lock_guard lock(impl->mutex);
    return impl->deps.sort().sorted;
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
    for (auto& name : names) {
        auto mod = impl->registry.getMod(name);
        if (!mod || mod->isEnabled()) continue;
        getLogger().info("Enabling {0} v{1}"_tr(name, mod->getManifest().version.value_or(data::Version{0, 0, 0})));
        if (auto res = enableMod(name); res) {
            count++;
        } else {
            getLogger().error("Failed to enable mod {0}"_tr(name));
            res.error().log(getLogger());
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
    if (!names.empty()) {
        getLogger().info("Disabling mods..."_tr());
        for (auto& name : std::ranges::reverse_view(names)) {
            auto mod = impl->registry.getMod(name);
            if (!mod || mod->isDisabled()) continue;
            getLogger().info(
                "Disabling {0} v{1}"_tr(name, mod->getManifest().version.value_or(data::Version{0, 0, 0}))
            );
            if (auto res = disableMod(name); !res) {
                res.error().log(getLogger(), io::LogLevel::Warn);
            }
        }
    }
} catch (...) {
    error_utils::printCurrentException(getLogger());
}

Expected<> ModRegistrar::loadMod(std::string_view name) noexcept {
    std::lock_guard lock(impl->mutex);
    auto            res = loadManifest(getModsRoot() / string_utils::sv2u8sv(name));
    if (!res) {
        if (res.error()) {
            return forwardError(
                makeStringError("Failed to load manifest for {0}"_tr(name)).error().join(std::move(res.error()))
            );
        } else {
            return makeStringError("Mod does not exist, or the manifest is empty"_tr());
        }
    }
    auto& manifest = *res;
    auto& reg      = impl->registry;
    if (manifest.dependencies) {
        for (auto& dependency : *manifest.dependencies) {
            if (!reg.hasMod(dependency.name) || !checkVersion(reg.getMod(dependency.name)->getManifest(), dependency)) {
                return makeStringError(
                    "Missing dependency {0}"_tr(dependency.version
                                                    .transform([&](auto& ver) {
                                                        return fmt::format("{} v{}", dependency.name, ver.to_string());
                                                    })
                                                    .value_or(dependency.name))
                );
            }
        }
    }
    if (manifest.conflicts) {
        for (auto& conflict : *manifest.conflicts) {
            if (reg.hasMod(conflict.name) && checkVersion(reg.getMod(conflict.name)->getManifest(), conflict)) {
                return makeStringError(
                    "{0} conflicts with {1}"_tr(
                        name,
                        conflict.version
                            .transform([&](auto& ver) { return fmt::format("{} v{}", conflict.name, ver.to_string()); })
                            .value_or(conflict.name)
                    )
                );
            }
        }
    }
    return reg.loadMod(std::move(manifest)).transform([&, this]() { impl->deps.emplace(std::string{name}); });
}
Expected<> ModRegistrar::unloadMod(std::string_view name) noexcept {
    std::lock_guard lock(impl->mutex);
    auto            dependents = impl->deps.dependentBy(std::string{name});
    if (!dependents.empty()) {
        return makeStringError("{0} still depends on {1}"_tr(dependents, name));
    }
    return impl->registry.unloadMod(name).transform([&, this]() { impl->deps.erase(std::string{name}); });
}
Expected<> ModRegistrar::enableMod(std::string_view name) noexcept {
    std::lock_guard lock(impl->mutex);
    auto&           registry   = impl->registry;
    auto            dependents = impl->deps.dependentOn(std::string{name});
    erase_if(dependents, [&](auto& name) {
        if (auto ptr = registry.getMod(name); ptr) {
            return ptr->isEnabled();
        }
        return false;
    });
    if (!dependents.empty()) {
        return makeStringError("Dependency {0} of {1} is not enabled"_tr(dependents, name));
    }
    return registry.enableMod(name);
}
Expected<> ModRegistrar::disableMod(std::string_view name) noexcept {
    std::lock_guard lock(impl->mutex);
    auto&           registry   = impl->registry;
    auto            dependents = impl->deps.dependentBy(std::string{name});
    erase_if(dependents, [&](auto& name) {
        if (auto ptr = registry.getMod(name); ptr) {
            return ptr->isDisabled();
        }
        return true;
    });
    if (!dependents.empty()) {
        return makeStringError("{0} still depends on {1}"_tr(dependents, name));
    }
    return registry.disableMod(name);
}
} // namespace ll::mod
