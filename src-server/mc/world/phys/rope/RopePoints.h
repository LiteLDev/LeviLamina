#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct RopePoint;
// clang-format on

struct RopePoints {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mSize;
    ::ll::TypedStorage<8, 24, ::std::vector<::RopePoint>> mPoints;
    // NOLINTEND

public:
    // prevent constructor by default
    RopePoints& operator=(RopePoints const&);
    RopePoints();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RopePoints(::RopePoints const&);

    MCNAPI ~RopePoints();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RopePoints const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
