#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

struct RopePoints {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc96835;
    ::ll::UntypedStorage<8, 24> mUnk3ebf87;
    // NOLINTEND

public:
    // prevent constructor by default
    RopePoints& operator=(RopePoints const&);
    RopePoints(RopePoints const&);
    RopePoints();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void beginRope();

    MCAPI void endRope();

    MCAPI void freezeInterpolation();

    MCAPI void pushBack(::Vec3 const& newPoint);

    MCAPI void reserve(uint64 size);

    MCAPI uint64 size() const;

    MCAPI ~RopePoints();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
