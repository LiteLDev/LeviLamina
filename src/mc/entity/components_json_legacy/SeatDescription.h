#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/molang/ExpressionNode.h"

struct SeatDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                mPosition;
    ::ll::TypedStorage<4, 4, int>                    mMinSeatCount;
    ::ll::TypedStorage<4, 4, int>                    mMaxSeatCount;
    ::ll::TypedStorage<1, 1, bool>                   mHasSeatRotation;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>      mSeatRotation;
    ::ll::TypedStorage<1, 1, bool>                   mLockPassengerRotation;
    ::ll::TypedStorage<4, 4, float>                  mLockPassengerRotationDegrees;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mThirdPersonCameraRadiusOverride;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mCameraRelaxDistanceSmoothing;
    // NOLINTEND

public:
    // prevent constructor by default
    SeatDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SeatDescription(::SeatDescription const&);

    MCAPI void addRotationExpressionNode(::ExpressionNode const& node);

    MCAPI ::SeatDescription& operator=(::SeatDescription const&);

    MCAPI bool operator==(::SeatDescription const& seat) const;

    MCAPI void setCameraRelaxDistanceSmoothing(float const& value);

    MCAPI void setThirdPersonCamerRadiusOverride(float const& value);

    MCAPI ~SeatDescription();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SeatDescription const& EMPTY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SeatDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
