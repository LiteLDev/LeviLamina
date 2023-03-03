/**
 * @file  VibrationListenerConfig.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VibrationListenerConfig.
 *
 */
class VibrationListenerConfig {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONLISTENERCONFIG
public:
    class VibrationListenerConfig& operator=(class VibrationListenerConfig const &) = delete;
    VibrationListenerConfig(class VibrationListenerConfig const &) = delete;
    VibrationListenerConfig() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VIBRATIONLISTENERCONFIG
    /**
     * @symbol  ?isValidVibration\@VibrationListenerConfig\@\@UEAA_NAEBVGameEvent\@\@\@Z
     */
    MCVAPI bool isValidVibration(class GameEvent const &);
#endif

};