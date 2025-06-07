#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/_TickPtr.h"

class TempEPtrBase : public ::_TickPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc97d37;
    ::ll::UntypedStorage<8, 8> mUnkbeaa8f;
    ::ll::UntypedStorage<8, 8> mUnka5c9cc;
    ::ll::UntypedStorage<1, 1> mUnkadee2c;
    // NOLINTEND

public:
    // prevent constructor by default
    TempEPtrBase& operator=(TempEPtrBase const&);
    TempEPtrBase(TempEPtrBase const&);
    TempEPtrBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~TempEPtrBase() /*override*/;

    // vIndex: 0
    virtual void invalidate() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isValid() const;

    MCNAPI void unset();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $invalidate();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
