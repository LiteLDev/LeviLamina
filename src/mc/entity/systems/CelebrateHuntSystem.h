#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CelebrateHuntSystem {

public:
    // prevent constructor by default
    CelebrateHuntSystem& operator=(CelebrateHuntSystem const&) = delete;
    CelebrateHuntSystem(CelebrateHuntSystem const&)            = delete;
    CelebrateHuntSystem()                                      = delete;

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
     * @symbol ?tick\@CelebrateHuntSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};
