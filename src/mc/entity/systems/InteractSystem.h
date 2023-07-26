#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InteractSystem {

public:
    // prevent constructor by default
    InteractSystem& operator=(InteractSystem const&) = delete;
    InteractSystem(InteractSystem const&)            = delete;
    InteractSystem()                                 = delete;

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
     * @symbol ?tick\@InteractSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
