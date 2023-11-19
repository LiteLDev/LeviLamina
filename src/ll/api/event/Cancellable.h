#pragma once

#include "ll/api/base/Macro.h"

namespace ll::event {
template <class T>
class Cancellable : public T {
public:
    [[nodiscard]] constexpr bool isCancelled() { return *(bool*)((char*)this + 8); }

    constexpr void setCancelled(bool cancelled) { *(bool*)((char*)this + 8) = cancelled; }

    constexpr void cancel() { setCancelled(true); }
};
} // namespace ll::event
