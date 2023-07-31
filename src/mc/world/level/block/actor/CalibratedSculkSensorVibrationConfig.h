#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/SculkSensorVibrationConfig.h"

class CalibratedSculkSensorVibrationConfig : public ::SculkSensorVibrationConfig {

public:
    // prevent constructor by default
    CalibratedSculkSensorVibrationConfig& operator=(CalibratedSculkSensorVibrationConfig const&) = delete;
    CalibratedSculkSensorVibrationConfig(CalibratedSculkSensorVibrationConfig const&)            = delete;
    CalibratedSculkSensorVibrationConfig()                                                       = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
