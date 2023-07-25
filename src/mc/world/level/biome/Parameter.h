#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClimateUtils {

struct Parameter {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIMATEUTILS_PARAMETER
public:
    Parameter& operator=(Parameter const&) = delete;
    Parameter(Parameter const&)            = delete;
    Parameter()                            = delete;
#endif

public:
    /**
     * @symbol ??0Parameter\@ClimateUtils\@\@QEAA\@MM\@Z
     */
    MCAPI Parameter(float, float);
    /**
     * @symbol ??0Parameter\@ClimateUtils\@\@QEAA\@AEB_J0\@Z
     */
    MCAPI Parameter(__int64 const&, __int64 const&);
    /**
     * @symbol ?fromParameters\@Parameter\@ClimateUtils\@\@SA?AU12\@AEBU12\@0\@Z
     */
    MCAPI static struct ClimateUtils::Parameter
    fromParameters(struct ClimateUtils::Parameter const&, struct ClimateUtils::Parameter const&);
};

}; // namespace ClimateUtils
