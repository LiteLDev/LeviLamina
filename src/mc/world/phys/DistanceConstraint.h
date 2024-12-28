#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

class DistanceConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk24d58d;
    ::ll::UntypedStorage<4, 12> mUnke0112f;
    ::ll::UntypedStorage<4, 4>  mUnk3d0ff3;
    ::ll::UntypedStorage<1, 1>  mUnk833a3f;
    ::ll::UntypedStorage<4, 4>  mUnkc062a6;
    ::ll::UntypedStorage<4, 4>  mUnk10f7e8;
    ::ll::UntypedStorage<4, 4>  mUnk14daac;
    // NOLINTEND

public:
    // prevent constructor by default
    DistanceConstraint& operator=(DistanceConstraint const&);
    DistanceConstraint(DistanceConstraint const&);
    DistanceConstraint();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DistanceConstraint(float massA, float massB, float desiredDistance);

    MCAPI float setup(::Vec3 const& posA, ::Vec3 const& posB, float baumgarteTerm, float slop);

    MCAPI void solve(::Vec3& velA, ::Vec3& velB);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(float massA, float massB, float desiredDistance);
    // NOLINTEND
};
