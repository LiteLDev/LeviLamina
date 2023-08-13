#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListenerConfig.h"

class SculkShriekerVibrationConfig : public ::VibrationListenerConfig {

public:
    // prevent constructor by default
    SculkShriekerVibrationConfig& operator=(SculkShriekerVibrationConfig const&) = delete;
    SculkShriekerVibrationConfig(SculkShriekerVibrationConfig const&)            = delete;
    SculkShriekerVibrationConfig()                                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?onSignalReceive\@SculkShriekerVibrationConfig\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVGameEvent\@\@PEAVActor\@\@MI3\@Z
     */
    virtual void
    onSignalReceive(class BlockSource&, class BlockPos const&, class GameEvent const&, class Actor*, float, unsigned int, class Actor*);
    /**
     * @vftbl 2
     * @symbol ?isValidVibration\@SculkShriekerVibrationConfig\@\@UEAA_NAEBVGameEvent\@\@\@Z
     */
    virtual bool isValidVibration(class GameEvent const&);
    /**
     * @vftbl 3
     * @symbol
     * ?shouldListen\@SculkShriekerVibrationConfig\@\@UEAA_NAEAVBlockSource\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@\@Z
     */
    virtual bool shouldListen(class BlockSource&, class GameEvent const&, struct GameEventContext const&);
    /**
     * @vftbl 4
     * @symbol ?onSerializableDataChanged\@SculkShriekerVibrationConfig\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onSerializableDataChanged(class BlockSource&);
    // NOLINTEND
};
