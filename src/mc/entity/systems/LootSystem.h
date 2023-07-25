#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LootSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTSYSTEM
public:
    LootSystem& operator=(LootSystem const&) = delete;
    LootSystem(LootSystem const&)            = delete;
    LootSystem()                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?registerEvents\@LootSystem\@\@UEAAXAEAV?$basic_dispatcher\@V?$allocator\@X\@std\@\@\@entt\@\@\@Z
     */
    virtual void registerEvents(class entt::basic_dispatcher<class std::allocator<void>>&);
    /**
     * @vftbl 2
     * @symbol ?tick\@LootSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
