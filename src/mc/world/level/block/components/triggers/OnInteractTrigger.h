#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnInteractTrigger {

public:
    // prevent constructor by default
    OnInteractTrigger& operator=(OnInteractTrigger const&) = delete;
    OnInteractTrigger(OnInteractTrigger const&)            = delete;
    OnInteractTrigger()                                    = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
