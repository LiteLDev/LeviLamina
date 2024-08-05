#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDataOutput.h"

class BytesDataOutput : public ::IDataOutput {
public:
    // prevent constructor by default
    BytesDataOutput& operator=(BytesDataOutput const&);
    BytesDataOutput(BytesDataOutput const&);
    BytesDataOutput();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BytesDataOutput() = default;

    // vIndex: 1
    virtual void writeString(std::string_view v);

    // vIndex: 2
    virtual void writeLongString(std::string_view v);

    // vIndex: 5
    virtual void writeByte(char v);

    // NOLINTEND
};
