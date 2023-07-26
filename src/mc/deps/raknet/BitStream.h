#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class BitStream {

public:
    // prevent constructor by default
    BitStream& operator=(BitStream const&) = delete;
    BitStream(BitStream const&)            = delete;

public:
    /**
     * @symbol ?AddBitsAndReallocate\@BitStream\@RakNet\@\@QEAAXI\@Z
     */
    MCAPI void AddBitsAndReallocate(unsigned int); // NOLINT
    /**
     * @symbol ??0BitStream\@RakNet\@\@QEAA\@XZ
     */
    MCAPI BitStream(); // NOLINT
    /**
     * @symbol ??0BitStream\@RakNet\@\@QEAA\@PEAEI_N\@Z
     */
    MCAPI BitStream(unsigned char*, unsigned int, bool); // NOLINT
    /**
     * @symbol ??0BitStream\@RakNet\@\@QEAA\@I\@Z
     */
    MCAPI BitStream(unsigned int); // NOLINT
    /**
     * @symbol ?IgnoreBits\@BitStream\@RakNet\@\@QEAAXI\@Z
     */
    MCAPI void IgnoreBits(unsigned int); // NOLINT
    /**
     * @symbol ?IgnoreBytes\@BitStream\@RakNet\@\@QEAAXI\@Z
     */
    MCAPI void IgnoreBytes(unsigned int); // NOLINT
    /**
     * @symbol ?PadWithZeroToByteLength\@BitStream\@RakNet\@\@QEAAXI\@Z
     */
    MCAPI void PadWithZeroToByteLength(unsigned int); // NOLINT
    /**
     * @symbol ?Read\@BitStream\@RakNet\@\@QEAA_NPEADI\@Z
     */
    MCAPI bool Read(char*, unsigned int); // NOLINT
    /**
     * @symbol ?ReadAlignedBytes\@BitStream\@RakNet\@\@QEAA_NPEAEI\@Z
     */
    MCAPI bool ReadAlignedBytes(unsigned char*, unsigned int); // NOLINT
    /**
     * @symbol ?ReadAlignedVar16\@BitStream\@RakNet\@\@QEAA_NPEAD\@Z
     */
    MCAPI bool ReadAlignedVar16(char*); // NOLINT
    /**
     * @symbol ?ReadAlignedVar32\@BitStream\@RakNet\@\@QEAA_NPEAD\@Z
     */
    MCAPI bool ReadAlignedVar32(char*); // NOLINT
    /**
     * @symbol ?ReadAlignedVar8\@BitStream\@RakNet\@\@QEAA_NPEAD\@Z
     */
    MCAPI bool ReadAlignedVar8(char*); // NOLINT
    /**
     * @symbol ?ReadBits\@BitStream\@RakNet\@\@QEAA_NPEAEI_N\@Z
     */
    MCAPI bool ReadBits(unsigned char*, unsigned int, bool); // NOLINT
    /**
     * @symbol ?Reset\@BitStream\@RakNet\@\@QEAAXXZ
     */
    MCAPI void Reset(); // NOLINT
    /**
     * @symbol ?ResetReadPointer\@BitStream\@RakNet\@\@QEAAXXZ
     */
    MCAPI void ResetReadPointer(); // NOLINT
    /**
     * @symbol ?ResetWritePointer\@BitStream\@RakNet\@\@QEAAXXZ
     */
    MCAPI void ResetWritePointer(); // NOLINT
    /**
     * @symbol ?SetWriteOffset\@BitStream\@RakNet\@\@QEAAXI\@Z
     */
    MCAPI void SetWriteOffset(unsigned int); // NOLINT
    /**
     * @symbol ?Write\@BitStream\@RakNet\@\@QEAAXPEAV12\@I\@Z
     */
    MCAPI void Write(class RakNet::BitStream*, unsigned int); // NOLINT
    /**
     * @symbol ?Write\@BitStream\@RakNet\@\@QEAAXPEBDI\@Z
     */
    MCAPI void Write(char const*, unsigned int); // NOLINT
    /**
     * @symbol ?Write\@BitStream\@RakNet\@\@QEAAXAEAV12\@I\@Z
     */
    MCAPI void Write(class RakNet::BitStream&, unsigned int); // NOLINT
    /**
     * @symbol ?Write0\@BitStream\@RakNet\@\@QEAAXXZ
     */
    MCAPI void Write0(); // NOLINT
    /**
     * @symbol ?Write1\@BitStream\@RakNet\@\@QEAAXXZ
     */
    MCAPI void Write1(); // NOLINT
    /**
     * @symbol ?WriteAlignedBytes\@BitStream\@RakNet\@\@QEAAXPEBEI\@Z
     */
    MCAPI void WriteAlignedBytes(unsigned char const*, unsigned int); // NOLINT
    /**
     * @symbol ?WriteAlignedVar16\@BitStream\@RakNet\@\@QEAAXPEBD\@Z
     */
    MCAPI void WriteAlignedVar16(char const*); // NOLINT
    /**
     * @symbol ?WriteAlignedVar32\@BitStream\@RakNet\@\@QEAAXPEBD\@Z
     */
    MCAPI void WriteAlignedVar32(char const*); // NOLINT
    /**
     * @symbol ?WriteAlignedVar8\@BitStream\@RakNet\@\@QEAAXPEBD\@Z
     */
    MCAPI void WriteAlignedVar8(char const*); // NOLINT
    /**
     * @symbol ?WriteBits\@BitStream\@RakNet\@\@QEAAXPEBEI_N\@Z
     */
    MCAPI void WriteBits(unsigned char const*, unsigned int, bool); // NOLINT
    /**
     * @symbol ??1BitStream\@RakNet\@\@QEAA\@XZ
     */
    MCAPI ~BitStream(); // NOLINT
    /**
     * @symbol ?IsNetworkOrder\@BitStream\@RakNet\@\@SA_NXZ
     */
    MCAPI static bool IsNetworkOrder(); // NOLINT
    /**
     * @symbol ?IsNetworkOrderInternal\@BitStream\@RakNet\@\@SA_NXZ
     */
    MCAPI static bool IsNetworkOrderInternal(); // NOLINT
    /**
     * @symbol ?ReverseBytes\@BitStream\@RakNet\@\@SAXPEAE0I\@Z
     */
    MCAPI static void ReverseBytes(unsigned char*, unsigned char*, unsigned int); // NOLINT
};

}; // namespace RakNet
