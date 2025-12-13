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

    virtual ::Bedrock::Result<void> readBytesResult(void*, uint64) = 0;

    virtual uint64 numBytesLeft() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uchar readByte();

    MCAPI bool readBytes(void* data, uint64 bytes);

    MCAPI int readInt();

    MCAPI int64 readLongLong();

    MCAPI ::std::string readLongString();

    MCAPI short readShort();

    MCAPI ::std::string readString();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
