#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockClimberSystem {

public:
    // prevent constructor by default
    BlockClimberSystem& operator=(BlockClimberSystem const&) = delete;
    BlockClimberSystem(BlockClimberSystem const&)            = delete;
    BlockClimberSystem()                                     = delete;

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
     * @symbol ?tick\@BlockClimberSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
