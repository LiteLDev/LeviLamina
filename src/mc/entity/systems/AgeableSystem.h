#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AgeableSystem {

public:
    // prevent constructor by default
    AgeableSystem& operator=(AgeableSystem const&) = delete;
    AgeableSystem(AgeableSystem const&)            = delete;
    AgeableSystem()                                = delete;

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
     * @symbol ?tick\@AgeableSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
