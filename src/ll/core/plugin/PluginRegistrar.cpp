#include "ll/core/plugin/PluginRegistrar.h"

#include <chrono>
#include <cstddef>
#include <filesystem>
#include <memory>
#include <mutex>
#include <ranges>
#include <string>
#include <string_view>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

#include "nlohmann/json.hpp"
#include "nlohmann/json_fwd.hpp"

#include "ll/api/data/DependencyGraph.h"
#include "ll/api/data/Version.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/plugin/Manifest.h"
#include "ll/api/plugin/Plugin.h"
#include "ll/api/plugin/PluginManager.h"
#include "ll/api/plugin/PluginManagerRegistry.h"
#include "ll/api/reflection/Deserialization.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/plugin/NativePluginManager.h"


#include "mc/external/expected_lite/expected.h"
#include "mc/server/ServerInstance.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

using namespace ::ll::i18n_literals;

namespace ll::plugin {

struct PluginRegistrar::Impl {
    std::recursive_mutex               mutex;
    data::DependencyGraph<std::string> deps;
};

PluginRegistrar::PluginRegistrar() : impl(std::make_unique<Impl>()) {}
PluginRegistrar::~PluginRegistrar() = default;

static bool checkVersion(Manifest const& real, Dependency const& need) {
    if (!real.version || !need.version) {
        return true;
    }
    return real.version->major == need.version->major && (*real.version) >= (*need.version);
}
static Expected<Manifest> loadManifest(std::filesystem::path const& dir) {
    auto content = file_utils::readFile(dir / u8"manifest.json");
    if (!content || content->empty()) {
        return makeSuccessError();
    }
    auto json = nlohmann::json::parse(*content, nullptr, false, true);
    if (json.is_discarded()) {
        return makeStringError("Manifest is not a valid JSON text"_tr());
    }
    std::string dirName = string_utils::u8str2str(dir.filename().u8string());
    Manifest    manifest;
    try {
        reflection::deserialize<nlohmann::json, Manifest>(manifest, json);
    } catch (...) {
        return makeExceptionError();
    }
    if (manifest.type == "preload-native" /*NativePluginTypeName*/) {
        return makeSuccessError(); // bypass preloader plugin
    }
    if (manifest.name != dirName) {
        return makeStringError("Plugin name {} do not match folder {}"_tr(manifest.name, dirName));
    }
    return manifest;
}

PluginRegistrar& PluginRegistrar::getInstance() {
    static PluginRegistrar instance;
    return instance;
}

void PluginRegistrar::loadAllPlugins() {
    std::lock_guard lock(impl->mutex);

    std::unordered_map<std::string, Manifest> manifests;

    logger.info("Loading plugins..."_tr());

    auto& registry = PluginManagerRegistry::getInstance();

    if (!registry.addManager(std::make_shared<NativePluginManager>())) {
        logger.error("Failed to create native plugin manager"_tr());
        return;
    }

    for (auto& file : std::filesystem::directory_iterator(getPluginsRoot())) {
        if (!file.is_directory()) {
            continue;
        }
        if (auto res = loadManifest(file.path()).transform([&](auto&& manifest) {
                manifests.try_emplace(manifest.name, std::forward<decltype(manifest)>(manifest));
            });
            !res) {
            if (res.error()) {
                logger.error("Failed to load manifest for {}"_tr(string_utils::u8str2str(file.path().stem().u8string()))
                );
                res.error().log(logger.error);
            }
            continue;
        }
    }

    std::unordered_set<std::string> needLoad;
    for (auto& [name, manifest] : manifests) {
        if (manifest.passive == true) {
            continue;
        }
        if (manifest.dependencies) {
            bool error = false;
            for (auto& dependency : *manifest.dependencies) {
                if (!manifests.contains(dependency.name) || !checkVersion(manifests.at(dependency.name), dependency)) {
                    error = true;
#if _HAS_CXX23
                    logger.error("Missing dependency {}"_tr(
                        dependency.version
                            .transform([&](auto& ver) {
                                return fmt::format("{} v{}", dependency.name, ver.to_string());
                            })
                            .value_or(dependency.name)
                    ));
#endif
                }
            }
            if (error) {
                logger.error("The dependencies of {} are missing, will not be loaded"_tr(name));
                continue;
            }
            for (auto& dependency : *manifest.dependencies) {
                needLoad.emplace(dependency.name);
            }
        }
        needLoad.emplace(name);
        if (manifest.optionalDependencies) {
            for (auto& dependency : *manifest.optionalDependencies) {
                if (manifests.contains(dependency.name) && checkVersion(manifests.at(dependency.name), dependency)) {
                    needLoad.emplace(dependency.name);
                }
            }
        }
    }
    std::vector<std::string> conflicts;
    for (auto& name : needLoad) {
        auto& manifest = manifests.at(name);
        if (!manifest.conflicts) {
            continue;
        }
        for (auto& conflict : *manifest.conflicts) {
            if (manifests.contains(conflict.name) && checkVersion(manifests.at(conflict.name), conflict)) {
                conflicts.emplace_back(name);
#if _HAS_CXX23
                logger.error("{} conflicts with {}"_tr(
                    name,
                    conflict.version
                        .transform([&](auto& ver) { return fmt::format("{} v{}", conflict.name, ver.to_string()); })
                        .value_or(conflict.name)
                ));
#endif
            }
        }
    }
    for (auto& name : conflicts) {
        needLoad.erase(name);
    }
    for (auto& name : needLoad) {
        auto& manifest = manifests.at(name);
        if (manifest.dependencies) {
            bool deniedByConflict = false;
            for (auto& dependency : *manifest.dependencies) {
                if (!needLoad.contains(dependency.name)) {
                    deniedByConflict = true;
                }
            }
            if (deniedByConflict) {
                logger.error("The dependencies of {} are in conflict, will not be loaded"_tr(name));
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
                if (needLoad.contains(dependency.name)) {
                    impl->deps.emplaceDependency(name, dependency.name);
                }
            }
        }
        if (manifest.loadBefore) {
            for (auto& dependency : *manifest.loadBefore) {
                if (needLoad.contains(dependency.name) && checkVersion(manifests.at(dependency.name), dependency)) {
                    impl->deps.emplaceDependency(dependency.name, name);
                }
            }
        }
    }
    auto sort = impl->deps.sort();
    for (auto& name : sort.unsorted) {
        logger.error("The dependencies of {} are in loops, will not be loaded"_tr(name));
    }

    std::unordered_set<std::string> loadErrored;
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
                logger.error("The dependencies of {} is not loaded, will not be loaded"_tr(name));
                loadErrored.emplace(name);
                continue;
            }
        }
        logger.info("Loading {0} v{1}"_tr(name, manifest.version.value_or(data::Version{0, 0, 0})));
        if (auto res = registry.loadPlugin(std::move(manifest)); res) {
            logger.info("{} loaded"_tr(name));
        } else {
            loadErrored.emplace(name);
            logger.error("Failed to load {}"_tr(name));
            res.error().log(logger.error);
        }
    }
    size_t loadedCount = sort.sorted.size() - loadErrored.size();

    for (auto& errored : loadErrored) {
        impl->deps.erase(errored);
    }

    static ll::memory::HookRegistrar<EnableAllPlugins, DisableAllPlugins> reg;

    logger.info("{} plugin(s) loaded"_tr(loadedCount));
}

