#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

class StringByteOutput : public ::BytesDataOutput {
public:
    // prevent constructor by default
    StringByteOutput& operator=(StringByteOutput const&);
    StringByteOutput(StringByteOutput const&);
    StringByteOutput();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StringByteOutput();

    // vIndex: 9
    virtual void writeBytes(void const* data, uint64 bytes);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI void writeBytes$(void const* data, uint64 bytes);

    // NOLINTEND
};
