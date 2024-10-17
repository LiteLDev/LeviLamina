#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/SculkSensorVibrationConfig.h"

class CalibratedSculkSensorVibrationConfig : public ::SculkSensorVibrationConfig {
public:
    // prevent constructor by default
    CalibratedSculkSensorVibrationConfig& operator=(CalibratedSculkSensorVibrationConfig const&);
    CalibratedSculkSensorVibrationConfig(CalibratedSculkSensorVibrationConfig const&);
    CalibratedSculkSensorVibrationConfig();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CalibratedSculkSensorVibrationConfig() = default;

    // vIndex: 3
    virtual bool shouldListen(
        class BlockSource&             region,
        class GameEvent const&         gameEvent,
        struct GameEventContext const& gameEventContext
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool shouldListen$(
        class BlockSource&             region,
        class GameEvent const&         gameEvent,
        struct GameEventContext const& gameEventContext
    );

    // NOLINTEND
};
