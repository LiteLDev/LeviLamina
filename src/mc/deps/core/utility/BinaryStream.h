#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"

class BinaryStream : public ::ReadOnlyBinaryStream {
public:
    std::string  mOwnedBuffer;
    std::string* mBuffer;

    // prevent constructor by default
    BinaryStream& operator=(BinaryStream const&);
    BinaryStream(BinaryStream const&);

    template <typename T>
    inline void writeType(T const& x, char const* = nullptr, char const* = nullptr) {
        serialize<T>::write(x, *this);
    }

    MCTAPI void writeType(class NetworkItemStackDescriptor const&, char const*, char const*);
    MCTAPI void writeType(class MoveActorAbsoluteData const&, char const*, char const*);
    MCTAPI void writeType(class NetworkItemInstanceDescriptor const&, char const*, char const*);
    MCTAPI void writeType(struct PropertySyncData const&, char const*, char const*);

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
    MCAPI void writeBool(bool data, char const* docName = nullptr, char const* docDesc = nullptr);

    // symbol: ?writeByte@BinaryStream@@QEAAXEPEBD0@Z
    MCAPI void writeByte(uchar data, char const* docName = nullptr, char const* docDesc = nullptr);

    // symbol: ?writeDouble@BinaryStream@@QEAAXNPEBD0@Z
    MCAPI void writeDouble(double data, char const* docName = nullptr, char const* docDesc = nullptr);

    // symbol: ?writeFloat@BinaryStream@@QEAAXMPEBD0@Z
    MCAPI void writeFloat(float data, char const* docName = nullptr, char const* docDesc = nullptr);

    // symbol: ?writeSignedBigEndianInt@BinaryStream@@QEAAXHPEBD0@Z
    MCAPI void writeSignedBigEndianInt(int data, char const* docName = nullptr, char const* docDesc = nullptr);

    // symbol: ?writeSignedInt@BinaryStream@@QEAAXHPEBD0@Z
    MCAPI void writeSignedInt(int data, char const* docName = nullptr, char const* docDesc = nullptr);

    // symbol: ?writeSignedInt64@BinaryStream@@QEAAX_JPEBD1@Z
    MCAPI void writeSignedInt64(int64 data, char const* docName = nullptr, char const* docDesc = nullptr);

    // symbol: ?writeSignedShort@BinaryStream@@QEAAXFPEBD0@Z
    MCAPI void writeSignedShort(short data, char const* docName = nullptr, char const* docDesc = nullptr);

    // symbol: ?writeString@BinaryStream@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBD1@Z
    MCAPI void writeString(std::string_view data, char const* docName = nullptr, char const* docDesc = nullptr);

    // symbol: ?writeUnsignedChar@BinaryStream@@QEAAXEPEBD0@Z
    MCAPI void writeUnsignedChar(uchar data, char const* docName = nullptr, char const* docDesc = nullptr);

    // symbol: ?writeUnsignedInt@BinaryStream@@QEAAXIPEBD0@Z
    MCAPI void writeUnsignedInt(uint data, char const* docName = nullptr, char const* docDesc = nullptr);

    // symbol: ?writeUnsignedInt64@BinaryStream@@QEAAX_KPEBD1@Z
    MCAPI void writeUnsignedInt64(uint64 data, char const* docName = nullptr, char const* docDesc = nullptr);

    // symbol: ?writeUnsignedShort@BinaryStream@@QEAAXGPEBD0@Z
    MCAPI void writeUnsignedShort(ushort data, char const* docName = nullptr, char const* docDesc = nullptr);

    // symbol: ?writeUnsignedVarInt@BinaryStream@@QEAAXIPEBD0@Z
    MCAPI void writeUnsignedVarInt(uint data, char const* docName = nullptr, char const* docDesc = nullptr);

    // symbol: ?writeUnsignedVarInt64@BinaryStream@@QEAAX_KPEBD1@Z
    MCAPI void writeUnsignedVarInt64(uint64 data, char const* docName = nullptr, char const* docDesc = nullptr);

    // symbol: ?writeVarInt@BinaryStream@@QEAAXHPEBD0@Z
    MCAPI void writeVarInt(int data, char const* docName = nullptr, char const* docDesc = nullptr);

    // symbol: ?writeVarInt64@BinaryStream@@QEAAX_JPEBD1@Z
    MCAPI void writeVarInt64(int64 data, char const* docName = nullptr, char const* docDesc = nullptr);

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
