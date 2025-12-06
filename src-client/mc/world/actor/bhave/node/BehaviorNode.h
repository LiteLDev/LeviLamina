#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/BehaviorTreeDefinitionPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BehaviorComponent;
class BehaviorData;
class BehaviorDefinition;
// clang-format on

class BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BehaviorDefinition const*>  mNodeDefinition;
    ::ll::TypedStorage<8, 16, ::BehaviorTreeDefinitionPtr> mTreeDefinition;
    ::ll::TypedStorage<8, 8, ::BehaviorNode*>              mParent;
    ::ll::TypedStorage<8, 8, ::BehaviorComponent*>         mComponent;
    ::ll::TypedStorage<8, 8, ::BehaviorData*>              mTreeData;
    ::ll::TypedStorage<4, 4, ::BehaviorStatus>             mStatus;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BehaviorNode();

    // vIndex: 1
    virtual ::BehaviorStatus tick(::Actor&) = 0;

    // vIndex: 2
    virtual void initializeFromDefinition(::Actor& owner);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initializeFromDefinition(::Actor& owner);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
