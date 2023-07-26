#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnPlayerPlacingTrigger {

public:
    // prevent constructor by default
    OnPlayerPlacingTrigger& operator=(OnPlayerPlacingTrigger const&) = delete;
    OnPlayerPlacingTrigger(OnPlayerPlacingTrigger const&)            = delete;
    OnPlayerPlacingTrigger()                                         = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONPLAYERPLACINGTRIGGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OnPlayerPlacingTrigger(); // NOLINT
#endif
    /**
     * @symbol ??0OnPlayerPlacingTrigger\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI OnPlayerPlacingTrigger(class OnPlayerPlacingTrigger&&); // NOLINT
};
