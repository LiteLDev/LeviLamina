#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileWriteAccess {
public:
    // prevent constructor by default
    IFileWriteAccess& operator=(IFileWriteAccess const&);
    IFileWriteAccess(IFileWriteAccess const&);
    IFileWriteAccess();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IFileWriteAccess() = default;

    // vIndex: 1
    virtual uint64 fwrite(void const* buffer, uint64 size, uint64 count, void* file) = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
