#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class GroupSizeSystem : public ::ITickingSystem {

public:
    // prevent constructor by default
    GroupSizeSystem& operator=(GroupSizeSystem const&) = delete;
    GroupSizeSystem(GroupSizeSystem const&)            = delete;
    GroupSizeSystem()                                  = delete;

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
     * @symbol ?tick\@GroupSizeSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_tickComponent\@GroupSizeSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVGroupSizeComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class GroupSizeComponent&);
    // NOLINTEND
};
