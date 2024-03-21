#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/util/IDataInput.h"

class BytesDataInput : public ::IDataInput {
public:
    // prevent constructor by default
    BytesDataInput& operator=(BytesDataInput const&);
    BytesDataInput(BytesDataInput const&);
    BytesDataInput();

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

    // vIndex: 5, symbol: ?readByteResult@BytesDataInput@@UEAA?AV?$Result@EVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<uchar> readByteResult();

    // NOLINTEND
};
