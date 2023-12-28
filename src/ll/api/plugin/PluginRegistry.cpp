#include "ll/api/plugin/PluginRegistry.h"

#include "ll/core/LeviLamina.h"

namespace ll::plugin {
PluginRegistry& PluginRegistry::getInstance() {
    static PluginRegistry instance;
    return instance;
}
bool checkVersion(Manifest const& real, Manifest::Dependency const& need) {
    if (!real.version || !need.version) {
        return true;
    }
    // check version range
    return true;
}

void some() {
    DependencyGraph<std::string>              deps;
    std::unordered_map<std::string, Manifest> manifests;

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
                    // error: need dependency.name .ver
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
                // error: conflict
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
        // error: cycle
    }
    std::unordered_set<std::string> loadErrored;
    for (auto& name : sort.sorted) {
        auto& manifest = manifests.at(name);
        if (manifest.dependencies) {
            bool deniedByDepError = false;
            for (auto& dependency : *manifest.dependencies) {
                if (loadErrored.contains(dependency.name)) {
                    deniedByDepError = true;
                    // error: deps not loaded
                }
            }
            if (deniedByDepError) {
                loadErrored.emplace(name);
                continue;
            }
        }
        if (true /*load*/) {
            // load xxx
        } else {
            loadErrored.emplace(name);
            // error: fail to load
        }
    }
}
} // namespace ll::plugin