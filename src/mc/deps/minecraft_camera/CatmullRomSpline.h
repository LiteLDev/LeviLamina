#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

class CatmullRomSpline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Vec3>> mControlPoints;
    ::ll::TypedStorage<8, 24, ::std::vector<float>>  mAccumulatedSegmentLengths;
    ::ll::TypedStorage<1, 1, bool>                   mLooped;
    // NOLINTEND
};
