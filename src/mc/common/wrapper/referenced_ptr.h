#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct referenced_ptr {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REFERENCED_PTR
public:
    referenced_ptr& operator=(referenced_ptr const&) = delete;
    referenced_ptr(referenced_ptr const&)            = delete;
    referenced_ptr()                                 = delete;
#endif

public:
};
