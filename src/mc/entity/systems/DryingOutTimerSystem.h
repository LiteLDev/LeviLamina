#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DryingOutTimerSystem {

public:
    // prevent constructor by default
    DryingOutTimerSystem& operator=(DryingOutTimerSystem const&) = delete;
    DryingOutTimerSystem(DryingOutTimerSystem const&)            = delete;
    DryingOutTimerSystem()                                       = delete;

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
     * @symbol ?tick\@DryingOutTimerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};
