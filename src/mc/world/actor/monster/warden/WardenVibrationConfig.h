#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListenerConfig.h"

class WardenVibrationConfig : public ::VibrationListenerConfig {
public:
    // prevent constructor by default
    WardenVibrationConfig& operator=(WardenVibrationConfig const&);
    WardenVibrationConfig(WardenVibrationConfig const&);
    WardenVibrationConfig();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WardenVibrationConfig@@UEAA@XZ
    virtual ~WardenVibrationConfig() = default;

    // vIndex: 1, symbol:
    // ?onSignalReceive@WardenVibrationConfig@@UEAAXAEAVBlockSource@@AEBVBlockPos@@AEBVGameEvent@@PEAVActor@@MI3@Z
    virtual void
    onSignalReceive(class BlockSource& region, class BlockPos const&, class GameEvent const&, class Actor*, float, uint, class Actor*);

    // vIndex: 2, symbol: ?isValidVibration@WardenVibrationConfig@@UEAA_NAEBVGameEvent@@@Z
    virtual bool isValidVibration(class GameEvent const&);

    // vIndex: 3, symbol:
    // ?shouldListen@WardenVibrationConfig@@UEAA_NAEAVBlockSource@@AEBVGameEvent@@AEBUGameEventContext@@@Z
    virtual bool shouldListen(class BlockSource& region, class GameEvent const&, struct GameEventContext const&);

    // vIndex: 4, symbol: ?onSerializableDataChanged@VibrationListenerConfig@@UEAAXAEAVBlockSource@@@Z
    virtual void onSerializableDataChanged(class BlockSource&);

    // vIndex: 5, symbol: ?canReceiveOnlyIfAdjacentChunksAreTicking@VibrationListenerConfig@@UEBA_NXZ
    virtual bool canReceiveOnlyIfAdjacentChunksAreTicking() const;

    // symbol: ??0WardenVibrationConfig@@QEAA@AEAVActor@@G@Z
    MCAPI WardenVibrationConfig(class Actor& actor, ushort);

    // NOLINTEND
};
