#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListenerConfig.h"

class AllayVibrationConfig : public ::VibrationListenerConfig {

public:
    // prevent constructor by default
    AllayVibrationConfig& operator=(AllayVibrationConfig const&) = delete;
    AllayVibrationConfig(AllayVibrationConfig const&)            = delete;
    AllayVibrationConfig()                                       = delete;

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
     * @vftbl 4
     * @symbol ?onSerializableDataChanged\@VibrationListenerConfig\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onSerializableDataChanged(class BlockSource&);
    /**
     * @symbol ??0AllayVibrationConfig\@\@QEAA\@AEAVActor\@\@G\@Z
     */
    MCAPI AllayVibrationConfig(class Actor&, unsigned short);
    // NOLINTEND
};
