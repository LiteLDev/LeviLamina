#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HoldBlockSystem {

public:
    // prevent constructor by default
    HoldBlockSystem& operator=(HoldBlockSystem const&) = delete;
    HoldBlockSystem(HoldBlockSystem const&)            = delete;
    HoldBlockSystem()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?registerEvents\@HoldBlockSystem\@\@UEAAXAEAV?$basic_dispatcher\@V?$allocator\@X\@std\@\@\@entt\@\@\@Z
     */
    virtual void registerEvents(class entt::basic_dispatcher<std::allocator<void>>&);
    /**
     * @vftbl 2
     * @symbol ?tick\@HoldBlockSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_holdBlockSystemOnActorDie\@HoldBlockSystem\@\@CAXAEAUActorDieEvent\@\@\@Z
     */
    MCAPI static void _holdBlockSystemOnActorDie(struct ActorDieEvent&);
    // NOLINTEND
};
