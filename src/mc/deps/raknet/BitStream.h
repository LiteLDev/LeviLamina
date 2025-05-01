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
    MCNAPI void AddBitsAndReallocate(uint numberOfBitsToWrite);

    MCNAPI bool Read(char* outByteArray, uint numberOfBytes);

    MCNAPI bool ReadAlignedBytes(uchar* inOutByteArray, uint numberOfBytesToRead);

    MCNAPI bool ReadAlignedVar16(char* inOutByteArray);

    MCNAPI bool ReadAlignedVar32(char* inOutByteArray);

    MCNAPI bool ReadBits(uchar* inOutByteArray, uint numberOfBitsToRead, bool alignBitsToRight);

    MCNAPI void Write(::RakNet::BitStream* bitStream, uint numberOfBits);

    MCNAPI void Write(char const* inputByteArray, uint numberOfBytes);

    MCNAPI void Write0();

    MCNAPI void Write1();

    MCNAPI void WriteAlignedBytes(uchar const* inByteArray, uint numberOfBytesToWrite);

    MCNAPI void WriteAlignedVar16(char const* inByteArray);

    MCNAPI void WriteAlignedVar32(char const* inByteArray);

    MCNAPI void WriteBits(uchar const* inByteArray, uint numberOfBitsToWrite, bool rightAlignedBits);

    MCNAPI ~BitStream();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace RakNet
