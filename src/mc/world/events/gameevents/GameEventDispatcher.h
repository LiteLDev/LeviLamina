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
    // symbol: ?post@GameEventDispatcher@@QEAAXAEAVBlockSource@@PEAVActor@@AEBVGameEvent@@AEBVBlockPos@@PEBVBlock@@@Z
    MCAPI void post(
        class BlockSource& region,
        class Actor*       source,
        class GameEvent const&,
        class BlockPos const& origin,
        class Block const*    affectedBlock
    );

    // symbol: ?post@GameEventDispatcher@@QEAAXAEAVBlockSource@@PEAVActor@@AEBVGameEvent@@AEBVVec3@@PEBVBlock@@@Z
    MCAPI void post(
        class BlockSource& region,
        class Actor*       source,
        class GameEvent const&,
        class Vec3 const&  origin,
        class Block const* affectedBlock
    );

    // NOLINTEND
};
