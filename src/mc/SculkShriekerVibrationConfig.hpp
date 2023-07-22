/**
 * @file  SculkShriekerVibrationConfig.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SculkShriekerVibrationConfig.
 *
 */
class SculkShriekerVibrationConfig {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSHRIEKERVIBRATIONCONFIG
public:
    class SculkShriekerVibrationConfig& operator=(class SculkShriekerVibrationConfig const &) = delete;
    SculkShriekerVibrationConfig(class SculkShriekerVibrationConfig const &) = delete;
    SculkShriekerVibrationConfig() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SculkShriekerVibrationConfig();
    /**
     * @vftbl  1
     * @symbol  ?onSignalReceive\@SculkShriekerVibrationConfig\@\@UEAAXAEAVBlockSource\@\@VBlockPos\@\@AEBVGameEvent\@\@PEAVActor\@\@M3\@Z
     */
    virtual void onSignalReceive(class BlockSource &, class BlockPos, class GameEvent const &, class Actor *, float, class Actor *);
    /**
     * @vftbl  2
     * @symbol  ?isValidVibration\@SculkShriekerVibrationConfig\@\@UEAA_NAEBVGameEvent\@\@\@Z
     */
    virtual bool isValidVibration(class GameEvent const &);
    /**
     * @vftbl  3
     * @symbol  ?shouldListen\@SculkShriekerVibrationConfig\@\@UEAA_NAEAVBlockSource\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@\@Z
     */
    virtual bool shouldListen(class BlockSource &, class GameEvent const &, struct GameEventContext const &);

};