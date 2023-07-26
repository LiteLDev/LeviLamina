#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreakBlocksSystem {

public:
    // prevent constructor by default
    BreakBlocksSystem& operator=(BreakBlocksSystem const&) = delete;
    BreakBlocksSystem(BreakBlocksSystem const&)            = delete;
    BreakBlocksSystem()                                    = delete;

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
     * @symbol ?tick\@BreakBlocksSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT

    // private:
    /**
     * @symbol ?_tickComponent\@BreakBlocksSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVBreakBlocksComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class BreakBlocksComponent&); // NOLINT

private:
};
