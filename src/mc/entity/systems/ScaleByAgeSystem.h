#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScaleByAgeSystem {

public:
    // prevent constructor by default
    ScaleByAgeSystem& operator=(ScaleByAgeSystem const&) = delete;
    ScaleByAgeSystem(ScaleByAgeSystem const&)            = delete;
    ScaleByAgeSystem()                                   = delete;

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
     * @symbol ?tick\@ScaleByAgeSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};
