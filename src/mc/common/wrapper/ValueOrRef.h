#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Details {

template <typename T0>
class ValueOrRef {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DETAILS_VALUEORREF
public:
    ValueOrRef& operator=(ValueOrRef const&) = delete;
    ValueOrRef(ValueOrRef const&)            = delete;
    ValueOrRef()                             = delete;
#endif

public:
};

}; // namespace Details
