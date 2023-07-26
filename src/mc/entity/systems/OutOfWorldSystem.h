#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OutOfWorldSystem {

public:
    // prevent constructor by default
    OutOfWorldSystem& operator=(OutOfWorldSystem const&) = delete;
    OutOfWorldSystem(OutOfWorldSystem const&)            = delete;
    OutOfWorldSystem()                                   = delete;

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
     * @symbol ?tick\@OutOfWorldSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
