/**
 * @file  CalibratedSculkSensorVibrationConfig.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "SculkSensorVibrationConfig.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class CalibratedSculkSensorVibrationConfig : public SculkSensorVibrationConfig {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CALIBRATEDSCULKSENSORVIBRATIONCONFIG
public:
    class CalibratedSculkSensorVibrationConfig& operator=(class CalibratedSculkSensorVibrationConfig const &) = delete;
    CalibratedSculkSensorVibrationConfig(class CalibratedSculkSensorVibrationConfig const &) = delete;
    CalibratedSculkSensorVibrationConfig() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?shouldListen\@CalibratedSculkSensorVibrationConfig\@\@UEAA_NAEAVBlockSource\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@\@Z
     */
    virtual bool shouldListen(class BlockSource &, class GameEvent const &, struct GameEventContext const &);

};
