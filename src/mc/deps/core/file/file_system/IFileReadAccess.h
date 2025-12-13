#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileReadAccess {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFileReadAccess() = default;

    virtual uint64 fread(void*, uint64, uint64, void*) const = 0;
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
