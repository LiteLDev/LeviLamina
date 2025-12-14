#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/IDensityFunction.h"

// auto generated forward declare list
// clang-format off
class DensityCalculators;
class DensityFunctionRegistry;
// clang-format on

class YClampedGradientDensityFunction : public ::IDensityFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float const> mGradientStartY;
    ::ll::TypedStorage<4, 4, float const> mGradientEndY;
    ::ll::TypedStorage<4, 4, float const> mStartValue;
    ::ll::TypedStorage<4, 4, float const> mEndValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~YClampedGradientDensityFunction() /*override*/ = default;

    virtual ushort addToCalculators(::DensityCalculators&, ::DensityFunctionRegistry const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
