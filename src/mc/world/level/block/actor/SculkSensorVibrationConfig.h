#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListenerConfig.h"

class SculkSensorVibrationConfig : public ::VibrationListenerConfig {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSENSORVIBRATIONCONFIG
public:
    SculkSensorVibrationConfig& operator=(SculkSensorVibrationConfig const&) = delete;
    SculkSensorVibrationConfig(SculkSensorVibrationConfig const&)            = delete;
    SculkSensorVibrationConfig()                                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?onSignalReceive\@SculkSensorVibrationConfig\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVGameEvent\@\@PEAVActor\@\@MI3\@Z
     */
    virtual void
    onSignalReceive(class BlockSource&, class BlockPos const&, class GameEvent const&, class Actor*, float, unsigned int, class Actor*);
    /**
     * @vftbl 2
     * @symbol ?isValidVibration\@VibrationListenerConfig\@\@UEAA_NAEBVGameEvent\@\@\@Z
     */
    virtual bool isValidVibration(class GameEvent const&);
    /**
     * @vftbl 3
     * @symbol
     * ?shouldListen\@SculkSensorVibrationConfig\@\@UEAA_NAEAVBlockSource\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@\@Z
     */
    virtual bool shouldListen(class BlockSource&, class GameEvent const&, struct GameEventContext const&);
    /**
     * @vftbl 4
     * @symbol ?onSerializableDataChanged\@SculkSensorVibrationConfig\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onSerializableDataChanged(class BlockSource&);
    /**
     * @symbol ??0SculkSensorVibrationConfig\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SculkSensorVibrationConfig(class BlockPos const&);
};
