#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class BitStream {
public:
    // prevent constructor by default
    BitStream& operator=(BitStream const&);
    BitStream(BitStream const&);

public:
    // NOLINTBEGIN
    MCAPI void AddBitsAndReallocate(uint numberOfBitsToWrite);

    MCAPI BitStream();

    MCAPI explicit BitStream(uint initialBytesToAllocate);

    MCAPI BitStream(uchar* _data, uint lengthInBytes, bool _copyData);

    MCAPI void IgnoreBits(uint numberOfBits);

    MCAPI void IgnoreBytes(uint numberOfBytes);

    MCAPI void PadWithZeroToByteLength(uint bytes);

    MCAPI bool Read(char* outByteArray, uint numberOfBytes);

    MCAPI bool ReadAlignedBytes(uchar* inOutByteArray, uint numberOfBytesToRead);

    MCAPI bool ReadAlignedVar16(char* inOutByteArray);

    MCAPI bool ReadAlignedVar32(char* inOutByteArray);

    MCAPI bool ReadAlignedVar8(char* inOutByteArray);

    MCAPI bool ReadBits(uchar* inOutByteArray, uint numberOfBitsToRead, bool alignBitsToRight);

    MCAPI void Reset();

    MCAPI void ResetReadPointer();

    MCAPI void ResetWritePointer();

    MCAPI void SetWriteOffset(uint offset);

    MCAPI void Write(char const* inputByteArray, uint numberOfBytes);

    MCAPI void Write(class RakNet::BitStream& bitStream, uint numberOfBits);

    MCAPI void Write(class RakNet::BitStream* bitStream, uint numberOfBits);

    MCAPI void Write0();

    MCAPI void Write1();

    MCAPI void WriteAlignedBytes(uchar const* inByteArray, uint numberOfBytesToWrite);

    MCAPI void WriteAlignedVar16(char const* inByteArray);

    MCAPI void WriteAlignedVar32(char const* inByteArray);

    MCAPI void WriteAlignedVar8(char const* inByteArray);

    MCAPI void WriteBits(uchar const* inByteArray, uint numberOfBitsToWrite, bool rightAlignedBits);

    MCAPI ~BitStream();

    MCAPI static bool IsNetworkOrder();

    MCAPI static bool IsNetworkOrderInternal();

    MCAPI static void ReverseBytes(uchar* inByteArray, uchar* inOutByteArray, uint length);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(uint initialBytesToAllocate);

    MCAPI void* ctor$(uchar* _data, uint lengthInBytes, bool _copyData);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace RakNet
