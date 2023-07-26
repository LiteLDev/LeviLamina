#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AreaAttackSystem {

public:
    // prevent constructor by default
    AreaAttackSystem& operator=(AreaAttackSystem const&) = delete;
    AreaAttackSystem(AreaAttackSystem const&)            = delete;
    AreaAttackSystem()                                   = delete;

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
     * @symbol ?tick\@AreaAttackSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT

    // private:
    /**
     * @symbol ?_tickComponent\@AreaAttackSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVAreaAttackComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class AreaAttackComponent&); // NOLINT

private:
};
