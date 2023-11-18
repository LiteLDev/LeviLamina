#pragma once

#include <concepts>

#include "ll/api/base/Macro.h"

namespace ll::event {
class LL_EBO Cancellable {};
#if !_HAS_CXX23
template <std::derived_from<Cancellable> T>
[[nodiscard]] constexpr bool isCancelled(T& v) {
    return *(bool*)((char*)&v + 8);
}
template <std::derived_from<Cancellable> T>
[[nodiscard]] constexpr void setCancelled(T& v, bool cancelled) {
    *(bool*)((char*)&v + 8) = cancelled;
}

template <std::derived_from<Cancellable> T>
[[nodiscard]] constexpr void cancel(T& v) {
    setCancelled(v, true);
}
#endif
} // namespace ll::event
