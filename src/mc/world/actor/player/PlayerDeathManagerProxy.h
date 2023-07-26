#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerDeathManagerProxy {

public:
    // prevent constructor by default
    PlayerDeathManagerProxy& operator=(PlayerDeathManagerProxy const&) = delete;
    PlayerDeathManagerProxy(PlayerDeathManagerProxy const&)            = delete;
    PlayerDeathManagerProxy()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?fetchActor\@PlayerDeathManagerProxy\@\@UEBAPEAVActor\@\@UActorUniqueID\@\@\@Z
     */
    virtual class Actor* fetchActor(struct ActorUniqueID) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?shouldShowDeathMessages\@PlayerDeathManagerProxy\@\@UEBA_NXZ
     */
    virtual bool shouldShowDeathMessages() const; // NOLINT
    /**
     * @symbol ??0PlayerDeathManagerProxy\@\@QEAA\@AEAVServerLevel\@\@\@Z
     */
    MCAPI PlayerDeathManagerProxy(class ServerLevel&); // NOLINT
};
