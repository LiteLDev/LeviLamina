#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GrowCropSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROWCROPSYSTEM
public:
    GrowCropSystem& operator=(GrowCropSystem const&) = delete;
    GrowCropSystem(GrowCropSystem const&)            = delete;
    GrowCropSystem()                                 = delete;
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
     * @symbol ?tick\@GrowCropSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
