#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListenerConfig.h"

class WardenVibrationConfig : public ::VibrationListenerConfig {
public:
    // prevent constructor by default
    WardenVibrationConfig& operator=(WardenVibrationConfig const&) = delete;
    WardenVibrationConfig(WardenVibrationConfig const&)            = delete;
    WardenVibrationConfig()                                        = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?onSignalReceive@WardenVibrationConfig@@UEAAXAEAVBlockSource@@AEBVBlockPos@@AEBVGameEvent@@PEAVActor@@MI3@Z
    virtual void
    onSignalReceive(class BlockSource&, class BlockPos const&, class GameEvent const&, class Actor*, float, uint, class Actor*);

    // vIndex: 2, symbol: ?isValidVibration@WardenVibrationConfig@@UEAA_NAEBVGameEvent@@@Z
    virtual bool isValidVibration(class GameEvent const&);

    // vIndex: 3, symbol:
    // ?shouldListen@WardenVibrationConfig@@UEAA_NAEAVBlockSource@@AEBVGameEvent@@AEBUGameEventContext@@@Z
    virtual bool shouldListen(class BlockSource&, class GameEvent const&, struct GameEventContext const&);

    // vIndex: 4, symbol: ?onSerializableDataChanged@VibrationListenerConfig@@UEAAXAEAVBlockSource@@@Z
    virtual void onSerializableDataChanged(class BlockSource&);

    // symbol: ??0WardenVibrationConfig@@QEAA@AEAVActor@@G@Z
    MCAPI WardenVibrationConfig(class Actor&, ushort);

    // NOLINTEND
};
