#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class BitStream {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk2f223f;
    ::ll::UntypedStorage<4, 4>   mUnk9ced5a;
    ::ll::UntypedStorage<4, 4>   mUnkb3cc97;
    ::ll::UntypedStorage<8, 8>   mUnk87a405;
    ::ll::UntypedStorage<1, 1>   mUnkb9b8cd;
    ::ll::UntypedStorage<1, 256> mUnkb60a72;
    // NOLINTEND

public:
    // prevent constructor by default
    BitStream& operator=(BitStream const&);
    BitStream(BitStream const&);
    BitStream();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddBitsAndReallocate(uint numberOfBitsToWrite);

    MCAPI bool Read(char* outByteArray, uint numberOfBytes);

    MCAPI bool ReadAlignedBytes(uchar* inOutByteArray, uint numberOfBytesToRead);

    MCAPI bool ReadAlignedVar16(char* inOutByteArray);

    MCAPI bool ReadAlignedVar32(char* inOutByteArray);

    MCAPI bool ReadBits(uchar* inOutByteArray, uint numberOfBitsToRead, bool alignBitsToRight);

    MCAPI void Write(::RakNet::BitStream* bitStream, uint numberOfBits);

    MCAPI void Write(char const* inputByteArray, uint numberOfBytes);

    MCAPI void Write0();

    MCAPI void Write1();

    MCAPI void WriteAlignedBytes(uchar const* inByteArray, uint numberOfBytesToWrite);

    MCAPI void WriteAlignedVar16(char const* inByteArray);

    MCAPI void WriteAlignedVar32(char const* inByteArray);

    MCAPI void WriteBits(uchar const* inByteArray, uint numberOfBitsToWrite, bool rightAlignedBits);

    MCAPI ~BitStream();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace RakNet
