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
    // vIndex: 0
    virtual ~BinaryStream();

    MCAPI BinaryStream();

    MCAPI BinaryStream(std::string& buffer, bool copyBuffer);

    MCAPI std::string getAndReleaseData();

    MCAPI void reset();

    MCAPI void writeBool(bool, char const*, char const*);

    MCAPI void writeByte(uchar, char const*, char const*);

    MCAPI void writeDouble(double, char const*, char const*);

    MCAPI void writeFloat(float, char const*, char const*);

    MCAPI void writeSignedBigEndianInt(int, char const*, char const*);

    MCAPI void writeSignedInt(int, char const*, char const*);

    MCAPI void writeSignedInt64(int64, char const*, char const*);

    MCAPI void writeSignedShort(short, char const*, char const*);

    MCAPI void writeString(std::string_view, char const*, char const*);

    MCAPI void writeUnsignedChar(uchar, char const*, char const*);

    MCAPI void writeUnsignedInt(uint, char const*, char const*);

    MCAPI void writeUnsignedInt64(uint64, char const*, char const*);

    MCAPI void writeUnsignedShort(ushort, char const*, char const*);

    MCAPI void writeUnsignedVarInt(uint, char const*, char const*);

    MCAPI void writeUnsignedVarInt64(uint64, char const*, char const*);

    MCAPI void writeVarInt(int, char const*, char const*);

    MCAPI void writeVarInt64(int64, char const*, char const*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _writeInteger(int, char const*, char const*);

    MCAPI void _writeInteger(short, char const*, char const*);

    MCAPI void _writeInteger(uchar, char const*, char const*);

    MCAPI void _writeInteger(uint, char const*, char const*);

    MCAPI void _writeInteger(ushort, char const*, char const*);

    MCAPI void write(void const* origin, uint64 num);

    // NOLINTEND
};
