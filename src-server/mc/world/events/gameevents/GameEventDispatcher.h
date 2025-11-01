#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockSource;
class GameEvent;
class Vec3;
// clang-format on

class GameEventDispatcher {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void post(::BlockSource& region, ::Actor* source, ::GameEvent const& gameEvent, ::Vec3 const& originPos, ::Block const* affectedBlock);
    // NOLINTEND

};
