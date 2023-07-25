#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IVillageManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IVILLAGEMANAGER
public:
    IVillageManager& operator=(IVillageManager const&) = delete;
    IVillageManager(IVillageManager const&)            = delete;
    IVillageManager()                                  = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IVILLAGEMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IVillageManager();
#endif
};
