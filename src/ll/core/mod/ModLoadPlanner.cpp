#include "ll/core/mod/ModLoadPlanner.h"

#include <algorithm>
#include <cstddef>
#include <functional>
#include <queue>
#include <ranges>
#include <string>
#include <utility>
#include <vector>

namespace ll::mod {

namespace {

using Adjacency = DenseMap<std::string, SmallDenseSet<std::string>>;

void addEdge(
    Adjacency&                     adjacency,
    DenseMap<std::string, size_t>& indegree,
    std::string const&             before,
    std::string const&             after
) {
    if (adjacency[before].emplace(after).second) {
        ++indegree[after];
    }
}

std::vector<std::string> sortedNames(DenseSet<std::string> const& names) {
    std::vector<std::string> result{names.begin(), names.end()};
    std::ranges::sort(result);
    return result;
}

std::vector<std::string> topologicalSort(
    DenseSet<std::string> const&  active,
    Adjacency const&              adjacency,
    DenseMap<std::string, size_t> indegree
) {
    std::priority_queue<std::string, std::vector<std::string>, std::greater<>> ready;
    for (auto const& name : active) {
        if (indegree[name] == 0) {
            ready.emplace(name);
        }
    }

    std::vector<std::string> result;
    result.reserve(active.size());
    while (!ready.empty()) {
        auto name = ready.top();
        ready.pop();
        result.emplace_back(name);
        if (auto iter = adjacency.find(name); iter != adjacency.end()) {
            auto dependents = std::vector<std::string>{iter->second.begin(), iter->second.end()};
            std::ranges::sort(dependents);
            for (auto const& dependent : dependents) {
                if (--indegree[dependent] == 0) {
                    ready.emplace(dependent);
                }
            }
        }
    }
    return result;
}

std::vector<std::vector<std::string>> findCycles(DenseSet<std::string> const& active, Adjacency const& adjacency) {
    DenseMap<std::string, size_t>         index;
    DenseMap<std::string, size_t>         lowLink;
    DenseSet<std::string>                 onStack;
    std::vector<std::string>              stack;
    std::vector<std::vector<std::string>> cycles;
    size_t                                nextIndex{};

    std::function<void(std::string const&)> visit = [&](std::string const& name) {
        index[name]   = nextIndex;
        lowLink[name] = nextIndex++;
        stack.emplace_back(name);
        onStack.emplace(name);

        if (auto iter = adjacency.find(name); iter != adjacency.end()) {
            auto nextNames = std::vector<std::string>{iter->second.begin(), iter->second.end()};
            std::ranges::sort(nextNames);
            for (auto const& next : nextNames) {
                if (!active.contains(next)) {
                    continue;
                }
                if (!index.contains(next)) {
                    visit(next);
                    lowLink[name] = std::min(lowLink[name], lowLink[next]);
                } else if (onStack.contains(next)) {
                    lowLink[name] = std::min(lowLink[name], index[next]);
                }
            }
        }

        if (lowLink[name] != index[name]) {
            return;
        }
        std::vector<std::string> component;
        while (!stack.empty()) {
            auto current = std::move(stack.back());
            stack.pop_back();
            onStack.erase(current);
            component.emplace_back(std::move(current));
            if (component.back() == name) {
                break;
            }
        }

        bool selfCycle = component.size() == 1 && adjacency.contains(name) && adjacency.at(name).contains(name);
        if (component.size() > 1 || selfCycle) {
            std::ranges::sort(component);
            cycles.emplace_back(std::move(component));
        }
    };

    for (auto const& name : sortedNames(active)) {
        if (!index.contains(name)) {
            visit(name);
        }
    }
    std::ranges::sort(cycles);
    return cycles;
}

} // namespace

bool ModLoadPlanner::matchesDependency(Manifest const& manifest, Dependency const& dependency) noexcept {
    if (!dependency.version) {
        return true;
    }
    return manifest.version && dependency.version->matches(*manifest.version);
}

bool ModLoadPlanner::isPlatformCompatible(Manifest const& manifest, bool clientSide) noexcept {
    if (!manifest.platform) {
        return true;
    }
    if (*manifest.platform == "universal") {
        return true;
    }
    return *manifest.platform == (clientSide ? "client" : "server");
}

ModLoadPlan ModLoadPlanner::resolve(
    DenseMap<std::string, Manifest> const& manifests,
    DenseSet<std::string> const&           roots,
    bool                                   clientSide
) {
    ModLoadPlan                                                                plan;
    DenseSet<std::string>                                                      candidates;
    std::priority_queue<std::string, std::vector<std::string>, std::greater<>> pending;

    for (auto const& name : sortedNames(roots)) {
        if (manifests.contains(name)) {
            pending.emplace(name);
        }
    }

    while (!pending.empty()) {
        auto name = pending.top();
        pending.pop();
        if (!candidates.emplace(name).second) {
            continue;
        }
        auto const& manifest = manifests.at(name);

        if (manifest.dependencies) {
            for (auto const& dependency : *manifest.dependencies) {
                auto target = manifests.find(dependency.name);
                if (target == manifests.end()) {
                    plan.rejected.try_emplace(
                        name,
                        ModLoadIssue{ModLoadIssueKind::MissingDependency, dependency.name, {}, dependency.version, {}}
                    );
                } else if (!matchesDependency(target->second, dependency)) {
                    plan.rejected.try_emplace(
                        name,
                        ModLoadIssue{
                            ModLoadIssueKind::IncompatibleDependencyVersion,
                            dependency.name,
                            target->second.version,
                            dependency.version,
                            {}
                        }
                    );
                } else {
                    pending.emplace(dependency.name);
                }
            }
        }
        if (manifest.optionalDependencies) {
            for (auto const& dependency : *manifest.optionalDependencies) {
                auto target = manifests.find(dependency.name);
                if (target != manifests.end() && matchesDependency(target->second, dependency)) {
                    pending.emplace(dependency.name);
                }
            }
        }
    }

    for (auto const& name : sortedNames(candidates)) {
        auto const& manifest = manifests.at(name);
        if (!isPlatformCompatible(manifest, clientSide)) {
            plan.rejected.try_emplace(
                name,
                ModLoadIssue{ModLoadIssueKind::IncompatiblePlatform, manifest.platform.value_or(""), {}, {}, {}}
            );
        }
    }

    for (auto const& name : sortedNames(candidates)) {
        if (plan.rejected.contains(name)) {
            continue;
        }
        auto const& manifest = manifests.at(name);
        if (!manifest.conflicts) {
            continue;
        }
        for (auto const& conflict : *manifest.conflicts) {
            auto target = manifests.find(conflict.name);
            if (target != manifests.end() && candidates.contains(conflict.name)
                && matchesDependency(target->second, conflict)) {
                plan.rejected.try_emplace(
                    name,
                    ModLoadIssue{
                        ModLoadIssueKind::Conflict,
                        conflict.name,
                        target->second.version,
                        conflict.version,
                        {}
                    }
                );
                break;
            }
        }
    }

    auto propagateUnavailableDependencies = [&] {
        bool changed = false;
        for (auto const& name : sortedNames(candidates)) {
            if (plan.rejected.contains(name)) {
                continue;
            }
            auto const& dependencies = manifests.at(name).dependencies;
            if (!dependencies) {
                continue;
            }
            for (auto const& dependency : *dependencies) {
                if (!candidates.contains(dependency.name) || plan.rejected.contains(dependency.name)) {
                    plan.rejected.try_emplace(
                        name,
                        ModLoadIssue{
                            ModLoadIssueKind::DependencyUnavailable,
                            dependency.name,
                            {},
                            dependency.version,
                            {}
                        }
                    );
                    changed = true;
                    break;
                }
            }
        }
        return changed;
    };

    while (propagateUnavailableDependencies()) {}

    while (true) {
        DenseSet<std::string> active;
        for (auto const& name : candidates) {
            if (!plan.rejected.contains(name)) {
                active.emplace(name);
            }
        }

        Adjacency                     adjacency;
        DenseMap<std::string, size_t> indegree;
        for (auto const& name : active) {
            adjacency[name];
            indegree[name] = 0;
        }

        for (auto const& name : sortedNames(active)) {
            auto const& manifest        = manifests.at(name);
            auto        addDependencies = [&](auto const& dependencies) {
                if (!dependencies) {
                    return;
                }
                for (auto const& dependency : *dependencies) {
                    if (active.contains(dependency.name)
                        && matchesDependency(manifests.at(dependency.name), dependency)) {
                        addEdge(adjacency, indegree, dependency.name, name);
                    }
                }
            };
            addDependencies(manifest.dependencies);
            addDependencies(manifest.optionalDependencies);

            if (manifest.loadBefore) {
                for (auto const& dependency : *manifest.loadBefore) {
                    if (active.contains(dependency.name)
                        && matchesDependency(manifests.at(dependency.name), dependency)) {
                        addEdge(adjacency, indegree, name, dependency.name);
                    }
                }
            }
        }

        auto order = topologicalSort(active, adjacency, indegree);
        if (order.size() == active.size()) {
            plan.order = std::move(order);
            break;
        }

        auto cycles = findCycles(active, adjacency);
        if (cycles.empty()) {
            for (auto const& name : active) {
                if (!std::ranges::contains(order, name)) {
                    plan.rejected.try_emplace(
                        name,
                        ModLoadIssue{ModLoadIssueKind::DependencyCycle, {}, {}, {}, {name}}
                    );
                }
            }
        } else {
            for (auto const& cycle : cycles) {
                for (auto const& name : cycle) {
                    plan.rejected.try_emplace(name, ModLoadIssue{ModLoadIssueKind::DependencyCycle, {}, {}, {}, cycle});
                }
            }
        }
        while (propagateUnavailableDependencies()) {}
    }

    DenseSet<std::string> loaded{plan.order.begin(), plan.order.end()};
    for (auto const& name : plan.order) {
        auto&       dependencies    = plan.lifecycleDependencies[name];
        auto const& manifest        = manifests.at(name);
        auto        addDependencies = [&](auto const& declared) {
            if (!declared) {
                return;
            }
            for (auto const& dependency : *declared) {
                if (loaded.contains(dependency.name) && matchesDependency(manifests.at(dependency.name), dependency)) {
                    dependencies.emplace(dependency.name);
                }
            }
        };
        addDependencies(manifest.dependencies);
        addDependencies(manifest.optionalDependencies);
    }

    return plan;
}

ModLoadPlan ModLoadPlanner::resolve(DenseMap<std::string, Manifest> const& manifests, bool clientSide) {
    DenseSet<std::string> roots;
    for (auto const& [name, manifest] : manifests) {
        if (manifest.passive != true) {
            roots.emplace(name);
        }
    }
    return resolve(manifests, roots, clientSide);
}

} // namespace ll::mod
