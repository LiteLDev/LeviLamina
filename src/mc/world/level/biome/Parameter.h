#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClimateUtils {

struct Parameter {
public:
    // prevent constructor by default
    Parameter& operator=(Parameter const&);
    Parameter(Parameter const&);
    Parameter();

public:
    // NOLINTBEGIN
    MCAPI Parameter(int64 const&, int64 const&);

    MCAPI Parameter(float min, float max);

    MCAPI static struct ClimateUtils::Parameter
    fromParameters(struct ClimateUtils::Parameter const&, struct ClimateUtils::Parameter const&);

    // NOLINTEND
};

}; // namespace ClimateUtils
