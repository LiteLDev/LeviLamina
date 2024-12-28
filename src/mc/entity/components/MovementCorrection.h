#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/CorrectionMethod.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

struct MovementCorrection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk963486;
    ::ll::UntypedStorage<4, 12> mUnk21d756;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementCorrection& operator=(MovementCorrection const&);
    MovementCorrection(MovementCorrection const&);
    MovementCorrection();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MovementCorrection(::CorrectionMethod method, ::Vec3 const& acceptPos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CorrectionMethod method, ::Vec3 const& acceptPos);
    // NOLINTEND
};
