#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/services/ServiceReference.h"

template <typename T>
class ServiceLocator {
public:
    static MCAPI ServiceReference<T> get();
};
