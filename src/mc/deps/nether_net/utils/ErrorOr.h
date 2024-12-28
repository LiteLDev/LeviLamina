#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

template <typename T0, typename T1>
struct ErrorOr {
public:
    // prevent constructor by default
    ErrorOr& operator=(ErrorOr const&);
    ErrorOr(ErrorOr const&);
    ErrorOr();
};

} // namespace NetherNet
