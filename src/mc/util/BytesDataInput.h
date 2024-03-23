#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/util/IDataInput.h"

class BytesDataInput : public ::IDataInput {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BytesDataInput@@UEAA@XZ
    virtual ~BytesDataInput() = default;

    // vIndex: 1, symbol:
    // ?readStringResult@BytesDataInput@@UEAA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Verror_code@2@@Bedrock@@XZ
    virtual class Bedrock::Result<std::string> readStringResult();

    // vIndex: 2, symbol:
    // ?readLongStringResult@BytesDataInput@@UEAA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Verror_code@2@@Bedrock@@XZ
    virtual class Bedrock::Result<std::string> readLongStringResult();

    // vIndex: 3, symbol: ?readFloatResult@BytesDataInput@@UEAA?AV?$Result@MVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<float> readFloatResult();

    // vIndex: 4, symbol: ?readDoubleResult@BytesDataInput@@UEAA?AV?$Result@NVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<double> readDoubleResult();

    // vIndex: 5, symbol: ?readByteResult@BytesDataInput@@UEAA?AV?$Result@EVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<uchar> readByteResult();

    // vIndex: 6, symbol: ?readShortResult@BytesDataInput@@UEAA?AV?$Result@FVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<short> readShortResult();

    // vIndex: 7, symbol: ?readIntResult@BytesDataInput@@UEAA?AV?$Result@HVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<int> readIntResult();

    // vIndex: 8, symbol: ?readLongLongResult@BytesDataInput@@UEAA?AV?$Result@_JVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<int64> readLongLongResult();

    // NOLINTEND
};
