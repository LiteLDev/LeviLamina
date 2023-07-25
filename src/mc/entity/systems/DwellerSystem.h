#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DwellerSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DWELLERSYSTEM
public:
    DwellerSystem& operator=(DwellerSystem const&) = delete;
    DwellerSystem(DwellerSystem const&)            = delete;
    DwellerSystem()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?registerEvents\@DwellerSystem\@\@UEAAXAEAV?$basic_dispatcher\@V?$allocator\@X\@std\@\@\@entt\@\@\@Z
     */
    virtual void registerEvents(class entt::basic_dispatcher<class std::allocator<void>>&);
    /**
     * @vftbl 2
     * @symbol ?tick\@DwellerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
