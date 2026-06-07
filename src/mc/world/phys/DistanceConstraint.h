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

public:
    // prevent constructor by default
    DistanceConstraint();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DistanceConstraint(float massA, float massB, float desiredDistance);

    MCNAPI float setup(::Vec3 const& posA, ::Vec3 const& posB, float baumgarteTerm, float slop);

    MCNAPI void solve(::Vec3& velA, ::Vec3& velB);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float massA, float massB, float desiredDistance);
    // NOLINTEND
};
