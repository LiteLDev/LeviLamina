#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/IPlayerDeathManagerProxy.h"

class PlayerDeathManagerProxy : public ::IPlayerDeathManagerProxy {
public:
    // prevent constructor by default
    PlayerDeathManagerProxy& operator=(PlayerDeathManagerProxy const&);
    PlayerDeathManagerProxy(PlayerDeathManagerProxy const&);
    PlayerDeathManagerProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?fetchActor@PlayerDeathManagerProxy@@UEBAPEAVActor@@UActorUniqueID@@@Z
    virtual class Actor* fetchActor(struct ActorUniqueID) const;

    // vIndex: 2, symbol: ?shouldShowDeathMessages@PlayerDeathManagerProxy@@UEBA_NXZ
    virtual bool shouldShowDeathMessages() const;

    // symbol: ??0PlayerDeathManagerProxy@@QEAA@AEAVServerLevel@@@Z
    MCAPI explicit PlayerDeathManagerProxy(class ServerLevel&);

    // NOLINTEND
};
