/**
 * @file  FogSetting.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure FogSetting.
 *
 */
struct FogSetting {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOGSETTING
public:
    struct FogSetting& operator=(struct FogSetting const &) = delete;
    FogSetting(struct FogSetting const &) = delete;
    FogSetting() = delete;
#endif

public:
    /**
     * @symbol  ?ZERO_SETTING\@FogSetting\@\@2U1\@B
     */
    MCAPI static struct FogSetting const ZERO_SETTING;

};