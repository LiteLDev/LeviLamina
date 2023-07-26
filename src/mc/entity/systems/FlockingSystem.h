#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlockingSystem {

public:
    // prevent constructor by default
    FlockingSystem& operator=(FlockingSystem const&) = delete;
    FlockingSystem(FlockingSystem const&)            = delete;
    FlockingSystem()                                 = delete;

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
     * @symbol ?tick\@FlockingSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
