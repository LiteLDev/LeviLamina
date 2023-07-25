#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandBlockSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCKSYSTEM
public:
    CommandBlockSystem& operator=(CommandBlockSystem const&) = delete;
    CommandBlockSystem(CommandBlockSystem const&)            = delete;
    CommandBlockSystem()                                     = delete;
#endif

public:
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
     * @symbol ?tick\@CommandBlockSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
