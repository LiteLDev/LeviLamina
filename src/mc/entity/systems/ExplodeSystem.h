#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExplodeSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPLODESYSTEM
public:
    ExplodeSystem& operator=(ExplodeSystem const&) = delete;
    ExplodeSystem(ExplodeSystem const&)            = delete;
    ExplodeSystem()                                = delete;
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
     * @symbol ?tick\@ExplodeSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
