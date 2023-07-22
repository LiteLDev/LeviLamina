/**
 * @file  SculkSensorVibrationConfig.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "VibrationListenerConfig.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SculkSensorVibrationConfig.
 *
 */
class SculkSensorVibrationConfig : public VibrationListenerConfig {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSENSORVIBRATIONCONFIG
public:
    class SculkSensorVibrationConfig& operator=(class SculkSensorVibrationConfig const &) = delete;
    SculkSensorVibrationConfig(class SculkSensorVibrationConfig const &) = delete;
    SculkSensorVibrationConfig() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SculkSensorVibrationConfig();
    /**
     * @vftbl  1
     * @symbol  ?onSignalReceive\@SculkSensorVibrationConfig\@\@UEAAXAEAVBlockSource\@\@VBlockPos\@\@AEBVGameEvent\@\@PEAVActor\@\@M3\@Z
     */
    virtual void onSignalReceive(class BlockSource &, class BlockPos, class GameEvent const &, class Actor *, float, class Actor *);
    /**
     * @vftbl  2
     * @symbol  ?isValidVibration\@VibrationListenerConfig\@\@UEAA_NAEBVGameEvent\@\@\@Z
     */
    virtual bool isValidVibration(class GameEvent const &);
    /**
     * @vftbl  3
     * @symbol  ?shouldListen\@SculkSensorVibrationConfig\@\@UEAA_NAEAVBlockSource\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@\@Z
     */
    virtual bool shouldListen(class BlockSource &, class GameEvent const &, struct GameEventContext const &);

};