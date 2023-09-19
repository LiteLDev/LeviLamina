#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct referenced_ptr {
public:
    // prevent constructor by default
    referenced_ptr& operator=(referenced_ptr const&);
    referenced_ptr(referenced_ptr const&);
    referenced_ptr();
};
