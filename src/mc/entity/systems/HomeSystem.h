#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HomeSystem {

public:
    // prevent constructor by default
    HomeSystem& operator=(HomeSystem const&) = delete;
    HomeSystem(HomeSystem const&)            = delete;
    HomeSystem()                             = delete;

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
     * @symbol ?tick\@HomeSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_tickComponent\@HomeSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVHomeComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class HomeComponent&);
    // NOLINTEND
};
