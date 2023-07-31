#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LootSystem {

public:
    // prevent constructor by default
    LootSystem& operator=(LootSystem const&) = delete;
    LootSystem(LootSystem const&)            = delete;
    LootSystem()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?registerEvents\@LootSystem\@\@UEAAXAEAV?$basic_dispatcher\@V?$allocator\@X\@std\@\@\@entt\@\@\@Z
     */
    virtual void registerEvents(class entt::basic_dispatcher<std::allocator<void>>&);
    /**
     * @vftbl 2
     * @symbol ?tick\@LootSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};
