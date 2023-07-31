#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockBreakSensorSystem {

public:
    // prevent constructor by default
    BlockBreakSensorSystem& operator=(BlockBreakSensorSystem const&) = delete;
    BlockBreakSensorSystem(BlockBreakSensorSystem const&)            = delete;
    BlockBreakSensorSystem()                                         = delete;

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
     * @symbol ?tick\@BlockBreakSensorSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};
