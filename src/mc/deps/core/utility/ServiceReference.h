#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class ServiceReference {
public:
    // prevent constructor by default
    ServiceReference& operator=(ServiceReference const&);
    ServiceReference(ServiceReference const&);
    ServiceReference();
};
