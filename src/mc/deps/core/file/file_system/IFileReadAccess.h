#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileReadAccess {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IFileReadAccess() = default;

    // vIndex: 1
    virtual uint64 fread(void*, uint64, uint64, void*) const = 0;
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
