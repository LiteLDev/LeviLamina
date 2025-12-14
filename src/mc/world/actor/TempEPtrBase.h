#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/_TickPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
// clang-format on

class TempEPtrBase : public ::_TickPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor*>        tmp;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mEntityId;
    ::ll::TypedStorage<8, 8, ::Level*>        mLevel;
    ::ll::TypedStorage<1, 1, bool>            mHasLocked;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TempEPtrBase() /*override*/;

    virtual void invalidate() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _set(::Actor* e);

    MCAPI bool isValid() const;

    MCAPI void unset();
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
