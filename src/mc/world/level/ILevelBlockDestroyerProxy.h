#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
        ::Block const&       block
    ) = 0;

    virtual void dropResources(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
