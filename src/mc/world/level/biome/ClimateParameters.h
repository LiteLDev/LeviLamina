#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ClimateUtils { struct Parameter; }
// clang-format on

struct ClimateParameters {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIMATEPARAMETERS
public:
    ClimateParameters& operator=(ClimateParameters const&) = delete;
    ClimateParameters(ClimateParameters const&)            = delete;
    ClimateParameters()                                    = delete;
#endif

public:
    /**
     * @symbol ??0ClimateParameters\@\@QEAA\@UParameter\@ClimateUtils\@\@00000M\@Z
     */
    MCAPI ClimateParameters(
        struct ClimateUtils::Parameter,
        struct ClimateUtils::Parameter,
        struct ClimateUtils::Parameter,
        struct ClimateUtils::Parameter,
        struct ClimateUtils::Parameter,
        struct ClimateUtils::Parameter,
        float
    );
};
