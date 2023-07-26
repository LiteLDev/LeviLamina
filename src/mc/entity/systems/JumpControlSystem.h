#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JumpControlSystem {

public:
    // prevent constructor by default
    JumpControlSystem& operator=(JumpControlSystem const&) = delete;
    JumpControlSystem(JumpControlSystem const&)            = delete;
    JumpControlSystem()                                    = delete;

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
     * @symbol ?tick\@JumpControlSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
