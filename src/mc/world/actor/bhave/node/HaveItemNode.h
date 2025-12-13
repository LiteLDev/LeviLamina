#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class HaveItemNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk21f05a;
    ::ll::UntypedStorage<4, 4>  mUnkbb1f85;
    // NOLINTEND

public:
    // prevent constructor by default
    HaveItemNode& operator=(HaveItemNode const&);
    HaveItemNode(HaveItemNode const&);
    HaveItemNode();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BehaviorStatus tick(::Actor&) /*override*/;

    virtual void initializeFromDefinition(::Actor& owner) /*override*/;

    virtual ~HaveItemNode() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
