#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/ListenerBase.h"
#include "ll/api/reflection/Reflection.h"

namespace ll::event {
namespace detail {
LLAPI void printListenerError(std::string_view) noexcept;
}
template <class T>
    requires(std::derived_from<T, Event>)
class Listener : public ListenerBase {
public:
    using EventType = T;
    using Callback  = std::function<void(EventType&)>;

    ~Listener() override = default;

    constexpr explicit Listener(Callback const& fn, EventPriority priority = EventPriority::Normal)
    : ListenerBase(priority),
      callback(fn) {}

    void call(Event& event) override {
        try {
            callback(static_cast<EventType&>(event));
        } catch (...) { detail::printListenerError(reflection::type_stem_name_v<T>); }
    }

    static std::shared_ptr<Listener<T>> create(Callback const& fn, EventPriority priority = EventPriority::Normal) {
        return std::make_shared<Listener<T>>(fn, priority);
    }

private:
    Callback callback;
};
} // namespace ll::event
