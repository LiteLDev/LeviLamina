#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ListenerInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LISTENERINFO
public:
    ListenerInfo& operator=(ListenerInfo const&) = delete;
    ListenerInfo(ListenerInfo const&)            = delete;
    ListenerInfo()                               = delete;
#endif

public:
    // private:

private:
    /**
     * @symbol ?SQRT_FLT_MAX\@ListenerInfo\@\@0MB
     */
    MCAPI static float const SQRT_FLT_MAX;
};
