#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class BreakBlockNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk9670f9;
    ::ll::UntypedStorage<4, 4> mUnkf77837;
    ::ll::UntypedStorage<8, 8> mUnkff8a88;
    ::ll::UntypedStorage<4, 4> mUnk2c6c6e;
    ::ll::UntypedStorage<1, 1> mUnkd6f534;
    // NOLINTEND

public:
    // prevent constructor by default
    BreakBlockNode& operator=(BreakBlockNode const&);
    BreakBlockNode(BreakBlockNode const&);
    BreakBlockNode();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::BehaviorStatus tick(::Actor&) /*override*/;

    // vIndex: 2
    virtual void initializeFromDefinition(::Actor& owner) /*override*/;

    // vIndex: 0
    virtual ~BreakBlockNode() /*override*/ = default;
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
