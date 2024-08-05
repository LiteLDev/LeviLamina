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
    MCVAPI bool canReceiveOnlyIfAdjacentChunksAreTicking() const;

    MCVAPI bool isValidVibration(class GameEvent const& gameEvent);

    MCVAPI void onSerializableDataChanged(class BlockSource&);

    // NOLINTEND
};
