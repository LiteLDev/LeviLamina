#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/StringByteOutput.h"

class BigEndianStringByteOutput : public ::StringByteOutput {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void writeFloat(float v) /*override*/;

    // vIndex: 4
    virtual void writeDouble(double v) /*override*/;

    // vIndex: 6
    virtual void writeShort(short v) /*override*/;

    // vIndex: 7
    virtual void writeInt(int v) /*override*/;

    // vIndex: 8
    virtual void writeLongLong(int64 v) /*override*/;

    // vIndex: 0
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
