#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"

class BinaryStream : public ::ReadOnlyBinaryStream {

public:
    // prevent constructor by default
    BinaryStream& operator=(BinaryStream const&) = delete;
    BinaryStream(BinaryStream const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BINARYSTREAM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BinaryStream(); // NOLINT
#endif
    /**
     * @symbol ??0BinaryStream\@\@QEAA\@XZ
     */
    MCAPI BinaryStream(); // NOLINT
    /**
     * @symbol
     * ??0BinaryStream\@\@QEAA\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI BinaryStream(std::string&, bool); // NOLINT
    /**
     * @symbol
     * ?getAndReleaseData\@BinaryStream\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getAndReleaseData(); // NOLINT
    /**
     * @symbol ?reset\@BinaryStream\@\@QEAAXXZ
     */
    MCAPI void reset(); // NOLINT
    /**
     * @symbol ?writeBool\@BinaryStream\@\@QEAAX_N\@Z
     */
    MCAPI void writeBool(bool); // NOLINT
    /**
     * @symbol ?writeByte\@BinaryStream\@\@QEAAXE\@Z
     */
    MCAPI void writeByte(unsigned char); // NOLINT
    /**
     * @symbol ?writeDouble\@BinaryStream\@\@QEAAXN\@Z
     */
    MCAPI void writeDouble(double); // NOLINT
    /**
     * @symbol ?writeFloat\@BinaryStream\@\@QEAAXM\@Z
     */
    MCAPI void writeFloat(float); // NOLINT
    /**
     * @symbol ?writeSignedBigEndianInt\@BinaryStream\@\@QEAAXH\@Z
     */
    MCAPI void writeSignedBigEndianInt(int); // NOLINT
    /**
     * @symbol ?writeSignedInt\@BinaryStream\@\@QEAAXH\@Z
     */
    MCAPI void writeSignedInt(int); // NOLINT
    /**
     * @symbol ?writeSignedInt64\@BinaryStream\@\@QEAAX_J\@Z
     */
    MCAPI void writeSignedInt64(__int64); // NOLINT
    /**
     * @symbol ?writeSignedShort\@BinaryStream\@\@QEAAXF\@Z
     */
    MCAPI void writeSignedShort(short); // NOLINT
    /**
     * @symbol ?writeString\@BinaryStream\@\@QEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI void writeString(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol ?writeUnsignedChar\@BinaryStream\@\@QEAAXE\@Z
     */
    MCAPI void writeUnsignedChar(unsigned char); // NOLINT
    /**
     * @symbol ?writeUnsignedInt\@BinaryStream\@\@QEAAXI\@Z
     */
    MCAPI void writeUnsignedInt(unsigned int); // NOLINT
    /**
     * @symbol ?writeUnsignedInt64\@BinaryStream\@\@QEAAX_K\@Z
     */
    MCAPI void writeUnsignedInt64(unsigned __int64); // NOLINT
    /**
     * @symbol ?writeUnsignedShort\@BinaryStream\@\@QEAAXG\@Z
     */
    MCAPI void writeUnsignedShort(unsigned short); // NOLINT
    /**
     * @symbol ?writeUnsignedVarInt\@BinaryStream\@\@QEAAXI\@Z
     */
    MCAPI void writeUnsignedVarInt(unsigned int); // NOLINT
    /**
     * @symbol ?writeUnsignedVarInt64\@BinaryStream\@\@QEAAX_K\@Z
     */
    MCAPI void writeUnsignedVarInt64(unsigned __int64); // NOLINT
    /**
     * @symbol ?writeVarInt\@BinaryStream\@\@QEAAXH\@Z
     */
    MCAPI void writeVarInt(int); // NOLINT
    /**
     * @symbol ?writeVarInt64\@BinaryStream\@\@QEAAX_J\@Z
     */
    MCAPI void writeVarInt64(__int64); // NOLINT

    // private:
    /**
     * @symbol ?write\@BinaryStream\@\@AEAAXPEBX_K\@Z
     */
    MCAPI void write(void const*, unsigned __int64); // NOLINT

private:
};
