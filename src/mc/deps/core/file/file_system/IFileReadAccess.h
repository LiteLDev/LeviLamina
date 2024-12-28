#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileReadAccess {
public:
    // prevent constructor by default
    IFileReadAccess& operator=(IFileReadAccess const&);
    IFileReadAccess(IFileReadAccess const&);
    IFileReadAccess();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IFileReadAccess();

    // vIndex: 1
    virtual uint64 fread(void*, uint64, uint64, void*) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
