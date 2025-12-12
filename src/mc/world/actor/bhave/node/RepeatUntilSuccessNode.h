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
    virtual ::BehaviorStatus tick(::Actor& owner) /*override*/;

    virtual void initializeFromDefinition(::Actor& owner) /*override*/;

    virtual ~RepeatUntilSuccessNode() /*override*/ = default;
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
