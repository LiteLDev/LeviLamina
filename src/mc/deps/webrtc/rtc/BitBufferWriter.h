#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class BitBufferWriter {
public:
    // prevent constructor by default
    BitBufferWriter& operator=(BitBufferWriter const&);
    BitBufferWriter(BitBufferWriter const&);
    BitBufferWriter();

public:
    // NOLINTBEGIN
    // symbol: ??0BitBufferWriter@rtc@@QEAA@PEAE_K@Z
    MCAPI BitBufferWriter(uchar*, uint64);

    // symbol: ?ConsumeBits@BitBufferWriter@rtc@@QEAA_N_K@Z
    MCAPI bool ConsumeBits(uint64);

    // symbol: ?GetCurrentOffset@BitBufferWriter@rtc@@QEAAXPEA_K0@Z
    MCAPI void GetCurrentOffset(uint64*, uint64*);

    // symbol: ?RemainingBitCount@BitBufferWriter@rtc@@QEBA_KXZ
    MCAPI uint64 RemainingBitCount() const;

    // symbol: ?WriteBits@BitBufferWriter@rtc@@QEAA_N_K0@Z
    MCAPI bool WriteBits(uint64, uint64);

    // symbol: ?WriteNonSymmetric@BitBufferWriter@rtc@@QEAA_NII@Z
    MCAPI bool WriteNonSymmetric(uint, uint);

    // symbol: ?WriteUInt16@BitBufferWriter@rtc@@QEAA_NG@Z
    MCAPI bool WriteUInt16(ushort);

    // symbol: ?WriteUInt8@BitBufferWriter@rtc@@QEAA_NE@Z
    MCAPI bool WriteUInt8(uchar);

    // symbol: ?SizeNonSymmetricBits@BitBufferWriter@rtc@@SA_KII@Z
    MCAPI static uint64 SizeNonSymmetricBits(uint, uint);

    // NOLINTEND
};

}; // namespace rtc
