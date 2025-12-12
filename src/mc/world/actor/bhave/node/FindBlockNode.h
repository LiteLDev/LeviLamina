#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class FindBlockNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkfd3848;
    ::ll::UntypedStorage<4, 4> mUnkd3f1cd;
    ::ll::UntypedStorage<1, 1> mUnka0407a;
    // NOLINTEND

public:
    // prevent constructor by default
    FindBlockNode& operator=(FindBlockNode const&);
    FindBlockNode(FindBlockNode const&);
    FindBlockNode();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BehaviorStatus tick(::Actor& owner) /*override*/;

    virtual void initializeFromDefinition(::Actor& owner) /*override*/;

    virtual ~FindBlockNode() /*override*/ = default;
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
