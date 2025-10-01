#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class ActivateToolNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk7cb3c7;
    ::ll::UntypedStorage<8, 8>  mUnkfdd462;
    ::ll::UntypedStorage<1, 1>  mUnk191185;
    ::ll::UntypedStorage<4, 4>  mUnk3d9e37;
    ::ll::UntypedStorage<4, 4>  mUnk318957;
    ::ll::UntypedStorage<1, 1>  mUnk3b0ef6;
    // NOLINTEND

public:
    // prevent constructor by default
    ActivateToolNode& operator=(ActivateToolNode const&);
    ActivateToolNode(ActivateToolNode const&);
    ActivateToolNode();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::BehaviorStatus tick(::Actor&) /*override*/;

    // vIndex: 2
    virtual void initializeFromDefinition(::Actor& owner) /*override*/;

    // vIndex: 0
    virtual ~ActivateToolNode() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeFromDefinition(::Actor& owner);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
