#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockActorType.h"

class BlockActorFactory {
public:
    // prevent constructor by default
    BlockActorFactory& operator=(BlockActorFactory const&);
    BlockActorFactory(BlockActorFactory const&);
    BlockActorFactory();

public:
    // NOLINTBEGIN
    // symbol:
    // ?createBlockEntity@BlockActorFactory@@SA?AV?$shared_ptr@VBlockActor@@@std@@W4BlockActorType@@AEBVBlockPos@@AEBVBlockLegacy@@@Z
    MCAPI static std::shared_ptr<class BlockActor>
    createBlockEntity(::BlockActorType type, class BlockPos const& pos, class BlockLegacy const& block);

    // symbol: ?flushCustomBlockEntityCreationCallbacks@BlockActorFactory@@SAXXZ
    MCAPI static void flushCustomBlockEntityCreationCallbacks();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mCustomBlockEntityCreation@BlockActorFactory@@0V?$vector@U?$pair@W4BlockActorType@@V?$function@$$A6A?AV?$shared_ptr@VBlockActor@@@std@@AEBVBlockPos@@@Z@std@@@std@@V?$allocator@U?$pair@W4BlockActorType@@V?$function@$$A6A?AV?$shared_ptr@VBlockActor@@@std@@AEBVBlockPos@@@Z@std@@@std@@@2@@std@@A
    MCAPI static std::vector<
        std::pair<::BlockActorType, std::function<std::shared_ptr<class BlockActor>(class BlockPos const&)>>>
        mCustomBlockEntityCreation;

    // NOLINTEND
};
