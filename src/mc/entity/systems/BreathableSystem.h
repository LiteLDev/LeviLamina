#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreathableSystem {

public:
    // prevent constructor by default
    BreathableSystem& operator=(BreathableSystem const&) = delete;
    BreathableSystem(BreathableSystem const&)            = delete;
    BreathableSystem()                                   = delete;

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
     * @symbol ?tick\@BreathableSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};
