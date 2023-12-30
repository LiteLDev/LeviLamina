#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class ByteBufferWriter {
public:
    // prevent constructor by default
    ByteBufferWriter& operator=(ByteBufferWriter const&);
    ByteBufferWriter(ByteBufferWriter const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ByteBufferWriter@rtc@@QEAA@XZ
    MCAPI ByteBufferWriter();

    // symbol: ??0ByteBufferWriter@rtc@@QEAA@PEBD_K@Z
    MCAPI ByteBufferWriter(char const*, uint64);

    // symbol: ??1ByteBufferWriter@rtc@@QEAA@XZ
    MCAPI ~ByteBufferWriter();

    // NOLINTEND
};

}; // namespace rtc
