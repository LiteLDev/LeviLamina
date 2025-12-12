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

    virtual void sendEvents(::LevelEventManager&, ::BlockSource&, ::BlockPos const&, ::Block const&) = 0;

    virtual void dropResources(::BlockSource&, ::BlockPos const&, ::Block const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
