#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TransformationSystem {

public:
    // prevent constructor by default
    TransformationSystem& operator=(TransformationSystem const&) = delete;
    TransformationSystem(TransformationSystem const&)            = delete;
    TransformationSystem()                                       = delete;

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
     * @symbol ?tick\@TransformationSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
