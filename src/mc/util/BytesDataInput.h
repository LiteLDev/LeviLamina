#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/IDataInput.h"

class BytesDataInput : public ::IDataInput {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::Result<::std::string> readStringResult() /*override*/;

    virtual ::Bedrock::Result<::std::string> readLongStringResult() /*override*/;

    virtual ::Bedrock::Result<float> readFloatResult() /*override*/;

    virtual ::Bedrock::Result<double> readDoubleResult() /*override*/;

    virtual ::Bedrock::Result<uchar> readByteResult() /*override*/;

    virtual ::Bedrock::Result<short> readShortResult() /*override*/;

    virtual ::Bedrock::Result<int> readIntResult() /*override*/;

    virtual ::Bedrock::Result<int64> readLongLongResult() /*override*/;

    virtual ::Bedrock::Result<void> readBytesResult(void*, uint64) = 0;

    virtual ~BytesDataInput() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::Result<::std::string> $readStringResult();

    MCAPI ::Bedrock::Result<::std::string> $readLongStringResult();

    MCAPI ::Bedrock::Result<float> $readFloatResult();

    MCAPI ::Bedrock::Result<double> $readDoubleResult();

    MCAPI ::Bedrock::Result<uchar> $readByteResult();

    MCAPI ::Bedrock::Result<short> $readShortResult();

    MCAPI ::Bedrock::Result<int> $readIntResult();

    MCAPI ::Bedrock::Result<int64> $readLongLongResult();


    // NOLINTEND
};
