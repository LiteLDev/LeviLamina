#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/ListenerBase.h"
#include "ll/api/reflection/Reflection.h"

namespace ll::event {
template <std::derived_from<Event> T>
class Listener : public ListenerBase {
public:
    using EventType = T;
    using Callback  = std::function<void(EventType&)>;

    constexpr explicit Listener(Callback const& fn, EventPriority priority = EventPriority::Normal)
    : ListenerBase(priority),
      callback(fn) {}

    ~Listener() override = default;

    void call(Event& event) override { callback(dynamic_cast<EventType&>(event)); }

    static std::shared_ptr<Listener> create(Callback const& fn, EventPriority priority = EventPriority::Normal) {
        return std::make_shared<Listener>(fn, priority);
    }

private:
    Callback callback;
};
} // namespace ll::event
