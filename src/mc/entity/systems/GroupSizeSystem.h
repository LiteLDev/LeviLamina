#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GroupSizeSystem {

public:
    // prevent constructor by default
    GroupSizeSystem& operator=(GroupSizeSystem const&) = delete;
    GroupSizeSystem(GroupSizeSystem const&)            = delete;
    GroupSizeSystem()                                  = delete;

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
     * @symbol ?tick\@GroupSizeSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT

    // private:
    /**
     * @symbol ?_tickComponent\@GroupSizeSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVGroupSizeComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class GroupSizeComponent&); // NOLINT

private:
};
