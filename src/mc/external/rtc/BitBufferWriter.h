#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct BitBufferWriter {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI BitBufferWriter(uchar*, uint64);

    MCAPI bool ConsumeBits(uint64);

    MCAPI void GetCurrentOffset(uint64*, uint64*);

    MCAPI uint64 RemainingBitCount() const;

    MCAPI bool WriteBits(uint64, uint64);

    MCAPI bool WriteNonSymmetric(uint, uint);

    MCAPI bool WriteUInt16(ushort);

    MCAPI bool WriteUInt8(uchar);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static uint64 SizeNonSymmetricBits(uint, uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uchar*, uint64);
    // NOLINTEND
};

} // namespace rtc
