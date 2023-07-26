#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MountTamingSystem {

public:
    // prevent constructor by default
    MountTamingSystem& operator=(MountTamingSystem const&) = delete;
    MountTamingSystem(MountTamingSystem const&)            = delete;
    MountTamingSystem()                                    = delete;

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
     * @symbol ?tick\@MountTamingSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
