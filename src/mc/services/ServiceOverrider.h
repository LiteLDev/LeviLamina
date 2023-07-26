#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class ServiceOverrider {

public:
    // prevent constructor by default
    ServiceOverrider& operator=(ServiceOverrider const&) = delete;
    ServiceOverrider(ServiceOverrider const&)            = delete;
    ServiceOverrider()                                   = delete;
};
