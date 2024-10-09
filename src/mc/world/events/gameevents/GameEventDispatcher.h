#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEventDispatcher {
public:
    // prevent constructor by default
    GameEventDispatcher& operator=(GameEventDispatcher const&);
    GameEventDispatcher(GameEventDispatcher const&);
    GameEventDispatcher();

public:
    // NOLINTBEGIN
    MCAPI void post(
        class BlockSource&     region,
        class Actor*           source,
        class GameEvent const& gameEvent,
        class BlockPos const&  origin,
        class Block const*     affectedBlock
    );

    MCAPI void post(
        class BlockSource&     region,
        class Actor*           source,
        class GameEvent const& gameEvent,
        class Vec3 const&      origin,
        class Block const*     affectedBlock
    );

    // NOLINTEND
};
