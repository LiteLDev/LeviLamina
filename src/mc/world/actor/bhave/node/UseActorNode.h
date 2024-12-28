#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class UseActorNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbeecf9;
    ::ll::UntypedStorage<1, 1> mUnk2a1fb1;
    ::ll::UntypedStorage<1, 1> mUnk2bb931;
    // NOLINTEND

public:
    // prevent constructor by default
    UseActorNode& operator=(UseActorNode const&);
    UseActorNode(UseActorNode const&);
    UseActorNode();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::BehaviorStatus tick(::Actor& owner) /*override*/;

    // vIndex: 0
    virtual ~UseActorNode() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BehaviorStatus $tick(::Actor& owner);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
