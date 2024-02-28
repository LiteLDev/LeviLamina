#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class buffer_span_mut {
public:
    T0* mBegin; // this+0x0
    T0* mEnd;   // this+0x8

    buffer_span_mut() = default;

    [[nodiscard]] inline size_t size() const { return mEnd - mBegin; }

    inline T0* begin() { return mBegin; }

    inline T0* end() { return mEnd; }

    inline T0& operator[](size_t index) { return mBegin[index]; }

    inline T0 const& operator[](size_t index) const { return mBegin[index]; }
};
