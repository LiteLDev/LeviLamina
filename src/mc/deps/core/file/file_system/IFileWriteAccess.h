#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileWriteAccess {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IFileWriteAccess() = default;

    // vIndex: 1
    virtual uint64 fwrite(void const*, uint64, uint64, void*) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
