#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SculkShriekerVibrationConfig {

public:
    // prevent constructor by default
    SculkShriekerVibrationConfig& operator=(SculkShriekerVibrationConfig const&) = delete;
    SculkShriekerVibrationConfig(SculkShriekerVibrationConfig const&)            = delete;
    SculkShriekerVibrationConfig()                                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?onSignalReceive\@SculkShriekerVibrationConfig\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVGameEvent\@\@PEAVActor\@\@MI3\@Z
     */
    virtual void
    onSignalReceive(class BlockSource&, class BlockPos const&, class GameEvent const&, class Actor*, float, unsigned int, class Actor*); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?isValidVibration\@SculkShriekerVibrationConfig\@\@UEAA_NAEBVGameEvent\@\@\@Z
     */
    virtual bool isValidVibration(class GameEvent const&); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?shouldListen\@SculkShriekerVibrationConfig\@\@UEAA_NAEAVBlockSource\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@\@Z
     */
    virtual bool shouldListen(class BlockSource&, class GameEvent const&, struct GameEventContext const&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?onSerializableDataChanged\@SculkShriekerVibrationConfig\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onSerializableDataChanged(class BlockSource&); // NOLINT
};
