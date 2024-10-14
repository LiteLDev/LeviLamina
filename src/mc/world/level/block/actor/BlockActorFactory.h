#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorType.h"

class BlockActorFactory {
public:
    // prevent constructor by default
    BlockActorFactory& operator=(BlockActorFactory const&);
    BlockActorFactory(BlockActorFactory const&);
    BlockActorFactory();

public:
    // NOLINTBEGIN
    MCAPI static std::shared_ptr<class BlockActor>
    createBlockEntity(::BlockActorType type, class BlockPos const& pos, class BlockLegacy const& block);

    MCAPI static void flushCustomBlockEntityCreationCallbacks();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::vector<
        std::pair<::BlockActorType, std::function<std::shared_ptr<class BlockActor>(class BlockPos const&)>>>&
    mCustomBlockEntityCreation();

    // NOLINTEND
};
