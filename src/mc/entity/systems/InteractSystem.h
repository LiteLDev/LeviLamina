#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InteractSystem {

public:
    // prevent constructor by default
    InteractSystem& operator=(InteractSystem const&) = delete;
    InteractSystem(InteractSystem const&)            = delete;
    InteractSystem()                                 = delete;

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
     * @symbol ?tick\@InteractSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};
