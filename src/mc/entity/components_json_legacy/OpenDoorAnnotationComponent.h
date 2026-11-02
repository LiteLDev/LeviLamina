#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class EntityContext;
class Mob;
// clang-format on

class OpenDoorAnnotationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::queue<::BlockPos, ::std::deque<::BlockPos>>> mPassedDoorPositions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _cleanUp(::Mob& mob);

    MCNAPI void _tryToggleDoorState(::Block const& block, ::Mob& mob, ::BlockPos const doorPos) const;

    MCNAPI void checkPath(::Mob& mob);

    MCNAPI void onComponentRemoved(::EntityContext& entity);
    // NOLINTEND
};
