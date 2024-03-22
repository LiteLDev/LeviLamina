#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/util/StringByteInput.h"

class BigEndianStringByteInput : public ::StringByteInput {
public:
    using StringByteInput::StringByteInput;

    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BigEndianStringByteInput@@UEAA@XZ
    virtual ~BigEndianStringByteInput();

    // vIndex: 3, symbol: ?readFloatResult@BigEndianStringByteInput@@UEAA?AV?$Result@MVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<float> readFloatResult();

    // vIndex: 4, symbol: ?readDoubleResult@BigEndianStringByteInput@@UEAA?AV?$Result@NVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<double> readDoubleResult();

    // vIndex: 6, symbol: ?readShortResult@BigEndianStringByteInput@@UEAA?AV?$Result@FVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<short> readShortResult();

    // vIndex: 7, symbol: ?readIntResult@BigEndianStringByteInput@@UEAA?AV?$Result@HVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<int> readIntResult();

    // vIndex: 8, symbol: ?readLongLongResult@BigEndianStringByteInput@@UEAA?AV?$Result@_JVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<int64> readLongLongResult();

    // vIndex: 9, symbol:
    // ?readBytesResult@BigEndianStringByteInput@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@PEAX_K@Z
    virtual class Bedrock::Result<void> readBytesResult(void*, uint64);

    // vIndex: 11, symbol:
    // ?readBigEndianBytesResult@BigEndianStringByteInput@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@PEAX_K@Z
    virtual class Bedrock::Result<void> readBigEndianBytesResult(void*, uint64);

    // NOLINTEND
};
