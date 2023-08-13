#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/OnFireSystem.h"

class OnFireServerSystem : public ::OnFireSystem {

public:
    // prevent constructor by default
    OnFireServerSystem& operator=(OnFireServerSystem const&) = delete;
    OnFireServerSystem(OnFireServerSystem const&)            = delete;
    OnFireServerSystem()                                     = delete;

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
     * @symbol ?tick\@OnFireServerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_tickServer\@OnFireServerSystem\@\@CAXAEAVEntityContext\@\@AEAVActorOwnerComponent\@\@AEAUOnFireComponent\@\@\@Z
     */
    MCAPI static void _tickServer(class EntityContext&, class ActorOwnerComponent&, struct OnFireComponent&);
    // NOLINTEND
};
