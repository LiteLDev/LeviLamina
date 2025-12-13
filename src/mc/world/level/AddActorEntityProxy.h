#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/IAddActorEntityProxy.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
// clang-format on

class AddActorEntityProxy : public ::IAddActorEntityProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&>     mDimension;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>  mActorUniqueID;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mActorRuntimeID;
    // NOLINTEND

public:
    // prevent constructor by default
    AddActorEntityProxy& operator=(AddActorEntityProxy const&);
    AddActorEntityProxy(AddActorEntityProxy const&);
    AddActorEntityProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeActor(::Actor& actor) /*override*/;

    virtual void reloadActor(::Actor& actor) /*override*/;

    virtual ~AddActorEntityProxy() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeActor(::Actor& actor);

    MCAPI void $reloadActor(::Actor& actor);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
