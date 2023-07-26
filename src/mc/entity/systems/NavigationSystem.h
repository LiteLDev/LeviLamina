#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NavigationSystem {

public:
    // prevent constructor by default
    NavigationSystem& operator=(NavigationSystem const&) = delete;
    NavigationSystem(NavigationSystem const&)            = delete;
    NavigationSystem()                                   = delete;

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
     * @symbol ?tick\@NavigationSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
