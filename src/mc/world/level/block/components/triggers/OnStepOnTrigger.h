#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnStepOnTrigger {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONSTEPONTRIGGER
public:
    OnStepOnTrigger& operator=(OnStepOnTrigger const&) = delete;
    OnStepOnTrigger(OnStepOnTrigger const&)            = delete;
    OnStepOnTrigger()                                  = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONSTEPONTRIGGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OnStepOnTrigger();
#endif
    /**
     * @symbol ??0OnStepOnTrigger\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI OnStepOnTrigger(class OnStepOnTrigger&&);
};
