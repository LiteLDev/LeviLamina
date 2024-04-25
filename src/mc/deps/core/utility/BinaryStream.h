#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"

class BinaryStream : public ::ReadOnlyBinaryStream {
public:
    // prevent constructor by default
    BinaryStream& operator=(BinaryStream const&);
    BinaryStream(BinaryStream const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BinaryStream@@UEAA@XZ
    virtual ~BinaryStream();

    // symbol: ??0BinaryStream@@QEAA@XZ
    MCAPI BinaryStream();

    // symbol: ??0BinaryStream@@QEAA@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI BinaryStream(std::string& buffer, bool copyBuffer);

    // symbol: ?getAndReleaseData@BinaryStream@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getAndReleaseData();

    // symbol: ?reset@BinaryStream@@QEAAXXZ
    MCAPI void reset();

    // symbol: ?writeBool@BinaryStream@@QEAAX_NPEBD1@Z
    MCAPI void writeBool(bool, char const*, char const*);

    // symbol: ?writeByte@BinaryStream@@QEAAXEPEBD0@Z
    MCAPI void writeByte(uchar, char const*, char const*);

    // symbol: ?writeDouble@BinaryStream@@QEAAXNPEBD0@Z
    MCAPI void writeDouble(double, char const*, char const*);

    // symbol: ?writeFloat@BinaryStream@@QEAAXMPEBD0@Z
    MCAPI void writeFloat(float, char const*, char const*);

    // symbol: ?writeSignedBigEndianInt@BinaryStream@@QEAAXHPEBD0@Z
    MCAPI void writeSignedBigEndianInt(int, char const*, char const*);

    // symbol: ?writeSignedInt@BinaryStream@@QEAAXHPEBD0@Z
    MCAPI void writeSignedInt(int, char const*, char const*);

    // symbol: ?writeSignedInt64@BinaryStream@@QEAAX_JPEBD1@Z
    MCAPI void writeSignedInt64(int64, char const*, char const*);

    // symbol: ?writeSignedShort@BinaryStream@@QEAAXFPEBD0@Z
    MCAPI void writeSignedShort(short, char const*, char const*);

    // symbol: ?writeString@BinaryStream@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBD1@Z
    MCAPI void writeString(std::string_view, char const*, char const*);

    // symbol: ?writeUnsignedChar@BinaryStream@@QEAAXEPEBD0@Z
    MCAPI void writeUnsignedChar(uchar, char const*, char const*);

    // symbol: ?writeUnsignedInt@BinaryStream@@QEAAXIPEBD0@Z
    MCAPI void writeUnsignedInt(uint, char const*, char const*);

    // symbol: ?writeUnsignedInt64@BinaryStream@@QEAAX_KPEBD1@Z
    MCAPI void writeUnsignedInt64(uint64, char const*, char const*);

    // symbol: ?writeUnsignedShort@BinaryStream@@QEAAXGPEBD0@Z
    MCAPI void writeUnsignedShort(ushort, char const*, char const*);

    // symbol: ?writeUnsignedVarInt@BinaryStream@@QEAAXIPEBD0@Z
    MCAPI void writeUnsignedVarInt(uint, char const*, char const*);

    // symbol: ?writeUnsignedVarInt64@BinaryStream@@QEAAX_KPEBD1@Z
    MCAPI void writeUnsignedVarInt64(uint64, char const*, char const*);

    // symbol: ?writeVarInt@BinaryStream@@QEAAXHPEBD0@Z
    MCAPI void writeVarInt(int, char const*, char const*);

    // symbol: ?writeVarInt64@BinaryStream@@QEAAX_JPEBD1@Z
    MCAPI void writeVarInt64(int64, char const*, char const*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_writeInteger@BinaryStream@@AEAAXHPEBD0@Z
    MCAPI void _writeInteger(int, char const*, char const*);

    // symbol: ?_writeInteger@BinaryStream@@AEAAXFPEBD0@Z
    MCAPI void _writeInteger(short, char const*, char const*);

    // symbol: ?_writeInteger@BinaryStream@@AEAAXEPEBD0@Z
    MCAPI void _writeInteger(uchar, char const*, char const*);

    // symbol: ?_writeInteger@BinaryStream@@AEAAXGPEBD0@Z
    MCAPI void _writeInteger(ushort, char const*, char const*);

    // symbol: ?write@BinaryStream@@AEAAXPEBX_K@Z
    MCAPI void write(void const* origin, uint64 num);

    // NOLINTEND
};
