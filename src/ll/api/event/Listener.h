#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/event/base/ListenerBase.h"
#include "ll/api/reflection/Reflection.h"

namespace ll::event {
namespace detail {
LLAPI void printListenerError(std::string_view) noexcept;
}
template <typename T>
class Listener : public ListenerBase {
public:
    using EventType = T;
    using Callback  = std::function<void(EventType&)>;

private:
    Callback callback;

public:
    ~Listener() override = default;

    constexpr explicit Listener(Callback const& fn, EventPriority priority = EventPriority::Normal)
    : ListenerBase(priority),
      callback(fn) {}

    void call(EventBase& event) override {
        try {
            callback(static_cast<EventType&>(event));
        } catch (...) { detail::printListenerError(reflection::type_stem_name_v<T>); }
    }
};
} // namespace ll::event
