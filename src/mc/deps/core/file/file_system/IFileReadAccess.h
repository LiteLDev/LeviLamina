#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileReadAccess {
public:
    // prevent constructor by default
    IFileReadAccess& operator=(IFileReadAccess const&);
    IFileReadAccess(IFileReadAccess const&);
    IFileReadAccess();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IFileReadAccess() = default;

    // vIndex: 1
    virtual uint64 fread(void* buffer, uint64 size, uint64 count, void* file) const = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
