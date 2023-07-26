#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HomeSystem {

public:
    // prevent constructor by default
    HomeSystem& operator=(HomeSystem const&) = delete;
    HomeSystem(HomeSystem const&)            = delete;
    HomeSystem()                             = delete;

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
     * @symbol ?tick\@HomeSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT

    // private:
    /**
     * @symbol ?_tickComponent\@HomeSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVHomeComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class HomeComponent&); // NOLINT

private:
};
