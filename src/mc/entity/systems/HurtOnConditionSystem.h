#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HurtOnConditionSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HURTONCONDITIONSYSTEM
public:
    HurtOnConditionSystem& operator=(HurtOnConditionSystem const&) = delete;
    HurtOnConditionSystem(HurtOnConditionSystem const&)            = delete;
    HurtOnConditionSystem()                                        = delete;
#endif

public:
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
     * @symbol ?tick\@HurtOnConditionSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
