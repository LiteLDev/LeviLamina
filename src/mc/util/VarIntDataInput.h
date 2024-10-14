#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BytesDataInput.h"

class VarIntDataInput : public ::BytesDataInput {
public:
    ReadOnlyBinaryStream* mStream;

    explicit VarIntDataInput(ReadOnlyBinaryStream* bs) : mStream(bs) {}

    explicit VarIntDataInput(ReadOnlyBinaryStream& bs) : mStream(std::addressof(bs)) {}

    VarIntDataInput() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VarIntDataInput() = default;

    // vIndex: 1
    virtual class Bedrock::Result<std::string> readStringResult();

    // vIndex: 2
    virtual class Bedrock::Result<std::string> readLongStringResult();

    // vIndex: 3
    virtual class Bedrock::Result<float> readFloatResult();

    // vIndex: 4
    virtual class Bedrock::Result<double> readDoubleResult();

    // vIndex: 5
    virtual class Bedrock::Result<uchar> readByteResult();

    // vIndex: 6
    virtual class Bedrock::Result<short> readShortResult();

    // vIndex: 7
    virtual class Bedrock::Result<int> readIntResult();

    // vIndex: 8
    virtual class Bedrock::Result<int64> readLongLongResult();

    // vIndex: 9
    virtual class Bedrock::Result<void> readBytesResult(void* data, uint64 bytes);

    // vIndex: 10
    virtual uint64 numBytesLeft() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI uint64 numBytesLeft$() const;

    MCAPI class Bedrock::Result<uchar> readByteResult$();

    MCAPI class Bedrock::Result<void> readBytesResult$(void* data, uint64 bytes);

    MCAPI class Bedrock::Result<double> readDoubleResult$();

    MCAPI class Bedrock::Result<float> readFloatResult$();

    MCAPI class Bedrock::Result<int> readIntResult$();

    MCAPI class Bedrock::Result<int64> readLongLongResult$();

    MCAPI class Bedrock::Result<std::string> readLongStringResult$();

    MCAPI class Bedrock::Result<short> readShortResult$();

    MCAPI class Bedrock::Result<std::string> readStringResult$();

    // NOLINTEND
};
