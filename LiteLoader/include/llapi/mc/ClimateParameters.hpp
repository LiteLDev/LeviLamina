/**
 * @file  ClimateParameters.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ClimateUtils.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure ClimateParameters.
 *
 */
struct ClimateParameters {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIMATEPARAMETERS
public:
    struct ClimateParameters& operator=(struct ClimateParameters const &) = delete;
    ClimateParameters(struct ClimateParameters const &) = delete;
    ClimateParameters() = delete;
#endif

public:
    /**
     * @hash   -1081486218
     * @symbol ??0ClimateParameters@@QEAA@UParameter@ClimateUtils@@00000M@Z
     */
    MCAPI ClimateParameters(struct ClimateUtils::Parameter, struct ClimateUtils::Parameter, struct ClimateUtils::Parameter, struct ClimateUtils::Parameter, struct ClimateUtils::Parameter, struct ClimateUtils::Parameter, float);
    /**
     * @hash   509783846
     * @symbol ?fitness@ClimateParameters@@QEBA_JAEBUTargetPoint@@@Z
     */
    MCAPI __int64 fitness(struct TargetPoint const &) const;

};