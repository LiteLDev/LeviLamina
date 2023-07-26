#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
class AutomaticID {

public:
    // prevent constructor by default
    AutomaticID& operator=(AutomaticID const&) = delete;
    AutomaticID(AutomaticID const&)            = delete;
    AutomaticID()                              = delete;
};
