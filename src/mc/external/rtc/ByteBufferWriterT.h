#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

template <typename T0>
class ByteBufferWriterT {
public:
    // prevent constructor by default
    ByteBufferWriterT& operator=(ByteBufferWriterT const&);
    ByteBufferWriterT(ByteBufferWriterT const&);
    ByteBufferWriterT();
};

} // namespace rtc
