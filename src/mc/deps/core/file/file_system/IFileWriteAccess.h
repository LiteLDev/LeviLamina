#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileWriteAccess {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFileWriteAccess() = default;

    virtual uint64 fwrite(void const*, uint64, uint64, void*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
