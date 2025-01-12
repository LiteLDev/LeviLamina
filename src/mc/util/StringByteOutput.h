#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

class StringByteOutput : public ::BytesDataOutput {
public:
    // member variables
    // NOLINTBEGIN
    std::string& mBuffer;
    // NOLINTEND

    StringByteOutput(std::string& str) noexcept : mBuffer(str) {}

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 9
    virtual void writeBytes(void const* data, uint64 bytes) /*override*/;

    // vIndex: 0
    virtual ~StringByteOutput() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $writeBytes(void const* data, uint64 bytes);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
