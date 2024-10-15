#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Facing.h"
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class GetInteractionPositionForBlockNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    GetInteractionPositionForBlockNode& operator=(GetInteractionPositionForBlockNode const&);
    GetInteractionPositionForBlockNode(GetInteractionPositionForBlockNode const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetInteractionPositionForBlockNode() = default;

    // vIndex: 1
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2
    virtual void initializeFromDefinition(class Actor& owner);

    MCAPI GetInteractionPositionForBlockNode();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI ::Facing::Name parseFacingNameFromString(std::string facingString);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void initializeFromDefinition$(class Actor& owner);

    MCAPI ::BehaviorStatus tick$(class Actor& owner);

    // NOLINTEND
};
