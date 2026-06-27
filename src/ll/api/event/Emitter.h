#pragma once

#include <concepts>
#include <type_traits>

#include "ll/api/event/EmitterBase.h"
#include "ll/api/event/EventBus.h"

namespace ll::event {
namespace detail {
template <bool&>
struct StaticRegistrationAnchor {};

template <auto F, std::derived_from<Event>... Ts>
inline bool emitterRegistration = [] {
    auto& ins = EventBus::getInstance();
    (ins.setEventEmitter<Ts>(F), ...);
    return true;
}();
} // namespace detail

template <auto F, std::derived_from<Event>... Ts>
class Emitter
: public EmitterBase,
  private detail::StaticRegistrationAnchor<detail::emitterRegistration<F, Ts...>> {
    static_assert((std::is_final_v<Ts> && ...), "Only final classes can be emitted");

protected:
    Emitter()           = default;
    ~Emitter() override = default;
};
} // namespace ll::event
