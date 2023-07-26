#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerMovementRateSystem {

public:
    // prevent constructor by default
    PlayerMovementRateSystem& operator=(PlayerMovementRateSystem const&) = delete;
    PlayerMovementRateSystem(PlayerMovementRateSystem const&)            = delete;
    PlayerMovementRateSystem()                                           = delete;

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
     * @symbol ?tick\@PlayerMovementRateSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
