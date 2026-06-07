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
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LookControl>> mLookControl;
    ::ll::TypedStorage<4, 12, ::Vec3>                          mWantedPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                          mWantedRotation;
    ::ll::TypedStorage<4, 4, float>                            mYMax;
    ::ll::TypedStorage<4, 4, float>                            mXMax;
    ::ll::TypedStorage<1, 1, bool>                             mHasWantedPosition;
    ::ll::TypedStorage<1, 1, bool>                             mHasWantedRotation;
    ::ll::TypedStorage<4, 4, uint>                             mLookAtPositionLockedTicks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD bool getHasWantedPosition() const;

    MCFOLD bool getHasWantedRotation() const;

    MCFOLD ::Vec3 getWantedPosition() const;

    MCFOLD ::Vec3 getWantedRotation() const;

    MCFOLD float getXMax() const;

    MCFOLD float getYMax() const;

    MCAPI void initialize(::Mob& owner);

    MCAPI void lockLookAtPosition(::Vec3 const& position, float yMax, float xMax, uint ticks);

    MCAPI void resetWantedPosition();

    MCFOLD void setHasWantedPosition(bool hasWantedPosition);

    MCFOLD void setHasWantedRotation(bool hasWantedRotation);

    MCFOLD void setInternalType(::std::unique_ptr<::LookControl> type);

    MCAPI void setLookAtPosition(::Vec3 const& position, float yMax, float xMax);

    MCAPI void setLookAtPosition(::Actor const* target, float yMax, float xMax);

    MCAPI void setLookAtRotation(::Vec3 const& rotation, float yMax, float xMax);

    MCAPI void setYMax(float yMax);

    MCAPI void updateLookAtPositionLock();

    MCAPI void updateLookControl(::Mob& owner);
    // NOLINTEND
};
