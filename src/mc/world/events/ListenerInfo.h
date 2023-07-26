#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ListenerInfo {

public:
    // prevent constructor by default
    ListenerInfo& operator=(ListenerInfo const&) = delete;
    ListenerInfo(ListenerInfo const&)            = delete;
    ListenerInfo()                               = delete;

    // private:

private:
    /**
     * @symbol ?SQRT_FLT_MAX\@ListenerInfo\@\@0MB
     */
    MCAPI static float const SQRT_FLT_MAX; // NOLINT
};
