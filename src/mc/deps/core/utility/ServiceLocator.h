#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/ServiceReference.h"

template <typename T>
class ServiceLocator {
public:
    static MCAPI ServiceReference<T> get();
};
