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
    // prevent constructor by default
    ILevelBlockDestroyerProxy& operator=(ILevelBlockDestroyerProxy const&);
    ILevelBlockDestroyerProxy(ILevelBlockDestroyerProxy const&);
    ILevelBlockDestroyerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILevelBlockDestroyerProxy();

    // vIndex: 1
    virtual void sendEvents(::LevelEventManager&, ::BlockSource&, ::BlockPos const&, ::Block const&) = 0;

    // vIndex: 2
    virtual void dropResources(::BlockSource&, ::BlockPos const&, ::Block const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
