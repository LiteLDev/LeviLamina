#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SensingSystem {

public:
    // prevent constructor by default
    SensingSystem& operator=(SensingSystem const&) = delete;
    SensingSystem(SensingSystem const&)            = delete;
    SensingSystem()                                = delete;

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
     * @symbol ?tick\@SensingSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
