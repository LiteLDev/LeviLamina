#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnInteractTrigger {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONINTERACTTRIGGER
public:
    OnInteractTrigger& operator=(OnInteractTrigger const&) = delete;
    OnInteractTrigger(OnInteractTrigger const&)            = delete;
    OnInteractTrigger()                                    = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONINTERACTTRIGGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OnInteractTrigger();
#endif
    /**
     * @symbol ??0OnInteractTrigger\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI OnInteractTrigger(class OnInteractTrigger&&);
};
