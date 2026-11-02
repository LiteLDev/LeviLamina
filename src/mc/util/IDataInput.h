#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

class IDataInput {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDataInput() = default;

    virtual ::Bedrock::Result<::std::string> readStringResult() = 0;

    virtual ::Bedrock::Result<::std::string> readLongStringResult() = 0;

    virtual ::Bedrock::Result<float> readFloatResult() = 0;

    virtual ::Bedrock::Result<double> readDoubleResult() = 0;

    virtual ::Bedrock::Result<uchar> readByteResult() = 0;

    virtual ::Bedrock::Result<short> readShortResult() = 0;

    virtual ::Bedrock::Result<int> readIntResult() = 0;

    virtual ::Bedrock::Result<int64> readLongLongResult() = 0;

    virtual ::Bedrock::Result<void> readBytesResult(void* data, uint64 bytes) = 0;

    virtual uint64 numBytesLeft() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uchar readByte();

    MCNAPI bool readBytes(void* data, uint64 bytes);

    MCNAPI int readInt();

    MCNAPI int64 readLongLong();

    MCNAPI ::std::string readLongString();

    MCNAPI short readShort();

    MCNAPI ::std::string readString();
    // NOLINTEND
};
