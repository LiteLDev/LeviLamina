#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class ServiceOverrider {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVICEOVERRIDER
public:
    ServiceOverrider& operator=(ServiceOverrider const&) = delete;
    ServiceOverrider(ServiceOverrider const&)            = delete;
    ServiceOverrider()                                   = delete;
#endif

public:
};
