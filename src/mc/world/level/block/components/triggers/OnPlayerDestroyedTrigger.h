#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnPlayerDestroyedTrigger {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONPLAYERDESTROYEDTRIGGER
public:
    OnPlayerDestroyedTrigger& operator=(OnPlayerDestroyedTrigger const&) = delete;
    OnPlayerDestroyedTrigger(OnPlayerDestroyedTrigger const&)            = delete;
    OnPlayerDestroyedTrigger()                                           = delete;
#endif

public:
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
};
