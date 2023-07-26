#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DispatcherUpdateSystem {

public:
    // prevent constructor by default
    DispatcherUpdateSystem& operator=(DispatcherUpdateSystem const&) = delete;
    DispatcherUpdateSystem(DispatcherUpdateSystem const&)            = delete;
    DispatcherUpdateSystem()                                         = delete;

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
     * @symbol ?tick\@DispatcherUpdateSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
