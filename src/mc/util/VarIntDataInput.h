#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/util/BytesDataInput.h"

class VarIntDataInput : public ::BytesDataInput {
public:
    ReadOnlyBinaryStream* mStream;

    explicit VarIntDataInput(class ReadOnlyBinaryStream* bs) : mStream(bs) {}

    VarIntDataInput() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1VarIntDataInput@@UEAA@XZ
    virtual ~VarIntDataInput();

    // vIndex: 1, symbol:
    // ?readStringResult@VarIntDataInput@@UEAA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Verror_code@2@@Bedrock@@XZ
    virtual class Bedrock::Result<std::string> readStringResult();

    // vIndex: 2, symbol:
    // ?readLongStringResult@VarIntDataInput@@UEAA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Verror_code@2@@Bedrock@@XZ
    virtual class Bedrock::Result<std::string> readLongStringResult();

    // vIndex: 3, symbol: ?readFloatResult@VarIntDataInput@@UEAA?AV?$Result@MVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<float> readFloatResult();

    // vIndex: 4, symbol: ?readDoubleResult@VarIntDataInput@@UEAA?AV?$Result@NVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<double> readDoubleResult();

    // vIndex: 5, symbol: ?readByteResult@VarIntDataInput@@UEAA?AV?$Result@EVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<uchar> readByteResult();

    // vIndex: 6, symbol: ?readShortResult@VarIntDataInput@@UEAA?AV?$Result@FVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<short> readShortResult();

    // vIndex: 7, symbol: ?readIntResult@VarIntDataInput@@UEAA?AV?$Result@HVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<int> readIntResult();

    // vIndex: 8, symbol: ?readLongLongResult@VarIntDataInput@@UEAA?AV?$Result@_JVerror_code@std@@@Bedrock@@XZ
    virtual class Bedrock::Result<int64> readLongLongResult();

    // vIndex: 9, symbol: ?readBytesResult@VarIntDataInput@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@PEAX_K@Z
    virtual class Bedrock::Result<void> readBytesResult(void*, uint64);

    // vIndex: 10, symbol: ?numBytesLeft@VarIntDataInput@@UEBA_KXZ
    virtual uint64 numBytesLeft() const;

    // NOLINTEND
};
