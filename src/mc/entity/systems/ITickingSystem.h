#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITickingSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITICKINGSYSTEM
public:
    ITickingSystem& operator=(ITickingSystem const&) = delete;
    ITickingSystem(ITickingSystem const&)            = delete;
    ITickingSystem()                                 = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITICKINGSYSTEM
    /**
     * @symbol ?singleTick\@ITickingSystem\@\@UEAAXAEAVEntityRegistry\@\@AEAVEntityContext\@\@\@Z
     */
    MCVAPI void singleTick(class EntityRegistry&, class EntityContext&);
#endif
};
