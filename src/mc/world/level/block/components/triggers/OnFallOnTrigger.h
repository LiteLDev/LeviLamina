#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnFallOnTrigger {

public:
    // prevent constructor by default
    OnFallOnTrigger& operator=(OnFallOnTrigger const&) = delete;
    OnFallOnTrigger(OnFallOnTrigger const&)            = delete;
    OnFallOnTrigger()                                  = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONFALLONTRIGGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OnFallOnTrigger(); // NOLINT
#endif
    /**
     * @symbol ??0OnFallOnTrigger\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI OnFallOnTrigger(class OnFallOnTrigger&&); // NOLINT
};
