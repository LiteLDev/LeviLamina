#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

template <typename T0>
class PathBuffer {
public:
    T0       value;
    T0&      get() { return value; }
    explicit operator T0&() noexcept { return value; }
    explicit operator T0 const&() const noexcept { return value; }
};

}; // namespace Core
