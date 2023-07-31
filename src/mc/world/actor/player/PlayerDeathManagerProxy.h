#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerDeathManagerProxy {

public:
    // prevent constructor by default
    PlayerDeathManagerProxy& operator=(PlayerDeathManagerProxy const&) = delete;
    PlayerDeathManagerProxy(PlayerDeathManagerProxy const&)            = delete;
    PlayerDeathManagerProxy()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?fetchActor\@PlayerDeathManagerProxy\@\@UEBAPEAVActor\@\@UActorUniqueID\@\@\@Z
     */
    virtual class Actor* fetchActor(struct ActorUniqueID) const;
    /**
     * @vftbl 2
     * @symbol ?shouldShowDeathMessages\@PlayerDeathManagerProxy\@\@UEBA_NXZ
     */
    virtual bool shouldShowDeathMessages() const;
    /**
     * @symbol ??0PlayerDeathManagerProxy\@\@QEAA\@AEAVServerLevel\@\@\@Z
     */
    MCAPI PlayerDeathManagerProxy(class ServerLevel&);
    // NOLINTEND
};
