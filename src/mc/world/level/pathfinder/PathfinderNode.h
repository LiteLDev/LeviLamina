#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/pathfinder/NodeType.h"

class PathfinderNode {
public:
    // prevent constructor by default
    PathfinderNode& operator=(PathfinderNode const&);
    PathfinderNode();

public:
    // NOLINTBEGIN
    MCAPI PathfinderNode(class PathfinderNode const& node);

    MCAPI PathfinderNode(class BlockPos const& pos, ::NodeType type);

    MCAPI float distanceTo(class PathfinderNode* to) const;

    MCAPI float distanceToSqr(class PathfinderNode* to) const;

    MCAPI bool equals(class PathfinderNode* o);

    MCAPI float getCostMalus() const;

    MCAPI ::NodeType getType() const;

    MCAPI bool inOpenSet();

    MCAPI void setCostMalus(float costMalus);

    MCAPI void setMoveMalus(float moveMalus);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
