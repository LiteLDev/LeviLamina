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
    // vIndex: 0, symbol: __gen_??1CalibratedSculkSensorVibrationConfig@@UEAA@XZ
    virtual ~CalibratedSculkSensorVibrationConfig() = default;

    // vIndex: 3, symbol:
    // ?shouldListen@CalibratedSculkSensorVibrationConfig@@UEAA_NAEAVBlockSource@@AEBVGameEvent@@AEBUGameEventContext@@@Z
    virtual bool shouldListen(class BlockSource& region, class GameEvent const&, struct GameEventContext const&);

    // NOLINTEND
};
