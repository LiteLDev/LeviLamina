#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnFallOnTrigger {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONFALLONTRIGGER
public:
    OnFallOnTrigger& operator=(OnFallOnTrigger const&) = delete;
    OnFallOnTrigger(OnFallOnTrigger const&)            = delete;
    OnFallOnTrigger()                                  = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONFALLONTRIGGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OnFallOnTrigger();
#endif
    /**
     * @symbol ??0OnFallOnTrigger\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI OnFallOnTrigger(class OnFallOnTrigger&&);
};
