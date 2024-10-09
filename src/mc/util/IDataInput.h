#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

class IDataInput {
public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IDataInput() = default;

    // vIndex: 1
    virtual class Bedrock::Result<std::string> readStringResult() = 0;

    // vIndex: 2
    virtual class Bedrock::Result<std::string> readLongStringResult() = 0;

    // vIndex: 3
    virtual class Bedrock::Result<float> readFloatResult() = 0;

    // vIndex: 4
    virtual class Bedrock::Result<double> readDoubleResult() = 0;

    // vIndex: 5
    virtual class Bedrock::Result<uchar> readByteResult() = 0;

    // vIndex: 6
    virtual class Bedrock::Result<short> readShortResult() = 0;

    // vIndex: 7
    virtual class Bedrock::Result<int> readIntResult() = 0;

    // vIndex: 8
    virtual class Bedrock::Result<int64> readLongLongResult() = 0;

    // vIndex: 9
    virtual class Bedrock::Result<void> readBytesResult(void* data, uint64 bytes) = 0;

    // vIndex: 10
    virtual uint64 numBytesLeft() const = 0;

    MCAPI uchar readByte();

    MCAPI bool readBytes(void* data, uint64 bytes);

    MCAPI int readInt();

    MCAPI int64 readLongLong();

    MCAPI std::string readLongString();

    MCAPI short readShort();

    MCAPI std::string readString();

    // NOLINTEND
};
