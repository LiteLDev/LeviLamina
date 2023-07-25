#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EcsEventDispatcher {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ECSEVENTDISPATCHER
public:
    EcsEventDispatcher& operator=(EcsEventDispatcher const&) = delete;
    EcsEventDispatcher(EcsEventDispatcher const&)            = delete;
    EcsEventDispatcher()                                     = delete;
#endif

public:
    /**
     * @symbol ?update\@EcsEventDispatcher\@\@QEAAXXZ
     */
    MCAPI void update();
};
