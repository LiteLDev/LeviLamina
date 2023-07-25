#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SavedData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAVEDDATA
public:
    SavedData& operator=(SavedData const&) = delete;
    SavedData(SavedData const&)            = delete;
    SavedData()                            = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SAVEDDATA
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SavedData();
#endif
};
