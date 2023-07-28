#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class buffer_span {

public:
    T0 const* mBegin; // this+0x0
    T0 const* mEnd;   // this+0x8
    // prevent constructor by default
    buffer_span& operator=(buffer_span const&) = delete;
    buffer_span(buffer_span const&)            = delete;
    buffer_span()                              = delete;
};
