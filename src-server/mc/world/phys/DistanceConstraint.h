#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

class DistanceConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>   mConstraintMass;
    ::ll::TypedStorage<4, 12, ::Vec3> mConstraintAxis;
    ::ll::TypedStorage<4, 4, float>   mBias;
    ::ll::TypedStorage<1, 1, bool>    mShouldEnforce;
    ::ll::TypedStorage<4, 4, float>   mMassA;
    ::ll::TypedStorage<4, 4, float>   mMassB;
    ::ll::TypedStorage<4, 4, float>   mDesiredDistance;
    // NOLINTEND
};
