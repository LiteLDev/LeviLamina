#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
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
    MCAPI void checkPath(::Mob& mob);

    MCAPI void onComponentRemoved(::EntityContext& entity);
    // NOLINTEND
};
