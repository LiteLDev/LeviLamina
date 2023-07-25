#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class SharedPtr {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAREDPTR
public:
    SharedPtr& operator=(SharedPtr const&) = delete;
    SharedPtr(SharedPtr const&)            = delete;
    SharedPtr()                            = delete;
#endif

public:
};
