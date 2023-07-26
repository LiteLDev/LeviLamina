#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandBlockSystem {

public:
    // prevent constructor by default
    CommandBlockSystem& operator=(CommandBlockSystem const&) = delete;
    CommandBlockSystem(CommandBlockSystem const&)            = delete;
    CommandBlockSystem()                                     = delete;

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
     * @symbol ?tick\@CommandBlockSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
