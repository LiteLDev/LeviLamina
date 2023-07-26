#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WardenVibrationConfig {

public:
    // prevent constructor by default
    WardenVibrationConfig& operator=(WardenVibrationConfig const&) = delete;
    WardenVibrationConfig(WardenVibrationConfig const&)            = delete;
    WardenVibrationConfig()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?onSignalReceive\@WardenVibrationConfig\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVGameEvent\@\@PEAVActor\@\@MI3\@Z
     */
    virtual void
    onSignalReceive(class BlockSource&, class BlockPos const&, class GameEvent const&, class Actor*, float, unsigned int, class Actor*); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?isValidVibration\@WardenVibrationConfig\@\@UEAA_NAEBVGameEvent\@\@\@Z
     */
    virtual bool isValidVibration(class GameEvent const&); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?shouldListen\@WardenVibrationConfig\@\@UEAA_NAEAVBlockSource\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@\@Z
     */
    virtual bool shouldListen(class BlockSource&, class GameEvent const&, struct GameEventContext const&); // NOLINT
    /**
     * @symbol ??0WardenVibrationConfig\@\@QEAA\@AEAVActor\@\@G\@Z
     */
    MCAPI WardenVibrationConfig(class Actor&, unsigned short); // NOLINT
};
