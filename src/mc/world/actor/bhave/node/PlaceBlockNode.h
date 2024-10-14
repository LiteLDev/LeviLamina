#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class PlaceBlockNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    PlaceBlockNode& operator=(PlaceBlockNode const&);
    PlaceBlockNode(PlaceBlockNode const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlaceBlockNode() = default;

    // vIndex: 1
    virtual ::BehaviorStatus tick(class Actor& owner);

    MCAPI PlaceBlockNode();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI ::BehaviorStatus tick$(class Actor& owner);

    // NOLINTEND
};
