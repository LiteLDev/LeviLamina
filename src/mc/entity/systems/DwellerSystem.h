#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DwellerSystem {

public:
    // prevent constructor by default
    DwellerSystem& operator=(DwellerSystem const&) = delete;
    DwellerSystem(DwellerSystem const&)            = delete;
    DwellerSystem()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?registerEvents\@DwellerSystem\@\@UEAAXAEAV?$basic_dispatcher\@V?$allocator\@X\@std\@\@\@entt\@\@\@Z
     */
    virtual void registerEvents(class entt::basic_dispatcher<class std::allocator<void>>&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tick\@DwellerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
