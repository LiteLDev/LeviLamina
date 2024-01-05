#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListenerConfig.h"

class SculkShriekerVibrationConfig : public ::VibrationListenerConfig {
public:
    // prevent constructor by default
    SculkShriekerVibrationConfig& operator=(SculkShriekerVibrationConfig const&);
    SculkShriekerVibrationConfig(SculkShriekerVibrationConfig const&);
    SculkShriekerVibrationConfig();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SculkShriekerVibrationConfig@@UEAA@XZ
    virtual ~SculkShriekerVibrationConfig() = default;

    // vIndex: 1, symbol:
    // ?onSignalReceive@SculkShriekerVibrationConfig@@UEAAXAEAVBlockSource@@AEBVBlockPos@@AEBVGameEvent@@PEAVActor@@MI3@Z
    virtual void
    onSignalReceive(class BlockSource& region, class BlockPos const&, class GameEvent const&, class Actor* source, float, uint, class Actor*);

    // vIndex: 2, symbol: ?isValidVibration@SculkShriekerVibrationConfig@@UEAA_NAEBVGameEvent@@@Z
    virtual bool isValidVibration(class GameEvent const&);

    // vIndex: 3, symbol:
    // ?shouldListen@SculkShriekerVibrationConfig@@UEAA_NAEAVBlockSource@@AEBVGameEvent@@AEBUGameEventContext@@@Z
    virtual bool shouldListen(class BlockSource& region, class GameEvent const&, struct GameEventContext const&);

    // vIndex: 4, symbol: ?onSerializableDataChanged@SculkShriekerVibrationConfig@@UEAAXAEAVBlockSource@@@Z
    virtual void onSerializableDataChanged(class BlockSource&);

    // vIndex: 5, symbol: ?canReceiveOnlyIfAdjacentChunksAreTicking@SculkShriekerVibrationConfig@@UEBA_NXZ
    virtual bool canReceiveOnlyIfAdjacentChunksAreTicking() const;

    // NOLINTEND
};
