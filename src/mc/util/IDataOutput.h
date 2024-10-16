#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDataOutput {
public:
    // prevent constructor by default
    IDataOutput& operator=(IDataOutput const&);
    IDataOutput(IDataOutput const&);
    IDataOutput();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IDataOutput() = default;

    // vIndex: 1
    virtual void writeString(std::string_view v) = 0;

    // vIndex: 2
    virtual void writeLongString(std::string_view v) = 0;

    // vIndex: 3
    virtual void writeFloat(float v) = 0;

    // vIndex: 4
    virtual void writeDouble(double v) = 0;

    // vIndex: 5
    virtual void writeByte(char v) = 0;

    // vIndex: 6
    virtual void writeShort(short v) = 0;

    // vIndex: 7
    virtual void writeInt(int v) = 0;

    // vIndex: 8
    virtual void writeLongLong(int64 v) = 0;

    // vIndex: 9
    virtual void writeBytes(void const* data, uint64 bytes) = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
