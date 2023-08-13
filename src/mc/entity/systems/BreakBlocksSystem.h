#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class BreakBlocksSystem : public ::ITickingSystem {

public:
    // prevent constructor by default
    BreakBlocksSystem& operator=(BreakBlocksSystem const&) = delete;
    BreakBlocksSystem(BreakBlocksSystem const&)            = delete;
    BreakBlocksSystem()                                    = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_tickComponent\@BreakBlocksSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVBreakBlocksComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class BreakBlocksComponent&);
    // NOLINTEND
};
