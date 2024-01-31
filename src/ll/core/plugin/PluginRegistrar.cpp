#include "ll/core/plugin/PluginRegistrar.h"

#include <cstddef>
#include <expected>
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

#include "ll/api/base/Concepts.h" // IWYU pragma: keep
#include "ll/api/data/DependencyGraph.h"
#include "ll/api/i18n/I18nAPI.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/plugin/Manifest.h"
#include "ll/api/plugin/Plugin.h"
#include "ll/api/plugin/PluginManagerRegistry.h"
#include "ll/api/reflection/Deserialization.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/plugin/NativePluginManager.h"


#include "mc/server/ServerInstance.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

namespace ll::plugin {
using namespace i18n_literals;

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
    // TODO: check version range
    return true;
}

enum class DirState {
    Empty,
    Error,
    Success,
};

static std::expected<Manifest, DirState> loadManifest(std::filesystem::path const& dir) {
    auto content = file_utils::readFile(dir / u8"manifest.json");
    if (!content || content->empty()) {
        return std::unexpected{DirState::Empty};
    }
    auto json = nlohmann::json::parse(*content, nullptr, false, true);
    if (json.is_discarded()) {
        return std::unexpected{DirState::Error};
    }
    std::string dirName = string_utils::u8str2str(dir.filename().u8string());
    Manifest    manifest;
    try {
        reflection::deserialize<nlohmann::json, Manifest>(manifest, json);
    } catch (...) {
        error_utils::printCurrentException(logger);
        return std::unexpected{DirState::Error};
    }
    if (manifest.name != dirName) {
        logger.error("ll.plugin.error.nameUnmatch"_tr(manifest.name, dirName));
        return std::unexpected{DirState::Error};
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

    ll::logger.info("ll.loader.loadMain.start"_tr);

    auto& registry = PluginManagerRegistry::getInstance();

    if (!registry.addManager(std::make_shared<NativePluginManager>())) {
        logger.error("ll.plugin.error.failCreateNativePluginManager"_tr);
        return;
    }

    for (auto& file : std::filesystem::directory_iterator(getPluginsRoot())) {
        if (!file.is_directory()) {
            continue;
        }
        auto res = loadManifest(file.path())
                       .transform([&](auto&& manifest) {
                           manifests.emplace(std::string{manifest.name}, std::forward<decltype(manifest)>(manifest));
                       })
                       .error_or(DirState::Success);
        if (res != DirState::Success) {
            if (res == DirState::Error) {
                logger.error("ll.plugin.error.failToLoad"_tr(string_utils::u8str2str(file.path().stem().u8string())));
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
                    logger.error("ll.plugin.error.lackDependence"_tr(
                        dependency.version.transform([&](auto& ver) { return dependency.name + " " + ver; }
                        ).value_or(dependency.name)
                    ));
#endif
                }
            }
            if (error) {
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
                logger.error("ll.plugin.error.conflict"_tr(
                    name,
                    conflict.version.transform([&](auto& ver) { return conflict.name + " " + ver; }
                    ).value_or(conflict.name)
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
        logger.error("ll.plugin.error.cycleDeps"_tr(name));
    }

    std::unordered_set<std::string> loadErrored;
    for (auto& name : sort.sorted) {
        auto& manifest = manifests.at(name);
        if (manifest.dependencies) {
            bool deniedByDepError = false;
            for (auto& dependency : *manifest.dependencies) {
                if (loadErrored.contains(dependency.name)) {
                    deniedByDepError = true;
                    logger.error("ll.plugin.error.depsNotLoaded"_tr(name, dependency.name));
                }
            }
            if (deniedByDepError) {
                loadErrored.emplace(name);
                continue;
            }
        }
        if (registry.loadPlugin(std::move(manifest))) {
            logger.info("ll.plugin.info.loaded"_tr(name));
        } else {
            loadErrored.emplace(name);
            logger.error("ll.plugin.error.failToLoad"_tr(name));
        }
    }
    size_t loadedCount = sort.sorted.size() - loadErrored.size();

    static ll::memory::HookRegistrar<EnableAllPlugins, DisableAllPlugins> reg;

    ll::logger.info("ll.loader.loadMain.done"_tr(loadedCount));
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
    try {
        auto& registrar = PluginRegistrar::getInstance();
        for (auto& name : registrar.getSortedPluginNames()) {
            try {
                registrar.enablePlugin(name);
            } catch (...) {
                error_utils::printCurrentException(logger);
            }
        }
    } catch (...) {
        error_utils::printCurrentException(logger);
    }
}
LL_TYPE_INSTANCE_HOOK(
    PluginRegistrar::DisableAllPlugins,
    HookPriority::Low,
    ServerInstance,
    &ServerInstance::leaveGameSync,
    void
) {
    try {
        auto& registrar = PluginRegistrar::getInstance();
        for (auto& name : std::ranges::reverse_view(registrar.getSortedPluginNames())) {
            try {
                registrar.disablePlugin(name);
            } catch (...) {
                error_utils::printCurrentException(logger);
            }
        }
    } catch (...) {
        error_utils::printCurrentException(logger);
    }
    origin();
}

bool PluginRegistrar::loadPlugin(std::string_view name) {
    std::lock_guard lock(impl->mutex);
    auto            res = loadManifest(getPluginsRoot() / string_utils::sv2u8sv(name));
    if (!res.has_value()) {
        logger.error("ll.plugin.error.failToLoad"_tr(name));
        return false;
    }
    auto& manifest = *res;
    // TODO: check deps,...,......
    if (PluginManagerRegistry::getInstance().loadPlugin(std::move(manifest))) {
        impl->deps.emplace(std::string{name});
        return true;
    }
    return false;
}
bool PluginRegistrar::unloadPlugin(std::string_view name) {
    std::lock_guard lock(impl->mutex);
    auto            dependents = impl->deps.dependentBy(std::string{name});
    if (!dependents.empty()) {
        logger.error("ll.plugin.error.stillHasDependentsLoaded"_tr(dependents));
    } else if (PluginManagerRegistry::getInstance().unloadPlugin(name)) {
        impl->deps.erase(std::string{name});
        return true;
    }
    return false;
}
bool PluginRegistrar::enablePlugin(std::string_view name) {
    std::lock_guard lock(impl->mutex);
    auto&           registry   = PluginManagerRegistry::getInstance();
    auto            dependents = impl->deps.dependentOn(std::string{name});
    if (!dependents.empty()) {
        for (auto& depName : dependents) {
            if (auto ptr = registry.getPlugin(depName)) {
                if (ptr->getState() == Plugin::State::Enabled) {
                    continue;
                }
                logger.error("ll.plugin.error.stillHasDependentsDisable"_tr(depName));
                return false;
            }
        }
    }
    if (registry.enablePlugin(name)) {
        impl->deps.erase(std::string{name});
        return true;
    }
    return false;
}
bool PluginRegistrar::disablePlugin(std::string_view name) {
    std::lock_guard lock(impl->mutex);
    auto&           registry   = PluginManagerRegistry::getInstance();
    auto            dependents = impl->deps.dependentBy(std::string{name});
    if (!dependents.empty()) {
        for (auto& depName : dependents) {
            if (auto ptr = registry.getPlugin(depName)) {
                if (ptr->getState() == Plugin::State::Disabled) {
                    continue;
                }
                logger.error("ll.plugin.error.stillHasDependentsEnable"_tr(depName));
                return false;
            }
        }
    }
    if (registry.disablePlugin(name)) {
        impl->deps.erase(std::string{name});
        return true;
    }
    return false;
}
} // namespace ll::plugin
