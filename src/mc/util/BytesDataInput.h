#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/IDataInput.h"

class BytesDataInput : public ::IDataInput {
public:
    // prevent constructor by default
    BytesDataInput& operator=(BytesDataInput const&);
    BytesDataInput(BytesDataInput const&);
    BytesDataInput();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BytesDataInput() = default;

    // vIndex: 1
    virtual class Bedrock::Result<std::string> readStringResult();

    // vIndex: 2
    virtual class Bedrock::Result<std::string> readLongStringResult();

    // vIndex: 5
    virtual class Bedrock::Result<uchar> readByteResult();

    // NOLINTEND
};
