#pragma once

#include "ll/api/event/base/ListenerBase.h"

namespace ll::event {
template <typename T>
class Listener : public ListenerBase {
public:
    using EventType = T;
    using Callback  = std::function<void(EventType&)>;

private:
    Callback callback;

public:
    virtual ~Listener() = default;

    constexpr Listener(Callback const& fn, EventPriority priority = EventPriority::Normal)
    : ListenerBase(priority),
      callback(fn) {}

    void call(EventBase& event) override { callback(static_cast<EventType&>(event)); }
};
} // namespace ll::event
