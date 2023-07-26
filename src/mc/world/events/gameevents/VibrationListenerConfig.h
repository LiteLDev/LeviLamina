#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VibrationListenerConfig {

public:
    // prevent constructor by default
    VibrationListenerConfig& operator=(VibrationListenerConfig const&) = delete;
    VibrationListenerConfig(VibrationListenerConfig const&)            = delete;
    VibrationListenerConfig()                                          = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VIBRATIONLISTENERCONFIG
    /**
     * @symbol ?isValidVibration\@VibrationListenerConfig\@\@UEAA_NAEBVGameEvent\@\@\@Z
     */
    MCVAPI bool isValidVibration(class GameEvent const&); // NOLINT
    /**
     * @symbol ?onSerializableDataChanged\@VibrationListenerConfig\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onSerializableDataChanged(class BlockSource&); // NOLINT
#endif
};
