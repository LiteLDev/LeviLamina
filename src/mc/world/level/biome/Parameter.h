#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClimateUtils {

struct Parameter {
public:
    int64 mMin; // this+0x0
    int64 mMax; // this+0x8

    Parameter() = default;

public:
    // NOLINTBEGIN
    MCAPI Parameter(int64 const&, int64 const&);

    MCAPI Parameter(float min, float max);

    MCAPI static struct ClimateUtils::Parameter
    fromParameters(struct ClimateUtils::Parameter const&, struct ClimateUtils::Parameter const&);

    // NOLINTEND
};

}; // namespace ClimateUtils
