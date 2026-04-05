#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WindowStateStorage {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~WindowStateStorage() = default;
#else // LL_PLAT_C
    virtual ~WindowStateStorage();
#endif

    virtual void writeRect(::tagRECT const& rect) = 0;

    virtual void writeShowCommand(int showCommand) = 0;

    virtual bool readRect(::tagRECT& rect) const = 0;

    virtual bool readShowCommand(int& showCommand) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
