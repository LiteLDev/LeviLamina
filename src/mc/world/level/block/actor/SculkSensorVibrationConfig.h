#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListenerConfig.h"

class SculkSensorVibrationConfig : public ::VibrationListenerConfig {
public:
    // prevent constructor by default
    SculkSensorVibrationConfig& operator=(SculkSensorVibrationConfig const&);
    SculkSensorVibrationConfig(SculkSensorVibrationConfig const&);
    SculkSensorVibrationConfig();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SculkSensorVibrationConfig@@UEAA@XZ
    virtual ~SculkSensorVibrationConfig() = default;

    // vIndex: 1, symbol:
    // ?onSignalReceive@SculkSensorVibrationConfig@@UEAAXAEAVBlockSource@@AEBVBlockPos@@AEBVGameEvent@@PEAVActor@@MI3@Z
    virtual void
    onSignalReceive(class BlockSource& region, class BlockPos const&, class GameEvent const&, class Actor* source, float distance, uint, class Actor*);

    // vIndex: 2, symbol: ?isValidVibration@VibrationListenerConfig@@UEAA_NAEBVGameEvent@@@Z
    virtual bool isValidVibration(class GameEvent const&);

    // vIndex: 3, symbol:
    // ?shouldListen@SculkSensorVibrationConfig@@UEAA_NAEAVBlockSource@@AEBVGameEvent@@AEBUGameEventContext@@@Z
    virtual bool shouldListen(class BlockSource& region, class GameEvent const&, struct GameEventContext const&);

    // vIndex: 4, symbol: ?onSerializableDataChanged@SculkSensorVibrationConfig@@UEAAXAEAVBlockSource@@@Z
    virtual void onSerializableDataChanged(class BlockSource&);

    // vIndex: 5, symbol: ?canReceiveOnlyIfAdjacentChunksAreTicking@SculkSensorVibrationConfig@@UEBA_NXZ
    virtual bool canReceiveOnlyIfAdjacentChunksAreTicking() const;

    // symbol: ??0SculkSensorVibrationConfig@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit SculkSensorVibrationConfig(class BlockPos const& pos);

    // NOLINTEND
};
