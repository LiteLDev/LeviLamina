#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnStepOffTrigger {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONSTEPOFFTRIGGER
public:
    OnStepOffTrigger& operator=(OnStepOffTrigger const&) = delete;
    OnStepOffTrigger(OnStepOffTrigger const&)            = delete;
    OnStepOffTrigger()                                   = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONSTEPOFFTRIGGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OnStepOffTrigger();
#endif
    /**
     * @symbol ??0OnStepOffTrigger\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI OnStepOffTrigger(class OnStepOffTrigger&&);
};
