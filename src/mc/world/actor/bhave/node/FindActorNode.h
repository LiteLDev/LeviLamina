#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class FindActorNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkfbc192;
    ::ll::UntypedStorage<4, 4> mUnk97787e;
    // NOLINTEND

public:
    // prevent constructor by default
    FindActorNode& operator=(FindActorNode const&);
    FindActorNode(FindActorNode const&);
    FindActorNode();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BehaviorStatus tick(::Actor& owner) /*override*/;

    virtual void initializeFromDefinition(::Actor& owner) /*override*/;

    virtual ~FindActorNode() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeFromDefinition(::Actor& owner);

#ifdef LL_PLAT_C
    MCNAPI ::BehaviorStatus $tick(::Actor& owner);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
