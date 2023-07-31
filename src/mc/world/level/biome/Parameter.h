#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClimateUtils {

struct Parameter {

public:
    long long mMin; // this+0x0
    long long mMax; // this+0x8

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0Parameter\@ClimateUtils\@\@QEAA\@MM\@Z
     */
    MCAPI Parameter(float, float);
    /**
     * @symbol ??0Parameter\@ClimateUtils\@\@QEAA\@AEB_J0\@Z
     */
    MCAPI Parameter(int64_t const&, int64_t const&);
    /**
     * @symbol ?fromParameters\@Parameter\@ClimateUtils\@\@SA?AU12\@AEBU12\@0\@Z
     */
    MCAPI static struct ClimateUtils::Parameter
    fromParameters(struct ClimateUtils::Parameter const&, struct ClimateUtils::Parameter const&);
    // NOLINTEND
};

}; // namespace ClimateUtils
