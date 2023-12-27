#pragma once

#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace ll {
template <class T>
class DependencyGraph {
public:
    std::unordered_map<T, std::unordered_set<T>> data;  // inv deps
    std::unordered_map<T, size_t>                sizes; // deps count

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
        return data.at(dependency).contains(node);
    }
    bool emplace(T const& node) {
        if (contains(node)) {
            return false;
        }
        data[node]  = {};
        sizes[node] = {};
        return true;
    }
    bool emplaceDependency(T const& node, T const& dependency) {
        if (dependency != node) {
            auto& dependents = data[dependency];
            if (!dependents.contains(node)) {
                dependents.emplace(node);
                ++sizes[node];
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
    [[nodiscard]] SortResult sort() const {
        std::vector<T>                sorted;
        std::vector<T>                unsorted;
        std::unordered_map<T, size_t> csize(sizes);
        for (auto& [node, dependents] : data) {
            if (csize[node] == 0) {
                sorted.push_back(node);
            }
        }
        for (size_t i = 0; i < sorted.size(); i++) {
            for (const auto& node : data.at(sorted[i])) {
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
} // namespace ll
