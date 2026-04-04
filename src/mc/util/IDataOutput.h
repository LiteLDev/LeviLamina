#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDataOutput {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDataOutput() = default;

    virtual void writeString(::std::string_view v) = 0;

    virtual void writeLongString(::std::string_view v) = 0;

    virtual void writeFloat(float v) = 0;

    virtual void writeDouble(double v) = 0;

    virtual void writeByte(char v) = 0;

    virtual void writeShort(short v) = 0;

    virtual void writeInt(int v) = 0;

    virtual void writeLongLong(int64 v) = 0;

    virtual void writeBytes(void const* data, uint64 bytes) = 0;
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
