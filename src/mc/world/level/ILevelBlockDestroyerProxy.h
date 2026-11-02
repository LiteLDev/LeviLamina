#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockDestroySound.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class LevelEventManager;
// clang-format on

class ILevelBlockDestroyerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILevelBlockDestroyerProxy() = default;

    virtual void sendEvents(
        ::LevelEventManager& levelEventManager,
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Block const&       block,
        ::BlockDestroySound  destroySound
    ) = 0;

    virtual void
    dropResources(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::Actor const* actorContext) = 0;
    // NOLINTEND
};
