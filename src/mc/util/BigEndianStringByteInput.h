#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/StringByteInput.h"

class BigEndianStringByteInput : public ::StringByteInput {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::Result<void> readBytesResult(void* data, uint64 bytes) /*override*/;

    virtual ::Bedrock::Result<void> readBigEndianBytesResult(void*, uint64);

    virtual ::Bedrock::Result<float> readFloatResult() /*override*/;

    virtual ::Bedrock::Result<double> readDoubleResult() /*override*/;

    virtual ::Bedrock::Result<short> readShortResult() /*override*/;

    virtual ::Bedrock::Result<int> readIntResult() /*override*/;

    virtual ::Bedrock::Result<int64> readLongLongResult() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
