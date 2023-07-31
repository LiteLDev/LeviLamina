#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveControlSystem {

public:
    // prevent constructor by default
    MoveControlSystem& operator=(MoveControlSystem const&) = delete;
    MoveControlSystem(MoveControlSystem const&)            = delete;
    MoveControlSystem()                                    = delete;

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
     * @symbol ?tick\@MoveControlSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};
