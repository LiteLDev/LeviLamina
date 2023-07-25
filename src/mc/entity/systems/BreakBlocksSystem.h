#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreakBlocksSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKBLOCKSSYSTEM
public:
    BreakBlocksSystem& operator=(BreakBlocksSystem const&) = delete;
    BreakBlocksSystem(BreakBlocksSystem const&)            = delete;
    BreakBlocksSystem()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?tick\@BreakBlocksSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);

    // private:
    /**
     * @symbol ?_tickComponent\@BreakBlocksSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVBreakBlocksComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class BreakBlocksComponent&);

private:
};
