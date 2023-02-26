/**
 * @file  FogTransitionSetting.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure FogTransitionSetting.
 *
 */
struct FogTransitionSetting {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOGTRANSITIONSETTING
public:
    struct FogTransitionSetting& operator=(struct FogTransitionSetting const &) = delete;
    FogTransitionSetting(struct FogTransitionSetting const &) = delete;
    FogTransitionSetting() = delete;
#endif

public:
    /**
     * @symbol  ?ZERO_SETTING\@FogTransitionSetting\@\@2U1\@B
     */
    MCAPI static struct FogTransitionSetting const ZERO_SETTING;

};