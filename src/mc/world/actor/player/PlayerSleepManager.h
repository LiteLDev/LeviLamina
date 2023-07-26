#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerSleepManager {

public:
    // prevent constructor by default
    PlayerSleepManager& operator=(PlayerSleepManager const&) = delete;
    PlayerSleepManager(PlayerSleepManager const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?updateSleepingPlayerList\@PlayerSleepManager\@\@UEAAXXZ
     */
    virtual void updateSleepingPlayerList(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @symbol ?getPlayerSleepStatus\@PlayerSleepManager\@\@QEBAAEBUPlayerSleepStatus\@\@XZ
     */
    MCAPI struct PlayerSleepStatus const& getPlayerSleepStatus() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERSLEEPMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlayerSleepManager(); // NOLINT
#endif
    /**
     * @symbol ??0PlayerSleepManager\@\@QEAA\@XZ
     */
    MCAPI PlayerSleepManager(); // NOLINT
    /**
     * @symbol ?getPlayerSleepStatus\@PlayerSleepManager\@\@QEBAAEBUPlayerSleepStatus\@\@XZ
     */
    MCAPI struct PlayerSleepStatus const& getPlayerSleepStatus() const; // NOLINT
    /**
     * @symbol ?initializeWithGameplayUserManager\@PlayerSleepManager\@\@QEAAXAEAVGameplayUserManager\@\@\@Z
     */
    MCAPI void initializeWithGameplayUserManager(class GameplayUserManager&); // NOLINT
    /**
     * @symbol ?setSleepStatus\@PlayerSleepManager\@\@QEAAXAEBUPlayerSleepStatus\@\@\@Z
     */
    MCAPI void setSleepStatus(struct PlayerSleepStatus const&); // NOLINT
};
