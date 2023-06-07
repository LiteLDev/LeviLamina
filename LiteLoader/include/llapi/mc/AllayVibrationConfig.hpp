/**
 * @file  AllayVibrationConfig.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AllayVibrationConfig.
 *
 */
class AllayVibrationConfig {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ALLAYVIBRATIONCONFIG
public:
    class AllayVibrationConfig& operator=(class AllayVibrationConfig const &) = delete;
    AllayVibrationConfig(class AllayVibrationConfig const &) = delete;
    AllayVibrationConfig() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?onSignalReceive\@AllayVibrationConfig\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVGameEvent\@\@PEAVActor\@\@MI3\@Z
     */
    virtual void onSignalReceive(class BlockSource &, class BlockPos const &, class GameEvent const &, class Actor *, float, unsigned int, class Actor *);
    /**
     * @vftbl 2
     * @symbol ?isValidVibration\@AllayVibrationConfig\@\@UEAA_NAEBVGameEvent\@\@\@Z
     */
    virtual bool isValidVibration(class GameEvent const &);
    /**
     * @vftbl 3
     * @symbol ?shouldListen\@AllayVibrationConfig\@\@UEAA_NAEAVBlockSource\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@\@Z
     */
    virtual bool shouldListen(class BlockSource &, class GameEvent const &, struct GameEventContext const &);
    /**
     * @symbol ??0AllayVibrationConfig\@\@QEAA\@AEAVActor\@\@G\@Z
     */
    MCAPI AllayVibrationConfig(class Actor &, unsigned short);

};
