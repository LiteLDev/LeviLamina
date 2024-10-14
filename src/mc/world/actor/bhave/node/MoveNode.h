#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class MoveNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    MoveNode& operator=(MoveNode const&);
    MoveNode(MoveNode const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveNode() = default;

    // vIndex: 1
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2
    virtual void initializeFromDefinition(class Actor& owner);

    MCAPI MoveNode();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI uchar convertDirectionStringToKeyPress(std::string directionString);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void initializeFromDefinition$(class Actor& owner);

    MCAPI ::BehaviorStatus tick$(class Actor& owner);

    // NOLINTEND
};
