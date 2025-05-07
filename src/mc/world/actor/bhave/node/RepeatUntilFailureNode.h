#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class RepeatUntilFailureNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2ac7a0;
    // NOLINTEND

public:
    // prevent constructor by default
    RepeatUntilFailureNode& operator=(RepeatUntilFailureNode const&);
    RepeatUntilFailureNode(RepeatUntilFailureNode const&);
    RepeatUntilFailureNode();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::BehaviorStatus tick(::Actor& owner) /*override*/;

    // vIndex: 2
    virtual void initializeFromDefinition(::Actor& owner) /*override*/;

    // vIndex: 0
    virtual ~RepeatUntilFailureNode() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BehaviorStatus $tick(::Actor& owner);

    MCNAPI void $initializeFromDefinition(::Actor& owner);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
