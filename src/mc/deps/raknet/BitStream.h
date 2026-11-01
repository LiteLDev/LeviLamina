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
    MCNAPI bool AddBitsAndReallocate(uint numberOfBitsToWrite);

    MCNAPI bool Read(char* outByteArray, uint numberOfBytes);

    MCNAPI bool ReadAlignedBytes(uchar* inOutByteArray, uint numberOfBytesToRead);

    MCNAPI bool ReadAlignedVar16(char* inOutByteArray);

    MCNAPI bool ReadAlignedVar32(char* inOutByteArray);

    MCNAPI bool ReadBits(uchar* inOutByteArray, uint numberOfBitsToRead, bool alignBitsToRight);

    MCNAPI void Write(::RakNet::BitStream* bitStream, uint numberOfBits);

    MCNAPI void Write(char const* inputByteArray, uint numberOfBytes);

    MCNAPI void WriteAlignedBytes(uchar const* inByteArray, uint numberOfBytesToWrite);

    MCNAPI void WriteAlignedVar16(char const* inByteArray);

    MCNAPI void WriteAlignedVar32(char const* inByteArray);

    MCNAPI void WriteBits(uchar const* inByteArray, uint numberOfBitsToWrite, bool rightAlignedBits);
    // NOLINTEND
};

} // namespace RakNet
