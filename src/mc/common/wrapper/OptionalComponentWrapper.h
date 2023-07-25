#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
class OptionalComponentWrapper {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPTIONALCOMPONENTWRAPPER
public:
    OptionalComponentWrapper& operator=(OptionalComponentWrapper const&) = delete;
    OptionalComponentWrapper(OptionalComponentWrapper const&)            = delete;
    OptionalComponentWrapper()                                           = delete;
#endif

public:
};
