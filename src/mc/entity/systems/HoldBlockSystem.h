#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class HoldBlockSystem : public ::ITickingSystem {

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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HOLDBLOCKSYSTEM
    /**
     * @symbol ?tick\@HoldBlockSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCVAPI void tick(class EntityRegistry&);
#endif
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_holdBlockSystemOnActorDie\@HoldBlockSystem\@\@CAXAEAUActorDieEvent\@\@\@Z
     */
    MCAPI static void _holdBlockSystemOnActorDie(struct ActorDieEvent&);
    // NOLINTEND
};
