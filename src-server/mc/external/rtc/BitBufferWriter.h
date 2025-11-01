#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class BitBufferWriter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3c6073;
    ::ll::UntypedStorage<8, 8> mUnk1b2a4b;
    ::ll::UntypedStorage<8, 8> mUnke9b179;
    ::ll::UntypedStorage<8, 8> mUnkc7ce4c;
    // NOLINTEND

public:
    // prevent constructor by default
    BitBufferWriter& operator=(BitBufferWriter const&);
    BitBufferWriter(BitBufferWriter const&);
    BitBufferWriter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BitBufferWriter(uchar* bytes, uint64 byte_count);

    MCNAPI bool ConsumeBits(uint64 bit_count);

    MCNAPI void GetCurrentOffset(uint64* out_byte_offset, uint64* out_bit_offset);

    MCNAPI uint64 RemainingBitCount() const;

    MCNAPI bool WriteBits(uint64 val, uint64 bit_count);

    MCNAPI bool WriteNonSymmetric(uint val, uint num_values);

    MCNAPI bool WriteUInt16(ushort val);

    MCNAPI bool WriteUInt8(uchar val);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint64 SizeNonSymmetricBits(uint val, uint num_values);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uchar* bytes, uint64 byte_count);
    // NOLINTEND

};

}
