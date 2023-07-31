#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnPlayerDestroyedTrigger {

public:
    // prevent constructor by default
    OnPlayerDestroyedTrigger& operator=(OnPlayerDestroyedTrigger const&) = delete;
    OnPlayerDestroyedTrigger(OnPlayerDestroyedTrigger const&)            = delete;
    OnPlayerDestroyedTrigger()                                           = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONPLAYERDESTROYEDTRIGGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OnPlayerDestroyedTrigger();
#endif
    /**
     * @symbol ??0OnPlayerDestroyedTrigger\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI OnPlayerDestroyedTrigger(class OnPlayerDestroyedTrigger&&);
    // NOLINTEND
};
