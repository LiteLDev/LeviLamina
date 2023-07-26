#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PeekSystem {

public:
    // prevent constructor by default
    PeekSystem& operator=(PeekSystem const&) = delete;
    PeekSystem(PeekSystem const&)            = delete;
    PeekSystem()                             = delete;

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
     * @symbol ?tick\@PeekSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
