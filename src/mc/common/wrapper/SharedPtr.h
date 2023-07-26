#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class SharedPtr {

public:
    // prevent constructor by default
    SharedPtr& operator=(SharedPtr const&) = delete;
    SharedPtr(SharedPtr const&)            = delete;
    SharedPtr()                            = delete;
};
