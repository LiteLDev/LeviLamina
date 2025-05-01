#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IAddActorEntityProxy.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class AddActorEntityProxy : public ::IAddActorEntityProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk16011c;
    ::ll::UntypedStorage<8, 8> mUnkb68e29;
    ::ll::UntypedStorage<8, 8> mUnk6e1b78;
    // NOLINTEND

public:
    // prevent constructor by default
    AddActorEntityProxy& operator=(AddActorEntityProxy const&);
    AddActorEntityProxy(AddActorEntityProxy const&);
    AddActorEntityProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void initializeActor(::Actor& actor) /*override*/;

    // vIndex: 2
    virtual void reloadActor(::Actor& actor) /*override*/;

    // vIndex: 0
    virtual ~AddActorEntityProxy() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeActor(::Actor& actor);

    MCNAPI void $reloadActor(::Actor& actor);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
