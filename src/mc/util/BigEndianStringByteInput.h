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

    virtual ::Bedrock::Result<void> readBigEndianBytesResult(void* data, uint64 bytes);

    virtual ::Bedrock::Result<float> readFloatResult() /*override*/;

    virtual ::Bedrock::Result<double> readDoubleResult() /*override*/;

    virtual ::Bedrock::Result<short> readShortResult() /*override*/;

    virtual ::Bedrock::Result<int> readIntResult() /*override*/;

    virtual ::Bedrock::Result<int64> readLongLongResult() /*override*/;

    virtual ~BigEndianStringByteInput() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::Result<void> $readBytesResult(void* data, uint64 bytes);

    MCAPI ::Bedrock::Result<void> $readBigEndianBytesResult(void* data, uint64 bytes);

    MCAPI ::Bedrock::Result<float> $readFloatResult();

    MCAPI ::Bedrock::Result<double> $readDoubleResult();

    MCAPI ::Bedrock::Result<short> $readShortResult();

    MCAPI ::Bedrock::Result<int> $readIntResult();

    MCAPI ::Bedrock::Result<int64> $readLongLongResult();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
