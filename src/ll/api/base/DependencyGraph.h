#pragma once

#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace ll {
template <class T>
class DependencyGraph {
    struct Data {
        std::unordered_set<T> dependents;
        size_t                count;
    };

public:
    std::unordered_map<T, Data> data;

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
        return data.at(dependency).dependents.contains(node);
    }
    bool emplace(T const& node) {
        if (contains(node)) {
            return false;
        }
        data[node] = {};
        return true;
    }
    bool emplaceDependency(T const& node, T const& dependency) {
        if (dependency != node) {
            auto& deps = data[dependency];
            if (!deps.dependents.contains(node)) {
                deps.dependents.emplace(node);
                ++data[node].count;
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
    std::vector<T> dependentBy(T const& node) const {
        std::queue<T>  queue;
        std::vector<T> result;
        queue.push(node);
        while (!queue.empty()) {
            auto now = queue.front();
            queue.pop();
            for (auto& deps : data.at(now).dependents) {
                queue.push(deps);
                result.push_back(deps);
            }
        }
        return result;
    }
    [[nodiscard]] SortResult sort() const {
        std::vector<T> sorted;
        std::vector<T> unsorted;

        std::unordered_map<T, size_t> csize;
        for (auto& [node, deps] : data) {
            csize[node] = deps.count;
        }

        for (auto& [node, count] : csize) {
            if (count == 0) {
                sorted.push_back(node);
            }
        }
        for (size_t i = 0; i < sorted.size(); i++) {
            for (const auto& node : data.at(sorted[i]).dependents) {
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
