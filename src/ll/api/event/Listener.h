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

    explicit Listener(
        callback_fn             fn,
        EventPriority           priority = EventPriority::Normal,
        std::weak_ptr<mod::Mod> mod      = mod::NativeMod::current()
    )
    : ListenerBase(priority, std::move(mod)),
      callback(std::move(fn)) {}

    ~Listener() override = default;

    void call(Event& event) override { callback(static_cast<event_type&>(event)); }

    static std::shared_ptr<Listener> create(
        callback_fn             fn,
        EventPriority           priority = EventPriority::Normal,
        std::weak_ptr<mod::Mod> mod      = mod::NativeMod::current()
    ) {
        return std::make_shared<Listener>(std::move(fn), priority, std::move(mod));
    }

private:
    callback_fn callback;
};
} // namespace ll::event
