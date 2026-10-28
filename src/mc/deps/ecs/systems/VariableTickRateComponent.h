#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/OptionalGlobal.h"

struct VariableTickRateComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> mSimTicks;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static uchar unwrapSimTicks(::OptionalGlobal<::VariableTickRateComponent const> const& global);
#endif
    // NOLINTEND
};
