#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/animal/Animal.h"

class Bee : public ::Animal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk4f7897;
    ::ll::UntypedStorage<8, 8> mUnka3e2c3;
    ::ll::UntypedStorage<4, 4> mUnka93c64;
    // NOLINTEND

public:
    // prevent constructor by default
    Bee& operator=(Bee const&);
    Bee(Bee const&);
    Bee();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual ~Bee() /*override*/;

    // vIndex: 3
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    // vIndex: 93
    virtual void onSynchedDataUpdate(int dataId) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _registerLoopingSounds();

    MCNAPI void postNormalTick();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCNAPI void $onSynchedDataUpdate(int dataId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