std::vector<std::string> PluginRegistrar::getSortedPluginNames() const {
    std::lock_guard lock(impl->mutex);
    return impl->deps.sort().sorted;
}

LL_TYPE_INSTANCE_HOOK(
    PluginRegistrar::EnableAllPlugins,
    ll::memory::HookPriority::High,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    origin(ins);
    logger.info("Enabling plugins..."_tr());
    auto   begin     = std::chrono::steady_clock::now();
    auto&  registrar = PluginRegistrar::getInstance();
    size_t count{};
    for (auto& name : registrar.getSortedPluginNames()) {
        auto plugin = PluginManagerRegistry::getInstance().getPlugin(name);
        if (!plugin) continue;
        if (plugin->isEnabled()) continue;
        logger.info("Enabling {0} v{1}"_tr(name, plugin->getManifest().version.value_or(data::Version{0, 0, 0})));
        if (auto res = registrar.enablePlugin(name); res) {
            count++;
        } else {
            logger.error("Failed to enable {}"_tr(name));
            res.error().log(logger.error);
        }
    }
    if (count > 0) {
        logger.info("{} plugin(s) enabled in ({:.1f}s)"_tr(
            count,
            std::chrono::duration_cast<std::chrono::duration<double>>(std::chrono::steady_clock::now() - begin).count()
        ));
    }
}
LL_TYPE_INSTANCE_HOOK(
    PluginRegistrar::DisableAllPlugins,
    HookPriority::Low,
    ServerInstance,
    &ServerInstance::leaveGameSync,
    void
) {
    logger.info("Disabling plugins..."_tr());
    auto& registrar = PluginRegistrar::getInstance();
    for (auto& name : std::ranges::reverse_view(registrar.getSortedPluginNames())) {
        auto plugin = PluginManagerRegistry::getInstance().getPlugin(name);
        if (!plugin) continue;
        if (plugin->isDisabled()) continue;
        logger.info("Disabling {0} v{1}"_tr(name, plugin->getManifest().version.value_or(data::Version{0, 0, 0})));
        registrar.disablePlugin(name);
    }
    origin();
}

