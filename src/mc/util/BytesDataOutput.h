#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDataOutput.h"

class BytesDataOutput : public ::IDataOutput {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void writeString(::std::string_view v) /*override*/;

    virtual void writeLongString(::std::string_view v) /*override*/;

    virtual void writeFloat(float v) /*override*/;

    virtual void writeDouble(double v) /*override*/;

    virtual void writeByte(char v) /*override*/;

    virtual void writeShort(short v) /*override*/;

    virtual void writeInt(int v) /*override*/;

    virtual void writeLongLong(int64 v) /*override*/;

    virtual void writeBytes(void const*, uint64) = 0;

    virtual ~BytesDataOutput() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $writeString(::std::string_view v);

    MCAPI void $writeLongString(::std::string_view v);

    MCAPI void $writeFloat(float v);

    MCAPI void $writeDouble(double v);

    MCAPI void $writeByte(char v);

    MCAPI void $writeShort(short v);

    MCAPI void $writeInt(int v);

    MCAPI void $writeLongLong(int64 v);


    // NOLINTEND
};
