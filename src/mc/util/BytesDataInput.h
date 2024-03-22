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

    // vIndex: 3, symbol: ?readFloat@BytesDataInput@@UEAAMXZ
    virtual float readFloat();

    // vIndex: 4, symbol: ?readDouble@BytesDataInput@@UEAANXZ
    virtual double readDouble();

    // vIndex: 5, symbol: ?readByteResult@BytesDataInput@@UEAA?AV?$Result@EVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<uchar> readByteResult();

    // vIndex: 6, symbol: ?readShort@BytesDataInput@@UEAAFXZ
    virtual short readShort();

    // vIndex: 7, symbol: ?readInt@BytesDataInput@@UEAAHXZ
    virtual int readInt();

    // vIndex: 8, symbol: ?readLongLong@BytesDataInput@@UEAA_JXZ
    virtual int64 readLongLong();

    // NOLINTEND
};
