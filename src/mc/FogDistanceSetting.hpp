/**
 * @file  FogDistanceSetting.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure FogDistanceSetting.
 *
 */
struct FogDistanceSetting {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOGDISTANCESETTING
public:
    struct FogDistanceSetting& operator=(struct FogDistanceSetting const &) = delete;
    FogDistanceSetting(struct FogDistanceSetting const &) = delete;
    FogDistanceSetting() = delete;
#endif

public:
    /**
     * @symbol  ?ZERO_SETTING\@FogDistanceSetting\@\@2U1\@B
     */
    MCAPI static struct FogDistanceSetting const ZERO_SETTING;

};