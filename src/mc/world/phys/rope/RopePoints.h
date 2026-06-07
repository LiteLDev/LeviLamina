#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct RopePoint;
// clang-format on

struct RopePoints {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                      mSize;
    ::ll::TypedStorage<8, 24, ::std::vector<::RopePoint>> mPoints;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::Vec3 getInterpolated(uint64 index, float a) const;

    MCFOLD uint64 size() const;
#endif

    MCAPI ~RopePoints();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
