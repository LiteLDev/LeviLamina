/**
 * @file  WardenVibrationConfig.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WardenVibrationConfig.
 *
 */
class WardenVibrationConfig {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WARDENVIBRATIONCONFIG
public:
    class WardenVibrationConfig& operator=(class WardenVibrationConfig const &) = delete;
    WardenVibrationConfig(class WardenVibrationConfig const &) = delete;
    WardenVibrationConfig() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~WardenVibrationConfig();
    /**
     * @hash   -1982159793
     * @vftbl  1
     * @symbol  ?onSignalReceive\@WardenVibrationConfig\@\@UEAAXAEAVBlockSource\@\@VBlockPos\@\@AEBVGameEvent\@\@PEAVActor\@\@M3\@Z
     */
    virtual void onSignalReceive(class BlockSource &, class BlockPos, class GameEvent const &, class Actor *, float, class Actor *);
    /**
     * @hash   -1090569769
     * @vftbl  2
     * @symbol  ?isValidVibration\@WardenVibrationConfig\@\@UEAA_NAEBVGameEvent\@\@\@Z
     */
    virtual bool isValidVibration(class GameEvent const &);
    /**
     * @hash   -1056965466
     * @vftbl  3
     * @symbol  ?shouldListen\@WardenVibrationConfig\@\@UEAA_NAEAVBlockSource\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@\@Z
     */
    virtual bool shouldListen(class BlockSource &, class GameEvent const &, struct GameEventContext const &);
    /**
     * @hash   -1363690370
     * @symbol  ??0WardenVibrationConfig\@\@QEAA\@AEAVActor\@\@G\@Z
     */
    MCAPI WardenVibrationConfig(class Actor &, unsigned short);

};