#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class EnableGetWeakRef {
public:
    // prevent constructor by default
    EnableGetWeakRef& operator=(EnableGetWeakRef const&);
    EnableGetWeakRef(EnableGetWeakRef const&);
    EnableGetWeakRef();
};