Expected<> PluginRegistrar::loadPlugin(std::string_view name) noexcept {
    std::lock_guard lock(impl->mutex);
    auto            res = loadManifest(getPluginsRoot() / string_utils::sv2u8sv(name));
    if (!res) {
        if (res.error()) {
            return forwardError(makeStringError("Failed to load manifest for {}"_tr(name)).value().join(res.error()));
        } else {
            return makeStringError("Plugin does not exist, or the manifest is empty"_tr());
        }
    }
    auto& manifest = *res;
    // TODO: check deps,...,......
    return PluginManagerRegistry::getInstance().loadPlugin(std::move(manifest)).transform([&, this]() {
        impl->deps.emplace(std::string{name});
    });
}
Expected<> PluginRegistrar::unloadPlugin(std::string_view name) noexcept {
    std::lock_guard lock(impl->mutex);
    auto            dependents = impl->deps.dependentBy(std::string{name});
    if (!dependents.empty()) {
        return makeStringError("{} is still dependent on {}"_tr(name, dependents));
    }
    return PluginManagerRegistry::getInstance().unloadPlugin(name).transform([&, this]() {
        impl->deps.erase(std::string{name});
    });
}
Expected<> PluginRegistrar::enablePlugin(std::string_view name) noexcept {
    std::lock_guard lock(impl->mutex);
    auto&           registry   = PluginManagerRegistry::getInstance();
    auto            dependents = impl->deps.dependentOn(std::string{name});
    if (!dependents.empty()) {
        for (auto& depName : dependents) {
            if (auto ptr = registry.getPlugin(depName)) {
                if (ptr->isEnabled()) {
                    continue;
                }
                return makeStringError("Dependency {} of {} is not enabled"_tr(depName, name));
            }
        }
    }
    return registry.enablePlugin(name);
}
Expected<> PluginRegistrar::disablePlugin(std::string_view name) noexcept {
    std::lock_guard lock(impl->mutex);
    auto&           registry   = PluginManagerRegistry::getInstance();
    auto            dependents = impl->deps.dependentBy(std::string{name});
    if (!dependents.empty()) {
        for (auto& depName : dependents) {
            if (auto ptr = registry.getPlugin(depName)) {
                if (ptr->isDisabled()) {
                    continue;
                }
                return makeStringError("{} is still dependent on {}"_tr(name, depName));
            }
        }
    }
    return registry.disablePlugin(name);
}
} // namespace ll::plugin
