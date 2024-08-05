#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

class VarIntDataOutput : public ::BytesDataOutput {
public:
    // prevent constructor by default
    VarIntDataOutput& operator=(VarIntDataOutput const&);
    VarIntDataOutput(VarIntDataOutput const&);
    VarIntDataOutput();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VarIntDataOutput();

    // vIndex: 1
    virtual void writeString(std::string_view v);

    // vIndex: 2
    virtual void writeLongString(std::string_view v);

    // vIndex: 3
    virtual void writeFloat(float v);

    // vIndex: 4
    virtual void writeDouble(double v);

    // vIndex: 5
    virtual void writeByte(char v);

    // vIndex: 6
    virtual void writeShort(short v);

    // vIndex: 7
    virtual void writeInt(int v);

    // vIndex: 8
    virtual void writeLongLong(int64 v);

    // vIndex: 9
    virtual void writeBytes(void const* data, uint64 bytes);

    // NOLINTEND
};
