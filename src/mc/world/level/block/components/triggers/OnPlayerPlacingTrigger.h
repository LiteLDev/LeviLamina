#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnPlayerPlacingTrigger {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONPLAYERPLACINGTRIGGER
public:
    OnPlayerPlacingTrigger& operator=(OnPlayerPlacingTrigger const&) = delete;
    OnPlayerPlacingTrigger(OnPlayerPlacingTrigger const&)            = delete;
    OnPlayerPlacingTrigger()                                         = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONPLAYERPLACINGTRIGGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OnPlayerPlacingTrigger();
#endif
    /**
     * @symbol ??0OnPlayerPlacingTrigger\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI OnPlayerPlacingTrigger(class OnPlayerPlacingTrigger&&);
};
