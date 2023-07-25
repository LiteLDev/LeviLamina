#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
class AutomaticID {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AUTOMATICID
public:
    AutomaticID& operator=(AutomaticID const&) = delete;
    AutomaticID(AutomaticID const&)            = delete;
    AutomaticID()                              = delete;
#endif

public:
};
