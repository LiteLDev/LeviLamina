#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
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
    MCAPI OpenDoorAnnotationComponent();

    MCAPI void _cleanUp(::Mob& mob);

    MCAPI void _tryToggleDoorState(::Block const& block, ::Mob& mob, ::BlockPos doorPos) const;

    MCAPI void checkPath(::Mob& mob);

    MCAPI void initFromDefinition(::Actor& owner);

    MCAPI void onComponentRemoved(::EntityContext& entity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND
};
