#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class RepeatUntilSuccessNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd57cf2;
    ::ll::UntypedStorage<4, 4> mUnkd652a1;
    ::ll::UntypedStorage<4, 4> mUnk5f58d6;
    // NOLINTEND

public:
    // prevent constructor by default
    RepeatUntilSuccessNode& operator=(RepeatUntilSuccessNode const&);
    RepeatUntilSuccessNode(RepeatUntilSuccessNode const&);
    RepeatUntilSuccessNode();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::BehaviorStatus tick(::Actor& owner) /*override*/;

    // vIndex: 2
    virtual void initializeFromDefinition(::Actor& owner) /*override*/;

    // vIndex: 0
    virtual ~RepeatUntilSuccessNode() /*override*/;
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

    MCAPI void $initializeFromDefinition(::Actor& owner);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
