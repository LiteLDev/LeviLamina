/**
 * @file  PlayerDeathManagerProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class PlayerDeathManagerProxy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERDEATHMANAGERPROXY
public:
    class PlayerDeathManagerProxy& operator=(class PlayerDeathManagerProxy const &) = delete;
    PlayerDeathManagerProxy(class PlayerDeathManagerProxy const &) = delete;
    PlayerDeathManagerProxy() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?fetchActor\@PlayerDeathManagerProxy\@\@UEBAPEAVActor\@\@UActorUniqueID\@\@\@Z
     */
    virtual class Actor * fetchActor(struct ActorUniqueID) const;
    /**
     * @vftbl 2
     * @symbol ?shouldShowDeathMessages\@PlayerDeathManagerProxy\@\@UEBA_NXZ
     */
    virtual bool shouldShowDeathMessages() const;
    /**
     * @symbol ??0PlayerDeathManagerProxy\@\@QEAA\@AEAVServerLevel\@\@\@Z
     */
    MCAPI PlayerDeathManagerProxy(class ServerLevel &);

};
