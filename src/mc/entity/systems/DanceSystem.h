#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DanceSystem {

public:
    // prevent constructor by default
    DanceSystem& operator=(DanceSystem const&) = delete;
    DanceSystem(DanceSystem const&)            = delete;
    DanceSystem()                              = delete;

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
     * @symbol ?tick\@DanceSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
