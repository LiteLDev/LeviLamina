/**
 * @file  ServerPlayerSleepManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "PlayerSleepManager.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ServerPlayerSleepManager : public PlayerSleepManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYERSLEEPMANAGER
public:
    class ServerPlayerSleepManager& operator=(class ServerPlayerSleepManager const &) = delete;
    ServerPlayerSleepManager(class ServerPlayerSleepManager const &) = delete;
    ServerPlayerSleepManager() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?updateSleepingPlayerList\@ServerPlayerSleepManager\@\@UEAAXM\@Z
     */
    virtual void updateSleepingPlayerList(float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERPLAYERSLEEPMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerPlayerSleepManager();
#endif
    /**
     * @symbol ?enoughPlayersDeepSleeping\@ServerPlayerSleepManager\@\@QEBA_NM\@Z
     */
    MCAPI bool enoughPlayersDeepSleeping(float) const;

//private:
    /**
     * @symbol ?_awakenAllPlayers\@ServerPlayerSleepManager\@\@AEAAXXZ
     */
    MCAPI void _awakenAllPlayers();
    /**
     * @symbol ?_onPlayerDeath\@ServerPlayerSleepManager\@\@AEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void _onPlayerDeath(class Player &);

private:

};
