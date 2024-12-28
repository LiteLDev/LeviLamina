#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/_TickPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

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
    MCAPI TempEPtrBase(::TempEPtrBase const& e);

    MCAPI ::Actor* _lock() const;

    MCAPI void _set(::Actor* e);

    MCAPI bool isValid() const;

    MCAPI ::TempEPtrBase& operator=(::TempEPtrBase const& e);

    MCAPI void unset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TempEPtrBase const& e);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $invalidate();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
