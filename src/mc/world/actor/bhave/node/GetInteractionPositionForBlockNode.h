#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/facing/Name.h"
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class GetInteractionPositionForBlockNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkf1381e;
    ::ll::UntypedStorage<4, 12> mUnk1474db;
    ::ll::UntypedStorage<1, 1>  mUnke71fe1;
    ::ll::UntypedStorage<4, 4>  mUnk125f19;
    // NOLINTEND

public:
    // prevent constructor by default
    GetInteractionPositionForBlockNode& operator=(GetInteractionPositionForBlockNode const&);
    GetInteractionPositionForBlockNode(GetInteractionPositionForBlockNode const&);
    GetInteractionPositionForBlockNode();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::BehaviorStatus tick(::Actor& owner) /*override*/;

    // vIndex: 2
    virtual void initializeFromDefinition(::Actor& owner) /*override*/;

    // vIndex: 0
    virtual ~GetInteractionPositionForBlockNode() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Facing::Name parseFacingNameFromString(::std::string facingString);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
