#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileReadAccess {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFileReadAccess() = default;

    virtual uint64 fread(void* buffer, uint64 size, uint64 count, void* file) const = 0;
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
