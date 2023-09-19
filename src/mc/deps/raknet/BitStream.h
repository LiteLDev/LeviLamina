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
    // symbol: ?AddBitsAndReallocate@BitStream@RakNet@@QEAAXI@Z
    MCAPI void AddBitsAndReallocate(uint);

    // symbol: ??0BitStream@RakNet@@QEAA@XZ
    MCAPI BitStream();

    // symbol: ??0BitStream@RakNet@@QEAA@PEAEI_N@Z
    MCAPI BitStream(uchar*, uint, bool);

    // symbol: ??0BitStream@RakNet@@QEAA@I@Z
    MCAPI explicit BitStream(uint);

    // symbol: ?IgnoreBits@BitStream@RakNet@@QEAAXI@Z
    MCAPI void IgnoreBits(uint);

    // symbol: ?IgnoreBytes@BitStream@RakNet@@QEAAXI@Z
    MCAPI void IgnoreBytes(uint);

    // symbol: ?PadWithZeroToByteLength@BitStream@RakNet@@QEAAXI@Z
    MCAPI void PadWithZeroToByteLength(uint);

    // symbol: ?Read@BitStream@RakNet@@QEAA_NPEADI@Z
    MCAPI bool Read(char*, uint);

    // symbol: ?ReadAlignedBytes@BitStream@RakNet@@QEAA_NPEAEI@Z
    MCAPI bool ReadAlignedBytes(uchar*, uint);

    // symbol: ?ReadAlignedVar16@BitStream@RakNet@@QEAA_NPEAD@Z
    MCAPI bool ReadAlignedVar16(char*);

    // symbol: ?ReadAlignedVar32@BitStream@RakNet@@QEAA_NPEAD@Z
    MCAPI bool ReadAlignedVar32(char*);

    // symbol: ?ReadAlignedVar8@BitStream@RakNet@@QEAA_NPEAD@Z
    MCAPI bool ReadAlignedVar8(char*);

    // symbol: ?ReadBits@BitStream@RakNet@@QEAA_NPEAEI_N@Z
    MCAPI bool ReadBits(uchar*, uint, bool);

    // symbol: ?Reset@BitStream@RakNet@@QEAAXXZ
    MCAPI void Reset();

    // symbol: ?ResetReadPointer@BitStream@RakNet@@QEAAXXZ
    MCAPI void ResetReadPointer();

    // symbol: ?ResetWritePointer@BitStream@RakNet@@QEAAXXZ
    MCAPI void ResetWritePointer();

    // symbol: ?SetWriteOffset@BitStream@RakNet@@QEAAXI@Z
    MCAPI void SetWriteOffset(uint);

    // symbol: ?Write@BitStream@RakNet@@QEAAXPEAV12@I@Z
    MCAPI void Write(class RakNet::BitStream*, uint);

    // symbol: ?Write@BitStream@RakNet@@QEAAXPEBDI@Z
    MCAPI void Write(char const*, uint);

    // symbol: ?Write@BitStream@RakNet@@QEAAXAEAV12@I@Z
    MCAPI void Write(class RakNet::BitStream&, uint);

    // symbol: ?Write0@BitStream@RakNet@@QEAAXXZ
    MCAPI void Write0();

    // symbol: ?Write1@BitStream@RakNet@@QEAAXXZ
    MCAPI void Write1();

    // symbol: ?WriteAlignedBytes@BitStream@RakNet@@QEAAXPEBEI@Z
    MCAPI void WriteAlignedBytes(uchar const*, uint);

    // symbol: ?WriteAlignedVar16@BitStream@RakNet@@QEAAXPEBD@Z
    MCAPI void WriteAlignedVar16(char const*);

    // symbol: ?WriteAlignedVar32@BitStream@RakNet@@QEAAXPEBD@Z
    MCAPI void WriteAlignedVar32(char const*);

    // symbol: ?WriteAlignedVar8@BitStream@RakNet@@QEAAXPEBD@Z
    MCAPI void WriteAlignedVar8(char const*);

    // symbol: ?WriteBits@BitStream@RakNet@@QEAAXPEBEI_N@Z
    MCAPI void WriteBits(uchar const*, uint, bool);

    // symbol: ??1BitStream@RakNet@@QEAA@XZ
    MCAPI ~BitStream();

    // symbol: ?IsNetworkOrder@BitStream@RakNet@@SA_NXZ
    MCAPI static bool IsNetworkOrder();

    // symbol: ?IsNetworkOrderInternal@BitStream@RakNet@@SA_NXZ
    MCAPI static bool IsNetworkOrderInternal();

    // symbol: ?ReverseBytes@BitStream@RakNet@@SAXPEAE0I@Z
    MCAPI static void ReverseBytes(uchar*, uchar*, uint);

    // NOLINTEND
};

}; // namespace RakNet
