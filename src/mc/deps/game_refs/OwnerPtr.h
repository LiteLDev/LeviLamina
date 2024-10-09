#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class OwnerPtr {
public:
    // prevent constructor by default
    OwnerPtr& operator=(OwnerPtr const&);
    OwnerPtr(OwnerPtr const&);
    OwnerPtr();
};
