#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClimateUtils {

struct Parameter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64> mMin;
    ::ll::TypedStorage<8, 8, int64> mMax;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Parameter(float min, float max);

    MCAPI Parameter(int64 const& min, int64 const& max);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ClimateUtils::Parameter
    fromParameters(::ClimateUtils::Parameter const& minParam, ::ClimateUtils::Parameter const& maxParam);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(float min, float max);

    MCAPI void* $ctor(int64 const& min, int64 const& max);
    // NOLINTEND
};

} // namespace ClimateUtils
