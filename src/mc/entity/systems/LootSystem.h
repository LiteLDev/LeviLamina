#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class LootSystem : public ::ITickingSystem {

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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTSYSTEM
    /**
     * @symbol ?tick\@LootSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    MCVAPI void tick(class EntityRegistry&);
#endif
    // NOLINTEND
};
