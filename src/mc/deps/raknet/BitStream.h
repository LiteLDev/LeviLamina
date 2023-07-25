#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class BitStream {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_BITSTREAM
public:
    BitStream& operator=(BitStream const&) = delete;
    BitStream(BitStream const&)            = delete;
#endif

public:
    /**
     * @symbol ?AddBitsAndReallocate\@BitStream\@RakNet\@\@QEAAXI\@Z
     */
    MCAPI void AddBitsAndReallocate(unsigned int);
    /**
     * @symbol ??0BitStream\@RakNet\@\@QEAA\@XZ
     */
    MCAPI BitStream();
    /**
     * @symbol ??0BitStream\@RakNet\@\@QEAA\@PEAEI_N\@Z
     */
    MCAPI BitStream(unsigned char*, unsigned int, bool);
    /**
     * @symbol ??0BitStream\@RakNet\@\@QEAA\@I\@Z
     */
    MCAPI BitStream(unsigned int);
    /**
     * @symbol ?IgnoreBits\@BitStream\@RakNet\@\@QEAAXI\@Z
     */
    MCAPI void IgnoreBits(unsigned int);
    /**
     * @symbol ?IgnoreBytes\@BitStream\@RakNet\@\@QEAAXI\@Z
     */
    MCAPI void IgnoreBytes(unsigned int);
    /**
     * @symbol ?PadWithZeroToByteLength\@BitStream\@RakNet\@\@QEAAXI\@Z
     */
    MCAPI void PadWithZeroToByteLength(unsigned int);
    /**
     * @symbol ?Read\@BitStream\@RakNet\@\@QEAA_NPEADI\@Z
     */
    MCAPI bool Read(char*, unsigned int);
    /**
     * @symbol ?ReadAlignedBytes\@BitStream\@RakNet\@\@QEAA_NPEAEI\@Z
     */
    MCAPI bool ReadAlignedBytes(unsigned char*, unsigned int);
    /**
     * @symbol ?ReadAlignedVar16\@BitStream\@RakNet\@\@QEAA_NPEAD\@Z
     */
    MCAPI bool ReadAlignedVar16(char*);
    /**
     * @symbol ?ReadAlignedVar32\@BitStream\@RakNet\@\@QEAA_NPEAD\@Z
     */
    MCAPI bool ReadAlignedVar32(char*);
    /**
     * @symbol ?ReadAlignedVar8\@BitStream\@RakNet\@\@QEAA_NPEAD\@Z
     */
    MCAPI bool ReadAlignedVar8(char*);
    /**
     * @symbol ?ReadBits\@BitStream\@RakNet\@\@QEAA_NPEAEI_N\@Z
     */
    MCAPI bool ReadBits(unsigned char*, unsigned int, bool);
    /**
     * @symbol ?Reset\@BitStream\@RakNet\@\@QEAAXXZ
     */
    MCAPI void Reset();
    /**
     * @symbol ?ResetReadPointer\@BitStream\@RakNet\@\@QEAAXXZ
     */
    MCAPI void ResetReadPointer();
    /**
     * @symbol ?ResetWritePointer\@BitStream\@RakNet\@\@QEAAXXZ
     */
    MCAPI void ResetWritePointer();
    /**
     * @symbol ?SetWriteOffset\@BitStream\@RakNet\@\@QEAAXI\@Z
     */
    MCAPI void SetWriteOffset(unsigned int);
    /**
     * @symbol ?Write\@BitStream\@RakNet\@\@QEAAXPEAV12\@I\@Z
     */
    MCAPI void Write(class RakNet::BitStream*, unsigned int);
    /**
     * @symbol ?Write\@BitStream\@RakNet\@\@QEAAXPEBDI\@Z
     */
    MCAPI void Write(char const*, unsigned int);
    /**
     * @symbol ?Write\@BitStream\@RakNet\@\@QEAAXAEAV12\@I\@Z
     */
    MCAPI void Write(class RakNet::BitStream&, unsigned int);
    /**
     * @symbol ?Write0\@BitStream\@RakNet\@\@QEAAXXZ
     */
    MCAPI void Write0();
    /**
     * @symbol ?Write1\@BitStream\@RakNet\@\@QEAAXXZ
     */
    MCAPI void Write1();
    /**
     * @symbol ?WriteAlignedBytes\@BitStream\@RakNet\@\@QEAAXPEBEI\@Z
     */
    MCAPI void WriteAlignedBytes(unsigned char const*, unsigned int);
    /**
     * @symbol ?WriteAlignedVar16\@BitStream\@RakNet\@\@QEAAXPEBD\@Z
     */
    MCAPI void WriteAlignedVar16(char const*);
    /**
     * @symbol ?WriteAlignedVar32\@BitStream\@RakNet\@\@QEAAXPEBD\@Z
     */
    MCAPI void WriteAlignedVar32(char const*);
    /**
     * @symbol ?WriteAlignedVar8\@BitStream\@RakNet\@\@QEAAXPEBD\@Z
     */
    MCAPI void WriteAlignedVar8(char const*);
    /**
     * @symbol ?WriteBits\@BitStream\@RakNet\@\@QEAAXPEBEI_N\@Z
     */
    MCAPI void WriteBits(unsigned char const*, unsigned int, bool);
    /**
     * @symbol ??1BitStream\@RakNet\@\@QEAA\@XZ
     */
    MCAPI ~BitStream();
    /**
     * @symbol ?IsNetworkOrder\@BitStream\@RakNet\@\@SA_NXZ
     */
    MCAPI static bool IsNetworkOrder();
    /**
     * @symbol ?IsNetworkOrderInternal\@BitStream\@RakNet\@\@SA_NXZ
     */
    MCAPI static bool IsNetworkOrderInternal();
    /**
     * @symbol ?ReverseBytes\@BitStream\@RakNet\@\@SAXPEAE0I\@Z
     */
    MCAPI static void ReverseBytes(unsigned char*, unsigned char*, unsigned int);
};

}; // namespace RakNet
