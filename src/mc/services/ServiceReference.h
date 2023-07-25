#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class ServiceReference {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVICEREFERENCE
public:
    ServiceReference& operator=(ServiceReference const&) = delete;
    ServiceReference(ServiceReference const&)            = delete;
    ServiceReference()                                   = delete;
#endif

public:
};
