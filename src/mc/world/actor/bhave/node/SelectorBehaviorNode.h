#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class SelectorBehaviorNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1fcce1;
    ::ll::UntypedStorage<8, 8> mUnk2d572e;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectorBehaviorNode& operator=(SelectorBehaviorNode const&);
    SelectorBehaviorNode(SelectorBehaviorNode const&);
    SelectorBehaviorNode();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BehaviorStatus tick(::Actor&) /*override*/;

    virtual void initializeFromDefinition(::Actor& owner) /*override*/;

    virtual ~SelectorBehaviorNode() /*override*/ = default;
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
