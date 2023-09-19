#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Details {

template <typename T0>
class ValueOrRef {
public:
    // prevent constructor by default
    ValueOrRef& operator=(ValueOrRef const&);
    ValueOrRef(ValueOrRef const&);
    ValueOrRef();
};

}; // namespace Details
