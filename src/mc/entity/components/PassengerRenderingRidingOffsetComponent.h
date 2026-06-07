#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/RidingOffsetInterpolationPair.h"

struct PassengerRenderingRidingOffsetComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::RidingOffsetInterpolationPair> mInterpolationPair;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    PassengerRenderingRidingOffsetComponent();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit PassengerRenderingRidingOffsetComponent(::RidingOffsetInterpolationPair const& interpolationPair);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::RidingOffsetInterpolationPair const& interpolationPair);
#endif
    // NOLINTEND
};
