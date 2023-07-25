#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NavigationSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONSYSTEM
public:
    NavigationSystem& operator=(NavigationSystem const&) = delete;
    NavigationSystem(NavigationSystem const&)            = delete;
    NavigationSystem()                                   = delete;
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
     * @symbol ?tick\@NavigationSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
