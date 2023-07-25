#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HoldBlockSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOLDBLOCKSYSTEM
public:
    HoldBlockSystem& operator=(HoldBlockSystem const&) = delete;
    HoldBlockSystem(HoldBlockSystem const&)            = delete;
    HoldBlockSystem()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?registerEvents\@HoldBlockSystem\@\@UEAAXAEAV?$basic_dispatcher\@V?$allocator\@X\@std\@\@\@entt\@\@\@Z
     */
    virtual void registerEvents(class entt::basic_dispatcher<class std::allocator<void>>&);
    /**
     * @vftbl 2
     * @symbol ?tick\@HoldBlockSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);

    // private:
    /**
     * @symbol ?_holdBlockSystemOnActorDie\@HoldBlockSystem\@\@CAXAEAUActorDieEvent\@\@\@Z
     */
    MCAPI static void _holdBlockSystemOnActorDie(struct ActorDieEvent&);

private:
};
