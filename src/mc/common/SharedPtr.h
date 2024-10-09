#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class SharedPtr {
public:
    // prevent constructor by default
    SharedPtr& operator=(SharedPtr const&);
    SharedPtr(SharedPtr const&);
    SharedPtr();
};
