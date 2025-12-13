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
    ::ll::TypedStorage<8, 8, ::BinaryStream&> mStream;
    // NOLINTEND

public:
    // prevent constructor by default
    VarIntDataOutput& operator=(VarIntDataOutput const&);
    VarIntDataOutput(VarIntDataOutput const&);
    VarIntDataOutput();

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

    virtual void writeBytes(void const* data, uint64 bytes) /*override*/;

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
