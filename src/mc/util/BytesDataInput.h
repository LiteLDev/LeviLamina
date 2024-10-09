#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/IDataInput.h"

class BytesDataInput : public ::IDataInput {
public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BytesDataInput() = default;

    // vIndex: 1
    virtual class Bedrock::Result<std::string> readStringResult();

    // vIndex: 2
    virtual class Bedrock::Result<std::string> readLongStringResult();

    // vIndex: 3
    virtual class Bedrock::Result<float> readFloatResult();

    // vIndex: 4
    virtual class Bedrock::Result<double> readDoubleResult();

    // vIndex: 5
    virtual class Bedrock::Result<uchar> readByteResult();

    // vIndex: 6
    virtual class Bedrock::Result<short> readShortResult();

    // vIndex: 7
    virtual class Bedrock::Result<int> readIntResult();

    // vIndex: 8
    virtual class Bedrock::Result<int64> readLongLongResult();

    // NOLINTEND
};
