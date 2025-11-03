#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorData.h"
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/BehaviorTreeDefinitionPtr.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class SubtreeNode : public ::BehaviorNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::BehaviorTreeDefinitionPtr>      mSubtreePtr;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BehaviorNode>> mSubtreeHead;
    ::ll::TypedStorage<8, 88, ::BehaviorData>                   mSubtreeData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::BehaviorStatus tick(::Actor&) /*override*/;

    // vIndex: 2
    virtual void initializeFromDefinition(::Actor& owner) /*override*/;

    // vIndex: 0
    virtual ~SubtreeNode() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeFromDefinition(::Actor& owner);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
