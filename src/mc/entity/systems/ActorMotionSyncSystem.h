#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorMotionSyncSystem {

public:
    // prevent constructor by default
    ActorMotionSyncSystem& operator=(ActorMotionSyncSystem const&) = delete;
    ActorMotionSyncSystem(ActorMotionSyncSystem const&)            = delete;
    ActorMotionSyncSystem()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tick\@ActorMotionSyncSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
