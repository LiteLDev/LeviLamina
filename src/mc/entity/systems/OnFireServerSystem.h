#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnFireServerSystem {

public:
    // prevent constructor by default
    OnFireServerSystem& operator=(OnFireServerSystem const&) = delete;
    OnFireServerSystem(OnFireServerSystem const&)            = delete;
    OnFireServerSystem()                                     = delete;

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
     * @symbol ?tick\@OnFireServerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_tickServer\@OnFireServerSystem\@\@CAXAEAVEntityContext\@\@AEAVActorOwnerComponent\@\@AEAUOnFireComponent\@\@\@Z
     */
    MCAPI static void _tickServer(class EntityContext&, class ActorOwnerComponent&, struct OnFireComponent&); // NOLINT

private:
};
