#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VibrationListenerConfig {
public:
    // prevent constructor by default
    VibrationListenerConfig& operator=(VibrationListenerConfig const&);
    VibrationListenerConfig(VibrationListenerConfig const&);
    VibrationListenerConfig();

public:
    // NOLINTBEGIN
    // symbol: ?isValidVibration@VibrationListenerConfig@@UEAA_NAEBVGameEvent@@@Z
    MCVAPI bool isValidVibration(class GameEvent const&);

    // symbol: ?onSerializableDataChanged@VibrationListenerConfig@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onSerializableDataChanged(class BlockSource&);

    // NOLINTEND
};
