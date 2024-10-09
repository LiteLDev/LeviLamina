#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

class ReadOnlyBinaryStream {
public:
    // prevent constructor by default
    ReadOnlyBinaryStream& operator=(ReadOnlyBinaryStream const&);
    ReadOnlyBinaryStream(ReadOnlyBinaryStream const&);
    ReadOnlyBinaryStream();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ReadOnlyBinaryStream();

    // vIndex: 1
    virtual class Bedrock::Result<void> read(void* target, uint64 num);

    MCAPI explicit ReadOnlyBinaryStream(std::string&& buffer);

    MCAPI ReadOnlyBinaryStream(std::string const& buffer, bool copyBuffer);

    MCAPI bool canReadBool() const;

    MCAPI class Bedrock::Result<void> ensureReadCompleted() const;

    MCAPI class Bedrock::Result<bool> getBool();

    MCAPI class Bedrock::Result<uchar> getByte();

    MCAPI class Bedrock::Result<double> getDouble();

    MCAPI class Bedrock::Result<float> getFloat();

    MCAPI class Bedrock::Result<int> getSignedBigEndianInt();

    MCAPI class Bedrock::Result<int> getSignedInt();

    MCAPI class Bedrock::Result<int64> getSignedInt64();

    MCAPI class Bedrock::Result<short> getSignedShort();

    MCAPI class Bedrock::Result<std::string> getString(uint64 maxLength);

    MCAPI class Bedrock::Result<void> getString(std::string& outStringStream, uint64 maxLength);

    MCAPI class Bedrock::Result<uchar> getUnsignedChar();

    MCAPI class Bedrock::Result<uint> getUnsignedInt();

    MCAPI class Bedrock::Result<uint64> getUnsignedInt64();

    MCAPI class Bedrock::Result<ushort> getUnsignedShort();

    MCAPI class Bedrock::Result<uint> getUnsignedVarInt();

    MCAPI class Bedrock::Result<uint64> getUnsignedVarInt64();

    MCAPI class Bedrock::Result<int> getVarInt();

    MCAPI class Bedrock::Result<int64> getVarInt64();

    MCAPI bool hasOverflowed() const;

    MCAPI class Bedrock::Result<void> readVectorList(std::vector<uint>& list);

    // NOLINTEND
};
