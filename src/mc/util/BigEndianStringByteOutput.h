#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/StringByteOutput.h"

class BigEndianStringByteOutput : public ::StringByteOutput {
public:
    using StringByteOutput::StringByteOutput;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void writeFloat(float v) /*override*/;

    virtual void writeDouble(double v) /*override*/;

    virtual void writeShort(short v) /*override*/;

    virtual void writeInt(int v) /*override*/;

    virtual void writeLongLong(int64 v) /*override*/;

    virtual ~BigEndianStringByteOutput() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $writeFloat(float v);

    MCAPI void $writeDouble(double v);

    MCAPI void $writeShort(short v);

    MCAPI void $writeInt(int v);

    MCAPI void $writeLongLong(int64 v);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
