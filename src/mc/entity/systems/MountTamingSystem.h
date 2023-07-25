#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MountTamingSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOUNTTAMINGSYSTEM
public:
    MountTamingSystem& operator=(MountTamingSystem const&) = delete;
    MountTamingSystem(MountTamingSystem const&)            = delete;
    MountTamingSystem()                                    = delete;
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
     * @symbol ?tick\@MountTamingSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
