#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"
#include "mc/platform/Result.h"

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

    MCAPI void writeBool(bool value, char const*, char const*);

    MCAPI void writeByte(uchar value, char const*, char const*);

    MCAPI void writeDouble(double value, char const*, char const*);

    MCAPI void writeFloat(float value, char const*, char const*);

    MCAPI void writeSignedBigEndianInt(int value, char const*, char const*);

    MCAPI void writeSignedInt(int value, char const*, char const*);

    MCAPI void writeSignedInt64(int64 value, char const*, char const*);

    MCAPI void writeSignedShort(short value, char const*, char const*);

    MCAPI void writeString(std::string_view value, char const*, char const*);

    MCAPI void writeUnsignedChar(uchar value, char const*, char const*);

    MCAPI void writeUnsignedInt(uint value, char const*, char const*);

    MCAPI void writeUnsignedInt64(uint64 value, char const*, char const*);

    MCAPI void writeUnsignedShort(ushort value, char const*, char const*);

    MCAPI void writeUnsignedVarInt(uint uvalue, char const*, char const*);

    MCAPI void writeUnsignedVarInt64(uint64 uvalue, char const*, char const*);

    MCAPI void writeVarInt(int value, char const*, char const*);

    MCAPI void writeVarInt64(int64 value, char const*, char const*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _writeInteger(int value, char const*, char const*);

    MCAPI void _writeInteger(short value, char const*, char const*);

    MCAPI void _writeInteger(uchar value, char const*, char const*);

    MCAPI void _writeInteger(uint value, char const*, char const*);

    MCAPI void _writeInteger(ushort value, char const*, char const*);

    MCAPI void write(void const* origin, uint64 num);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(std::string& buffer, bool copyBuffer);

    MCAPI void dtor$();

    // NOLINTEND
};
