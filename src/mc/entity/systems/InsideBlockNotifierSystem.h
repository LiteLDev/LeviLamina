#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideBlockNotifierSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBLOCKNOTIFIERSYSTEM
public:
    InsideBlockNotifierSystem& operator=(InsideBlockNotifierSystem const&) = delete;
    InsideBlockNotifierSystem(InsideBlockNotifierSystem const&)            = delete;
    InsideBlockNotifierSystem()                                            = delete;
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
     * @symbol ?tick\@InsideBlockNotifierSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
