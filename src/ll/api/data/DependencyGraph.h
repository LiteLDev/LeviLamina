#pragma once

#include <cstddef>
#include <vector>

#include "ll/api/base/Containers.h"

namespace ll::data {
template <class T>
class DependencyGraph {
    struct Data {
        SmallDenseSet<T> dependBy;
        SmallDenseSet<T> dependOn;
    };
    DenseMap<T, Data> data;

public:
    struct SortResult {
        std::vector<T> sorted;
        std::vector<T> unsorted;

        [[nodiscard]] constexpr bool hasCycles() const { return !unsorted.empty(); }
    };
    void clear() { data.clear(); }

    [[nodiscard]] bool contains(T const& node) const { return data.contains(node); }
    [[nodiscard]] bool contains(T const& node, T const& dependency) const {
        if (!contains(dependency)) {
            return false;
        }
        return data.at(dependency).dependBy.contains(node);
    }
    bool emplace(T const& node) {
        if (contains(node)) {
            return false;
        }
        data[node] = {};
        return true;
    }
    bool erase(T const& node) {
        if (contains(node)) {
            auto& deps = data.at(node);
            if (deps.dependBy.size() == 0) {
                for (auto& dependency : SmallDenseSet<T>{deps.dependOn}) {
                    eraseDependency(node, dependency);
                }
                data.erase(node);
                return true;
            }
        }
        return false;
    }
    bool emplaceDependency(T const& node, T const& dependency) {
        if (dependency != node) {
            auto& deps = data[dependency];
            if (!deps.dependBy.contains(node)) {
                deps.dependBy.emplace(node);
                data[node].dependOn.emplace(dependency);
                return true;
            }
        }
        return false;
    }
    bool emplaceDependencies(T const& node, std::vector<T> const& dependencies) {
        for (auto& dependency : dependencies) {
            if (!emplaceDependency(node, dependency)) {
                return false;
            }
        }
        return true;
    }
    bool eraseDependency(T const& node, T const& dependency) {
        if (dependency != node && data.contains(dependency)) {
            auto& deps = data.at(dependency);
            if (deps.dependBy.contains(node)) {
                deps.dependBy.erase(node);
                data[node].dependOn.erase(dependency);
                return true;
            }
        }
        return false;
    }
    SmallDenseSet<T> dependentBy(T const& node) const {
        if (!contains(node)) {
            return {};
        }
        return data.at(node).dependBy;
    }
    SmallDenseSet<T> dependentOn(T const& node) const {
        if (!contains(node)) {
            return {};
        }
        return data.at(node).dependOn;
    }
    [[nodiscard]] SortResult sort() const {
        std::vector<T> sorted;
        std::vector<T> unsorted;

        DenseMap<T, size_t> csize;
        for (auto& [node, deps] : data) {
            csize[node] = deps.dependOn.size();
        }

        for (auto& [node, count] : csize) {
            if (count == 0) {
                sorted.push_back(node);
            }
        }
        for (size_t i = 0; i < sorted.size(); i++) {
            for (const auto& node : data.at(sorted[i]).dependBy) {
                if (--csize[node] == 0) {
                    sorted.push_back(node);
                }
            }
        }
        for (auto& [node, size] : csize) {
            if (size != 0) {
                unsorted.push_back(node);
            }
        }
        return {sorted, unsorted};
    }
};
} // namespace ll::data
