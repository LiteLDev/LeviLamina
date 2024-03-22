#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class IDataInput {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IDataInput@@UEAA@XZ
    virtual ~IDataInput() = default;

    // vIndex: 1, symbol:
    // ?readStringResult@BytesDataInput@@UEAA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Verror_code@2@@Bedrock@@XZ
    virtual class Bedrock::Result<std::string> readStringResult() = 0;

    // vIndex: 2, symbol:
    // ?readLongStringResult@BytesDataInput@@UEAA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Verror_code@2@@Bedrock@@XZ
    virtual class Bedrock::Result<std::string> readLongStringResult() = 0;

    // vIndex: 3, symbol: ?readFloatResult@BigEndianStringByteInput@@UEAA?AV?$Result@MVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<float> readFloatResult() = 0;

    // vIndex: 4, symbol: ?readDoubleResult@BigEndianStringByteInput@@UEAA?AV?$Result@NVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<double> readDoubleResult() = 0;

    // vIndex: 5, symbol: ?readByteResult@BytesDataInput@@UEAA?AV?$Result@EVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<uchar> readByteResult() = 0;

    // vIndex: 6, symbol: ?readShortResult@BigEndianStringByteInput@@UEAA?AV?$Result@FVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<short> readShortResult() = 0;

    // vIndex: 7, symbol: ?readIntResult@BigEndianStringByteInput@@UEAA?AV?$Result@HVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<int> readIntResult() = 0;

    // vIndex: 8, symbol: ?readLongLongResult@BigEndianStringByteInput@@UEAA?AV?$Result@_JVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<int64> readLongLongResult() = 0;

    // vIndex: 9, symbol:
    // ?readBytesResult@BigEndianStringByteInput@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@PEAX_K@Z
    virtual class Bedrock::Result<void> readBytesResult(void*, uint64) = 0;

    // vIndex: 10, symbol: ?numBytesLeft@StringByteInput@@UEBA_KXZ
    virtual uint64 numBytesLeft() const = 0;

    // symbol: ?readByte@IDataInput@@QEAAEXZ
    MCAPI uchar readByte();

    // symbol: ?readBytes@IDataInput@@QEAA_NPEAX_K@Z
    MCAPI bool readBytes(void*, uint64);

    // symbol: ?readInt@IDataInput@@QEAAHXZ
    MCAPI int readInt();

    // symbol: ?readLongLong@IDataInput@@QEAA_JXZ
    MCAPI int64 readLongLong();

    // symbol: ?readLongString@IDataInput@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string readLongString();

    // symbol: ?readShort@IDataInput@@QEAAFXZ
    MCAPI short readShort();

    // symbol: ?readString@IDataInput@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string readString();

    // NOLINTEND
};
