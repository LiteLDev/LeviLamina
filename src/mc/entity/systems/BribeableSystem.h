#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BribeableSystem {

public:
    // prevent constructor by default
    BribeableSystem& operator=(BribeableSystem const&) = delete;
    BribeableSystem(BribeableSystem const&)            = delete;
    BribeableSystem()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tick\@BribeableSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
