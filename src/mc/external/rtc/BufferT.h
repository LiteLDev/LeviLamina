#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

template <typename T0, int T1>
class BufferT {
public:
    // prevent constructor by default
    BufferT& operator=(BufferT const&);
    BufferT(BufferT const&);
    BufferT();
};

} // namespace rtc
