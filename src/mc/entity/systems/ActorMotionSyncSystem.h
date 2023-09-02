#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class ActorMotionSyncSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    ActorMotionSyncSystem& operator=(ActorMotionSyncSystem const&) = delete;
    ActorMotionSyncSystem(ActorMotionSyncSystem const&)            = delete;
    ActorMotionSyncSystem()                                        = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@ActorMotionSyncSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
