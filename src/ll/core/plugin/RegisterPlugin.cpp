#include "ll/core/plugin/RegisterPlugin.h"

#include "ll/api/base/ErrorInfo.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/reflection/Deserialization.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/plugin/NativePluginManager.h"

#include "ll/api/event/EventBus.h"
#include "ll/api/event/world/ServerStartedEvent.h"
#include "ll/api/event/world/ServerStoppingEvent.h"

namespace ll::plugin {
using namespace i18n_literals;

bool checkVersion(Manifest const& real, Dependency const& need) {
    if (!real.version || !need.version) {
        return true;
    }
    // check version range
    return true;
}

bool loadManifest(Manifest& manifest, std::filesystem::path const& file) {
    auto content = file_utils::readFile(file / u8"manifest.json");
    if (!content || content->empty()) {
        return false;
    }
    auto json = nlohmann::json::parse(*content, nullptr, false, true);
    if (json.is_discarded()) {
        return false;
    }
    std::string dirName = string_utils::u8str2str(file.stem().u8string());
    try {
        reflection::deserialize<nlohmann::json, Manifest>(manifest, json);
    } catch (...) {
        logger.error("ll.plugin.error.manifesterror"_tr, dirName);
        error_info::printCurrentException();
        return false;
    }
    if (manifest.name != dirName) {
        logger.error("ll.plugin.error.nameunmatch", manifest.name, dirName);
        return false;
    }
    return true;
}

void registerPlugins() {
    std::unordered_map<std::string, Manifest> manifests;

    ll::logger.info("ll.loader.loadMain.start"_tr);

    auto& registry = PluginManagerRegistry::getInstance();

    if (!registry.addManager("native", std::make_shared<NativePluginManager>())) {
        logger.error("ll.plugin.error.failcreatemanager"_tr);
        return;
    }

    for (auto& file : std::filesystem::directory_iterator(pluginsPath)) {
        if (!file.is_directory()) {
            continue;
        }
        Manifest manifest;
        if (!loadManifest(manifest, file.path())) {
            continue;
        }
        manifests.emplace(std::string{manifest.name}, std::move(manifest));
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
                    logger.error(
                        "ll.plugin.error.lackofdependence"_tr,
                        dependency.version.transform([&](auto& ver) { return dependency.name + " " + ver; }
                        ).value_or(dependency.name)
                    );
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
                logger.error(
                    "ll.plugin.error.conflict"_tr,
                    name,
                    conflict.version.transform([&](auto& ver) { return conflict.name + " " + ver; }
                    ).value_or(conflict.name)
                );
            }
        }
    }
    for (auto& name : conflicts) {
        needLoad.erase(name);
    }

    DependencyGraph<std::string> deps;
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
                deps.emplaceDependency(name, dependency.name);
            }
        } else {
            deps.emplace(name);
        }
        if (manifest.optionalDependencies) {
            for (auto& dependency : *manifest.optionalDependencies) {
                if (needLoad.contains(dependency.name)) {
                    deps.emplaceDependency(name, dependency.name);
                }
            }
        }
        if (manifest.loadBefore) {
            for (auto& dependency : *manifest.loadBefore) {
                if (needLoad.contains(dependency.name) && checkVersion(manifests.at(dependency.name), dependency)) {
                    deps.emplaceDependency(dependency.name, name);
                }
            }
        }
    }
    auto sort = deps.sort();
    for (auto& name : sort.unsorted) {
        logger.error("ll.plugin.error.cycle"_tr, name);
    }

    std::unordered_set<std::string> loadErrored;
    for (auto& name : sort.sorted) {
        auto& manifest = manifests.at(name);
        if (manifest.dependencies) {
            bool deniedByDepError = false;
            for (auto& dependency : *manifest.dependencies) {
                if (loadErrored.contains(dependency.name)) {
                    deniedByDepError = true;
                    logger.error("ll.plugin.error.depsnotloaded"_tr, name, dependency.name);
                }
            }
            if (deniedByDepError) {
                loadErrored.emplace(name);
                continue;
            }
        }
        if (registry.loadPlugin(std::move(manifest))) {
            logger.info("ll.plugin.info.loaded"_tr, name);
        } else {
            loadErrored.emplace(name);
            logger.error("ll.plugin.error.failtoload"_tr, name);
        }
    }
    size_t loadedCount = sort.sorted.size() - loadErrored.size();

    if (loadedCount > 0) {
        using namespace event;

        EventBus::getInstance().emplaceListener<ServerStartedEvent>(
            [plugins = sort.sorted](ServerStartedEvent&) {
                for (auto& plugin : plugins) {
                    PluginManagerRegistry::getInstance().forEachManager([&](std::string_view, PluginManager& manager) {
                        return !manager.enable(plugin);
                    });
                }
            },
            EventPriority::Highest
        );
        EventBus::getInstance().emplaceListener<ServerStoppingEvent>(
            [plugins = sort.sorted](ServerStoppingEvent&) {
                for (auto i = plugins.rbegin(); i != plugins.rend(); i++) {
                    PluginManagerRegistry::getInstance().forEachManager([&](std::string_view, PluginManager& manager) {
                        return !manager.disable(*i);
                    });
                }
            },
            EventPriority::Lowest
        );
    }

    ll::logger.info("ll.loader.loadMain.done"_tr, loadedCount);
}
} // namespace ll::plugin
