#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnStepOnTrigger {

public:
    // prevent constructor by default
    OnStepOnTrigger& operator=(OnStepOnTrigger const&) = delete;
    OnStepOnTrigger(OnStepOnTrigger const&)            = delete;
    OnStepOnTrigger()                                  = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONSTEPONTRIGGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OnStepOnTrigger(); // NOLINT
#endif
    /**
     * @symbol ??0OnStepOnTrigger\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI OnStepOnTrigger(class OnStepOnTrigger&&); // NOLINT
};
