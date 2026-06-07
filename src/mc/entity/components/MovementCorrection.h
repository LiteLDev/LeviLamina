#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/entity/components/CorrectionMethod.h"

struct MovementCorrection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::CorrectionMethod> mMethod;
    ::ll::TypedStorage<4, 12, ::Vec3>            mAcceptPosition;
    ::ll::TypedStorage<1, 1, uchar>              mNewDivergenceCounter;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementCorrection();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MovementCorrection(::CorrectionMethod method, ::Vec3 const& acceptPosition);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CorrectionMethod method, ::Vec3 const& acceptPosition);
    // NOLINTEND
};
