#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class buffer_span_mut {
public:
    T0* mBegin; // this+0x0
    T0* mEnd;   // this+0x8

    buffer_span_mut() = default;
};
