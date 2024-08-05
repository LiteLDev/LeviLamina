#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
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
    virtual class Bedrock::Result<void> readBytesResult(void*, uint64);

    // vIndex: 11
    virtual class Bedrock::Result<void> readBigEndianBytesResult(void*, uint64);

    // NOLINTEND
};
