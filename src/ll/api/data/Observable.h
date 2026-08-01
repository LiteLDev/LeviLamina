#pragma once

#include <cstdint>
#include <map>
#include <memory>
#include <utility>

#include "mc/platform/brstd/move_only_function.h"

namespace ll::data {

template <class T>
class Observable {
public:
    using Callback       = brstd::move_only_function<void(T const&)>;
    using SubscriptionId = std::uint32_t;

private:
    struct State {
        explicit State(T initial) : data(std::move(initial)) {}

        std::map<SubscriptionId, Callback> callbacks;
        SubscriptionId                     nextId{};
        T                                  data;
    };

    std::shared_ptr<State> state;

public:
    explicit Observable(T initial) : state(std::make_shared<State>(std::move(initial))) {}

    Observable(Observable const&)                = default;
    Observable& operator=(Observable const&)     = default;
    Observable(Observable&&) noexcept            = default;
    Observable& operator=(Observable&&) noexcept = default;

    [[nodiscard]] T getData() const { return state->data; }

    void setData(T value) {
        if (state->data == value) {
            return;
        }
        state->data = std::move(value);

        for (auto& [_, callback] : state->callbacks) {
            callback(state->data);
        }
    }

    SubscriptionId subscribe(Callback callback) {
        if (!callback) {
            return 0;
        }

        auto const id = ++state->nextId;
        state->callbacks.emplace(id, std::move(callback));
        return id;
    }

    bool unsubscribe(SubscriptionId id) {
        if (id == 0) {
            return false;
        }
        return state->callbacks.erase(id) != 0;
    }
};

} // namespace ll::data
