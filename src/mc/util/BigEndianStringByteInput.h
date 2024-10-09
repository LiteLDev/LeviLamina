#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/StringByteInput.h"

class BigEndianStringByteInput : public ::StringByteInput {
public:
    using StringByteInput::StringByteInput;

    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BigEndianStringByteInput() = default;

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
};
