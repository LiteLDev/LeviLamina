#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class MoveNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk713d75;
    ::ll::UntypedStorage<1, 1> mUnk7392f0;
    ::ll::UntypedStorage<4, 4> mUnk1a598c;
    ::ll::UntypedStorage<4, 4> mUnk2a2c4e;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveNode& operator=(MoveNode const&);
    MoveNode(MoveNode const&);
    MoveNode();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BehaviorStatus tick(::Actor& owner) /*override*/;

    virtual void initializeFromDefinition(::Actor& owner) /*override*/;

    virtual ~MoveNode() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uchar convertDirectionStringToKeyPress(::std::string directionString);
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
