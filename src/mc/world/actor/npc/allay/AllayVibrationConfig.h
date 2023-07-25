#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AllayVibrationConfig {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ALLAYVIBRATIONCONFIG
public:
    AllayVibrationConfig& operator=(AllayVibrationConfig const&) = delete;
    AllayVibrationConfig(AllayVibrationConfig const&)            = delete;
    AllayVibrationConfig()                                       = delete;
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
     * ?onSignalReceive\@AllayVibrationConfig\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVGameEvent\@\@PEAVActor\@\@MI3\@Z
     */
    virtual void
    onSignalReceive(class BlockSource&, class BlockPos const&, class GameEvent const&, class Actor*, float, unsigned int, class Actor*);
    /**
     * @vftbl 2
     * @symbol ?isValidVibration\@AllayVibrationConfig\@\@UEAA_NAEBVGameEvent\@\@\@Z
     */
    virtual bool isValidVibration(class GameEvent const&);
    /**
     * @vftbl 3
     * @symbol
     * ?shouldListen\@AllayVibrationConfig\@\@UEAA_NAEAVBlockSource\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@\@Z
     */
    virtual bool shouldListen(class BlockSource&, class GameEvent const&, struct GameEventContext const&);
    /**
     * @symbol ??0AllayVibrationConfig\@\@QEAA\@AEAVActor\@\@G\@Z
     */
    MCAPI AllayVibrationConfig(class Actor&, unsigned short);
};
