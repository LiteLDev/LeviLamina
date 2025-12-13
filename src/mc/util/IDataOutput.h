#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDataOutput {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDataOutput() = default;

    virtual void writeString(::std::string_view) = 0;

    virtual void writeLongString(::std::string_view) = 0;

    virtual void writeFloat(float) = 0;

    virtual void writeDouble(double) = 0;

    virtual void writeByte(char) = 0;

    virtual void writeShort(short) = 0;

    virtual void writeInt(int) = 0;

    virtual void writeLongLong(int64) = 0;

    virtual void writeBytes(void const*, uint64) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
