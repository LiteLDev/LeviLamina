#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/StringByteInput.h"

class BigEndianStringByteInput : public ::StringByteInput {
public:
    // prevent constructor by default
    BigEndianStringByteInput& operator=(BigEndianStringByteInput const&);
    BigEndianStringByteInput(BigEndianStringByteInput const&);
    BigEndianStringByteInput();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BigEndianStringByteInput();

    // vIndex: 3
    virtual class Bedrock::Result<float> readFloatResult();

    // vIndex: 4
    virtual class Bedrock::Result<double> readDoubleResult();

    // vIndex: 6
    virtual class Bedrock::Result<short> readShortResult();

    // vIndex: 7
    virtual class Bedrock::Result<int> readIntResult();

    // vIndex: 8
    virtual class Bedrock::Result<int64> readLongLongResult();

    // vIndex: 9
    virtual class Bedrock::Result<void> readBytesResult(void* data, uint64 bytes);

    // vIndex: 11
    virtual class Bedrock::Result<void> readBigEndianBytesResult(void* data, uint64 bytes);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> readBigEndianBytesResult$(void* data, uint64 bytes);

    MCAPI class Bedrock::Result<void> readBytesResult$(void* data, uint64 bytes);

    MCAPI class Bedrock::Result<double> readDoubleResult$();

    MCAPI class Bedrock::Result<float> readFloatResult$();

    MCAPI class Bedrock::Result<int> readIntResult$();

    MCAPI class Bedrock::Result<int64> readLongLongResult$();

    MCAPI class Bedrock::Result<short> readShortResult$();

    // NOLINTEND
};
