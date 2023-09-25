/**
 * @file  PlayerSleepManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class PlayerSleepManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSLEEPMANAGER
public:
    class PlayerSleepManager& operator=(class PlayerSleepManager const &) = delete;
    PlayerSleepManager(class PlayerSleepManager const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?updateSleepingPlayerList\@PlayerSleepManager\@\@UEAAXM\@Z
     */
    virtual void updateSleepingPlayerList(float);
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

};
