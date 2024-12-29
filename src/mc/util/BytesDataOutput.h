#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDataOutput.h"

class BytesDataOutput : public ::IDataOutput {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void writeString(::std::string_view v) /*override*/;

    // vIndex: 2
    virtual void writeLongString(::std::string_view v) /*override*/;

    // vIndex: 3
    virtual void writeFloat(float v) /*override*/;

    // vIndex: 4
    virtual void writeDouble(double v) /*override*/;

    // vIndex: 5
    virtual void writeByte(char v) /*override*/;

    // vIndex: 6
    virtual void writeShort(short v) /*override*/;

    // vIndex: 7
    virtual void writeInt(int v) /*override*/;

    // vIndex: 8
    virtual void writeLongLong(int64 v) /*override*/;

    // vIndex: 9
    virtual void writeBytes(void const*, uint64) = 0;

    // vIndex: 0
    virtual ~BytesDataOutput() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
