#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/ILevelBlockDestroyerProxy.h"

class LevelBlockDestroyerProxy : public ::ILevelBlockDestroyerProxy {
public:
    // prevent constructor by default
    LevelBlockDestroyerProxy& operator=(LevelBlockDestroyerProxy const&);
    LevelBlockDestroyerProxy(LevelBlockDestroyerProxy const&);
    LevelBlockDestroyerProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LevelBlockDestroyerProxy@@UEAA@XZ
    virtual ~LevelBlockDestroyerProxy() = default;

    // vIndex: 1, symbol:
    // ?sendEvents@LevelBlockDestroyerProxy@@UEAAXAEAVLevelEventManager@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual void sendEvents(class LevelEventManager&, class BlockSource&, class BlockPos const&, class Block const&);

    // vIndex: 2, symbol: ?dropResources@LevelBlockDestroyerProxy@@UEAAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual void dropResources(class BlockSource&, class BlockPos const&, class Block const&);

    // NOLINTEND
};
