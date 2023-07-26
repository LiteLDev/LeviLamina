#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorSystem {

public:
    // prevent constructor by default
    BehaviorSystem& operator=(BehaviorSystem const&) = delete;
    BehaviorSystem(BehaviorSystem const&)            = delete;
    BehaviorSystem()                                 = delete;

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
     * @symbol ?tick\@BehaviorSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
