#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ISystem.h"

class ITickingSystem : public ::ISystem {

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
