#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnPlacedTrigger {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONPLACEDTRIGGER
public:
    OnPlacedTrigger& operator=(OnPlacedTrigger const&) = delete;
    OnPlacedTrigger(OnPlacedTrigger const&)            = delete;
    OnPlacedTrigger()                                  = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONPLACEDTRIGGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OnPlacedTrigger();
#endif
    /**
     * @symbol ??0OnPlacedTrigger\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI OnPlacedTrigger(class OnPlacedTrigger&&);
};
