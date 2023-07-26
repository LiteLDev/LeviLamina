#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SavedData {

public:
    // prevent constructor by default
    SavedData& operator=(SavedData const&) = delete;
    SavedData(SavedData const&)            = delete;
    SavedData()                            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SAVEDDATA
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SavedData(); // NOLINT
#endif
};
