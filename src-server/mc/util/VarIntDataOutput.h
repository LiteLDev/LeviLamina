#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
// clang-format on

class VarIntDataOutput : public ::BytesDataOutput {
public:
    // member variables
    // NOLINTBEGIN
    ::BinaryStream& mStream;
    // NOLINTEND

    VarIntDataOutput(BinaryStream& bs) : mStream(bs) {}

public:
    // prevent constructor by default
    VarIntDataOutput& operator=(VarIntDataOutput const&);
    VarIntDataOutput(VarIntDataOutput const&);
    VarIntDataOutput();

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
    virtual void writeBytes(void const* data, uint64 bytes) /*override*/;

    // vIndex: 0
    virtual ~VarIntDataOutput() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
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

    MCAPI void $writeBytes(void const* data, uint64 bytes);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
