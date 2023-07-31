#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BoostableSystem {

public:
    // prevent constructor by default
    BoostableSystem& operator=(BoostableSystem const&) = delete;
    BoostableSystem(BoostableSystem const&)            = delete;
    BoostableSystem()                                  = delete;

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
     * @symbol ?tick\@BoostableSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};
