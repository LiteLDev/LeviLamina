#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class InverterNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk486803;
    // NOLINTEND

public:
    // prevent constructor by default
    InverterNode& operator=(InverterNode const&);
    InverterNode(InverterNode const&);
    InverterNode();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::BehaviorStatus tick(::Actor& owner) /*override*/;

    // vIndex: 2
    virtual void initializeFromDefinition(::Actor& owner) /*override*/;

    // vIndex: 0
    virtual ~InverterNode() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BehaviorStatus $tick(::Actor& owner);

    MCFOLD void $initializeFromDefinition(::Actor& owner);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
