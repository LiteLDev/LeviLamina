#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/SculkSensorVibrationConfig.h"

class CalibratedSculkSensorVibrationConfig : public ::SculkSensorVibrationConfig {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CALIBRATEDSCULKSENSORVIBRATIONCONFIG
public:
    CalibratedSculkSensorVibrationConfig& operator=(CalibratedSculkSensorVibrationConfig const&) = delete;
    CalibratedSculkSensorVibrationConfig(CalibratedSculkSensorVibrationConfig const&)            = delete;
    CalibratedSculkSensorVibrationConfig()                                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol
     * ?shouldListen\@CalibratedSculkSensorVibrationConfig\@\@UEAA_NAEAVBlockSource\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@\@Z
     */
    virtual bool shouldListen(class BlockSource&, class GameEvent const&, struct GameEventContext const&);
};
