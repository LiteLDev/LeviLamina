#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"

class BinaryStream : public ::ReadOnlyBinaryStream {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BINARYSTREAM
public:
    BinaryStream& operator=(BinaryStream const&) = delete;
    BinaryStream(BinaryStream const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BINARYSTREAM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BinaryStream();
#endif
    /**
     * @symbol ??0BinaryStream\@\@QEAA\@XZ
     */
    MCAPI BinaryStream();
    /**
     * @symbol
     * ??0BinaryStream\@\@QEAA\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI BinaryStream(std::string&, bool);
    /**
     * @symbol
     * ?getAndReleaseData\@BinaryStream\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getAndReleaseData();
    /**
     * @symbol ?reset\@BinaryStream\@\@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @symbol ?writeBool\@BinaryStream\@\@QEAAX_N\@Z
     */
    MCAPI void writeBool(bool);
    /**
     * @symbol ?writeByte\@BinaryStream\@\@QEAAXE\@Z
     */
    MCAPI void writeByte(unsigned char);
    /**
     * @symbol ?writeDouble\@BinaryStream\@\@QEAAXN\@Z
     */
    MCAPI void writeDouble(double);
    /**
     * @symbol ?writeFloat\@BinaryStream\@\@QEAAXM\@Z
     */
    MCAPI void writeFloat(float);
    /**
     * @symbol ?writeSignedBigEndianInt\@BinaryStream\@\@QEAAXH\@Z
     */
    MCAPI void writeSignedBigEndianInt(int);
    /**
     * @symbol ?writeSignedInt\@BinaryStream\@\@QEAAXH\@Z
     */
    MCAPI void writeSignedInt(int);
    /**
     * @symbol ?writeSignedInt64\@BinaryStream\@\@QEAAX_J\@Z
     */
    MCAPI void writeSignedInt64(__int64);
    /**
     * @symbol ?writeSignedShort\@BinaryStream\@\@QEAAXF\@Z
     */
    MCAPI void writeSignedShort(short);
    /**
     * @symbol ?writeString\@BinaryStream\@\@QEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI void writeString(class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @symbol ?writeUnsignedChar\@BinaryStream\@\@QEAAXE\@Z
     */
    MCAPI void writeUnsignedChar(unsigned char);
    /**
     * @symbol ?writeUnsignedInt\@BinaryStream\@\@QEAAXI\@Z
     */
    MCAPI void writeUnsignedInt(unsigned int);
    /**
     * @symbol ?writeUnsignedInt64\@BinaryStream\@\@QEAAX_K\@Z
     */
    MCAPI void writeUnsignedInt64(unsigned __int64);
    /**
     * @symbol ?writeUnsignedShort\@BinaryStream\@\@QEAAXG\@Z
     */
    MCAPI void writeUnsignedShort(unsigned short);
    /**
     * @symbol ?writeUnsignedVarInt\@BinaryStream\@\@QEAAXI\@Z
     */
    MCAPI void writeUnsignedVarInt(unsigned int);
    /**
     * @symbol ?writeUnsignedVarInt64\@BinaryStream\@\@QEAAX_K\@Z
     */
    MCAPI void writeUnsignedVarInt64(unsigned __int64);
    /**
     * @symbol ?writeVarInt\@BinaryStream\@\@QEAAXH\@Z
     */
    MCAPI void writeVarInt(int);
    /**
     * @symbol ?writeVarInt64\@BinaryStream\@\@QEAAX_J\@Z
     */
    MCAPI void writeVarInt64(__int64);

    // private:
    /**
     * @symbol ?write\@BinaryStream\@\@AEAAXPEBX_K\@Z
     */
    MCAPI void write(void const*, unsigned __int64);

private:
};
