#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDataOutput.h"

class BytesDataOutput : public ::IDataOutput {
public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BytesDataOutput() = default;

    // vIndex: 1
    virtual void writeString(std::string_view v);

    // vIndex: 2
    virtual void writeLongString(std::string_view v);

    // vIndex: 3
    virtual void writeFloat(float);

    // vIndex: 4
    virtual void writeDouble(double);

    // vIndex: 5
    virtual void writeByte(char v);

    // vIndex: 6
    virtual void writeShort(short);

    // vIndex: 7
    virtual void writeInt(int);

    // vIndex: 8
    virtual void writeLongLong(int64);

    // NOLINTEND
};
