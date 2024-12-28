#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class GameEvent;
class Vec3;
// clang-format on

class GameEventDispatcher {
public:
    // prevent constructor by default
    GameEventDispatcher& operator=(GameEventDispatcher const&);
    GameEventDispatcher(GameEventDispatcher const&);
    GameEventDispatcher();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void post(
        ::BlockSource&     region,
        ::Actor*           source,
        ::GameEvent const& gameEvent,
        ::Vec3 const&      originPos,
        ::Block const*     affectedBlock
    );

    MCAPI void post(
        ::BlockSource&     region,
        ::Actor*           source,
        ::GameEvent const& gameEvent,
        ::BlockPos const&  originPos,
        ::Block const*     affectedBlock
    );
    // NOLINTEND
};
