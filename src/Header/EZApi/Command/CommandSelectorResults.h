#pragma once

#include <memory>
#include <vector>

template <typename T>
class CommandSelectorResults {
    std::shared_ptr<std::vector<T*>> data;

public:
    auto begin() {
        return data->begin();
    }
    auto end() {
        return data->end();
    }
    auto count() const {
        return data->size();
    }
    auto empty() const {
        return data->empty();
    }
};