#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class BitStream {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>         numberOfBitsUsed;
    ::ll::TypedStorage<4, 4, uint>         numberOfBitsAllocated;
    ::ll::TypedStorage<4, 4, uint>         readOffset;
    ::ll::TypedStorage<8, 8, uchar*>       data;
    ::ll::TypedStorage<1, 1, bool>         copyData;
    ::ll::TypedStorage<1, 256, uchar[256]> stackData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool AddBitsAndReallocate(uint numberOfBitsToWrite);

    MCAPI bool Read(char* outByteArray, uint numberOfBytes);

    MCAPI bool ReadAlignedBytes(uchar* inOutByteArray, uint numberOfBytesToRead);

    MCAPI bool ReadAlignedVar16(char* inOutByteArray);

    MCAPI bool ReadAlignedVar32(char* inOutByteArray);

    MCAPI bool ReadBits(uchar* inOutByteArray, uint numberOfBitsToRead, bool alignBitsToRight);

    MCAPI void Write(::RakNet::BitStream* bitStream, uint numberOfBits);

    MCAPI void Write(char const* inputByteArray, uint numberOfBytes);

    MCAPI void WriteAlignedBytes(uchar const* inByteArray, uint numberOfBytesToWrite);

    MCAPI void WriteAlignedVar16(char const* inByteArray);

    MCAPI void WriteAlignedVar32(char const* inByteArray);

    MCAPI void WriteBits(uchar const* inByteArray, uint numberOfBitsToWrite, bool rightAlignedBits);
    // NOLINTEND
};

} // namespace RakNet
