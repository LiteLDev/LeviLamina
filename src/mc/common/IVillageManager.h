#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IVillageManager {

public:
    // prevent constructor by default
    IVillageManager& operator=(IVillageManager const&) = delete;
    IVillageManager(IVillageManager const&)            = delete;
    IVillageManager()                                  = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IVILLAGEMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IVillageManager();
#endif
    // NOLINTEND
};
