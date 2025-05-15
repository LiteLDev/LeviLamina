#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct BitBufferWriter {
public:
    // prevent constructor by default
    BitBufferWriter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BitBufferWriter(uchar*, uint64);

    MCNAPI bool ConsumeBits(uint64);

    MCNAPI void GetCurrentOffset(uint64*, uint64*);

    MCNAPI uint64 RemainingBitCount() const;

    MCNAPI bool WriteBits(uint64, uint64);

    MCNAPI bool WriteNonSymmetric(uint, uint);

    MCNAPI bool WriteUInt16(ushort);

    MCNAPI bool WriteUInt8(uchar);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint64 SizeNonSymmetricBits(uint, uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uchar*, uint64);
    // NOLINTEND
};

} // namespace rtc
