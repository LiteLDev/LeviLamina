#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TargetNearbySystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETNEARBYSYSTEM
public:
    TargetNearbySystem& operator=(TargetNearbySystem const&) = delete;
    TargetNearbySystem(TargetNearbySystem const&)            = delete;
    TargetNearbySystem()                                     = delete;
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
     * @symbol ?tick\@TargetNearbySystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
