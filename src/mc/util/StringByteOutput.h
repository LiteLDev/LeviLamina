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
    // prevent constructor by default
    StringByteOutput& operator=(StringByteOutput const&);
    StringByteOutput(StringByteOutput const&);
    StringByteOutput();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void writeBytes(void const* data, uint64 bytes) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $writeBytes(void const* data, uint64 bytes);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
