#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnPlacedTrigger {

public:
    // prevent constructor by default
    OnPlacedTrigger& operator=(OnPlacedTrigger const&) = delete;
    OnPlacedTrigger(OnPlacedTrigger const&)            = delete;
    OnPlacedTrigger()                                  = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONPLACEDTRIGGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OnPlacedTrigger(); // NOLINT
#endif
    /**
     * @symbol ??0OnPlacedTrigger\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI OnPlacedTrigger(class OnPlacedTrigger&&); // NOLINT
};
