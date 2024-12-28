#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockLegacy;
class BlockPos;
// clang-format on

class BlockActorFactory {
public:
    // prevent constructor by default
    BlockActorFactory& operator=(BlockActorFactory const&);
    BlockActorFactory(BlockActorFactory const&);
    BlockActorFactory();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::shared_ptr<::BlockActor>
    createBlockEntity(::BlockActorType type, ::BlockPos const& pos, ::BlockLegacy const& block);

    MCAPI static void flushCustomBlockEntityCreationCallbacks();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<
        ::std::pair<::BlockActorType, ::std::function<::std::shared_ptr<::BlockActor>(::BlockPos const&)>>>&
    mCustomBlockEntityCreation();
    // NOLINTEND
};
