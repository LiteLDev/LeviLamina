#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/DensityFunctionPtr.h"

class DensitySpline {
public:
    // DensitySpline inner types declare
    // clang-format off
    struct SplineControlPoint;
    // clang-format on

    // DensitySpline inner types define
    struct SplineControlPoint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::variant<float, ::DensityFunctionPtr>> mValue;
        ::ll::TypedStorage<4, 4, float>                                        mDerivative;
        // NOLINTEND
    };

    using ControlPointPair = ::std::pair<float, ::DensitySpline::SplineControlPoint>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<float, ::DensitySpline::SplineControlPoint>>> mControlPoints;
    // NOLINTEND
};
