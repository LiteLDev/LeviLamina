#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/ListenerBase.h"
#include "ll/api/reflection/Reflection.h"

namespace ll::event {
template <std::derived_from<Event> T>
class Listener : public ListenerBase {
public:
    using event_type  = T;
    using callback_fn = std::function<void(event_type&)>;

    constexpr explicit Listener(callback_fn fn, EventPriority priority = EventPriority::Normal)
    : ListenerBase(priority),
      callback(std::move(fn)) {}

    ~Listener() override = default;

    void call(Event& event) override { callback(static_cast<event_type&>(event)); }

    static std::shared_ptr<Listener> create(callback_fn fn, EventPriority priority = EventPriority::Normal) {
        return std::make_shared<Listener>(fn, priority);
    }

private:
    callback_fn callback;
};
} // namespace ll::event
