#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class Actor;
class LookControl;
class Mob;
class Vec3;
// clang-format on

class LookControlComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mHasWantedPosition;
    ::ll::TypedStorage<1, 1, bool>                             mHasWantedRotation;
    ::ll::TypedStorage<4, 4, float>                            mYMax;
    ::ll::TypedStorage<4, 4, float>                            mXMax;
    ::ll::TypedStorage<4, 12, ::Vec3>                          mWantedPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                          mWantedRotation;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LookControl>> mLookControl;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::Mob& owner);

    MCNAPI void setInternalType(::std::unique_ptr<::LookControl> type);

    MCNAPI void setLookAtPosition(::Actor const* target, float yMax, float xMax);
    // NOLINTEND
};
