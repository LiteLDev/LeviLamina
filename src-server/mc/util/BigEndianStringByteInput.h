#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/StringByteInput.h"

class BigEndianStringByteInput : public ::StringByteInput {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 9
    virtual ::Bedrock::Result<void> readBytesResult(void* data, uint64 bytes) /*override*/;

    // vIndex: 11
    virtual ::Bedrock::Result<void> readBigEndianBytesResult(void* data, uint64 bytes);

    // vIndex: 3
    virtual ::Bedrock::Result<float> readFloatResult() /*override*/;

    // vIndex: 4
    virtual ::Bedrock::Result<double> readDoubleResult() /*override*/;

    // vIndex: 6
    virtual ::Bedrock::Result<short> readShortResult() /*override*/;

    // vIndex: 7
    virtual ::Bedrock::Result<int> readIntResult() /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<int64> readLongLongResult() /*override*/;

    // vIndex: 0
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
