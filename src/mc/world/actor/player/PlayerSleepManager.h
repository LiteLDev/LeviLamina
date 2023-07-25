#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerSleepManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSLEEPMANAGER
public:
    PlayerSleepManager& operator=(PlayerSleepManager const&) = delete;
    PlayerSleepManager(PlayerSleepManager const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?updateSleepingPlayerList\@PlayerSleepManager\@\@UEAAXXZ
     */
    virtual void updateSleepingPlayerList();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @symbol ?getPlayerSleepStatus\@PlayerSleepManager\@\@QEBAAEBUPlayerSleepStatus\@\@XZ
     */
    MCAPI struct PlayerSleepStatus const& getPlayerSleepStatus() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERSLEEPMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlayerSleepManager();
#endif
    /**
     * @symbol ??0PlayerSleepManager\@\@QEAA\@XZ
     */
    MCAPI PlayerSleepManager();
    /**
     * @symbol ?getPlayerSleepStatus\@PlayerSleepManager\@\@QEBAAEBUPlayerSleepStatus\@\@XZ
     */
    MCAPI struct PlayerSleepStatus const& getPlayerSleepStatus() const;
    /**
     * @symbol ?initializeWithGameplayUserManager\@PlayerSleepManager\@\@QEAAXAEAVGameplayUserManager\@\@\@Z
     */
    MCAPI void initializeWithGameplayUserManager(class GameplayUserManager&);
    /**
     * @symbol ?setSleepStatus\@PlayerSleepManager\@\@QEAAXAEBUPlayerSleepStatus\@\@\@Z
     */
    MCAPI void setSleepStatus(struct PlayerSleepStatus const&);
};
