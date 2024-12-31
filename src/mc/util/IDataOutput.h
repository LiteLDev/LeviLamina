#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDataOutput {
public:
    // prevent constructor by default
    IDataOutput& operator=(IDataOutput const&);
    IDataOutput(IDataOutput const&);
    IDataOutput();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IDataOutput() = default;

    // vIndex: 1
    virtual void writeString(::std::string_view) = 0;

    // vIndex: 2
    virtual void writeLongString(::std::string_view) = 0;

    // vIndex: 3
    virtual void writeFloat(float) = 0;

    // vIndex: 4
    virtual void writeDouble(double) = 0;

    // vIndex: 5
    virtual void writeByte(char) = 0;

    // vIndex: 6
    virtual void writeShort(short) = 0;

    // vIndex: 7
    virtual void writeInt(int) = 0;

    // vIndex: 8
    virtual void writeLongLong(int64) = 0;

    // vIndex: 9
    virtual void writeBytes(void const*, uint64) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
