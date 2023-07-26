#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListenerConfig.h"

class SculkSensorVibrationConfig : public ::VibrationListenerConfig {

public:
    // prevent constructor by default
    SculkSensorVibrationConfig& operator=(SculkSensorVibrationConfig const&) = delete;
    SculkSensorVibrationConfig(SculkSensorVibrationConfig const&)            = delete;
    SculkSensorVibrationConfig()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?onSignalReceive\@SculkSensorVibrationConfig\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVGameEvent\@\@PEAVActor\@\@MI3\@Z
     */
    virtual void
    onSignalReceive(class BlockSource&, class BlockPos const&, class GameEvent const&, class Actor*, float, unsigned int, class Actor*); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?isValidVibration\@VibrationListenerConfig\@\@UEAA_NAEBVGameEvent\@\@\@Z
     */
    virtual bool isValidVibration(class GameEvent const&); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?shouldListen\@SculkSensorVibrationConfig\@\@UEAA_NAEAVBlockSource\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@\@Z
     */
    virtual bool shouldListen(class BlockSource&, class GameEvent const&, struct GameEventContext const&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?onSerializableDataChanged\@SculkSensorVibrationConfig\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onSerializableDataChanged(class BlockSource&); // NOLINT
    /**
     * @symbol ??0SculkSensorVibrationConfig\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SculkSensorVibrationConfig(class BlockPos const&); // NOLINT
};
