#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class Actor;
class LookControl;
class Mob;
// clang-format on

class LookControlComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mHasWantedPosition;
    ::ll::TypedStorage<1, 1, bool> mHasWantedRotation;
    ::ll::TypedStorage<4, 4, float> mYMax;
    ::ll::TypedStorage<4, 4, float> mXMax;
    ::ll::TypedStorage<4, 12, ::Vec3> mWantedPosition;
    ::ll::TypedStorage<4, 12, ::Vec3> mWantedRotation;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LookControl>> mLookControl;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::Mob& owner);

    MCAPI void setInternalType(::std::unique_ptr<::LookControl> type);

    MCAPI void setLookAtPosition(::Actor const* target, float yMax, float xMax);
    // NOLINTEND

};
