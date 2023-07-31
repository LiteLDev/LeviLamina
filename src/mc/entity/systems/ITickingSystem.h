#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITickingSystem {

public:
    // prevent constructor by default
    ITickingSystem& operator=(ITickingSystem const&) = delete;
    ITickingSystem(ITickingSystem const&)            = delete;
    ITickingSystem()                                 = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITICKINGSYSTEM
    /**
     * @symbol ?singleTick\@ITickingSystem\@\@UEAAXAEAVEntityRegistry\@\@AEAVEntityContext\@\@\@Z
     */
    MCVAPI void singleTick(class EntityRegistry&, class EntityContext&);
#endif
    // NOLINTEND
};
