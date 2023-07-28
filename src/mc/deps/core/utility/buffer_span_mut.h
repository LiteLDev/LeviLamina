#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class buffer_span_mut {

public:
    T0* mBegin; // this+0x0
    T0* mEnd;   // this+0x8
    // prevent constructor by default
    buffer_span_mut& operator=(buffer_span_mut const&) = delete;
    buffer_span_mut(buffer_span_mut const&)            = delete;
    buffer_span_mut()                                  = delete;
};
