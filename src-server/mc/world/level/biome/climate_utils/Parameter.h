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
    // prevent constructor by default
    Parameter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Parameter(float min, float max);

    MCNAPI Parameter(int64 const& min, int64 const& max);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float min, float max);

    MCNAPI void* $ctor(int64 const& min, int64 const& max);
    // NOLINTEND
};

} // namespace ClimateUtils
