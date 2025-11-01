#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class ConsumeItemNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk918960;
    ::ll::UntypedStorage<4, 4> mUnk7048e8;
    ::ll::UntypedStorage<4, 4> mUnk3b8c4c;
    // NOLINTEND

public:
    // prevent constructor by default
    ConsumeItemNode& operator=(ConsumeItemNode const&);
    ConsumeItemNode(ConsumeItemNode const&);
    ConsumeItemNode();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::BehaviorStatus tick(::Actor&) /*override*/;

    // vIndex: 0
    virtual ~ConsumeItemNode() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
