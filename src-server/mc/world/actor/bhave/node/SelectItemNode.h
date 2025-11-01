#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class SelectItemNode : public ::BehaviorNode {
public:
    // SelectItemNode inner types define
    enum class State : int {
        Preconditions      = 0,
        MoveToolToHotbar   = 1,
        SelectToolInHotbar = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4f414e;
    ::ll::UntypedStorage<8, 8>  mUnkd2abbc;
    ::ll::UntypedStorage<4, 4>  mUnk2461f1;
    ::ll::UntypedStorage<4, 4>  mUnkc6056d;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectItemNode& operator=(SelectItemNode const&);
    SelectItemNode(SelectItemNode const&);
    SelectItemNode();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::BehaviorStatus tick(::Actor&) /*override*/;

    // vIndex: 2
    virtual void initializeFromDefinition(::Actor& owner) /*override*/;

    // vIndex: 0
    virtual ~SelectItemNode() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
