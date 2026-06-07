#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class BlockType;
// clang-format on

namespace BlockActorFactory {
// functions
// NOLINTBEGIN
MCAPI void clearBlockActorCreationFunction();

MCAPI ::std::shared_ptr<::BlockActor>
createBlockActor(::BlockActorType type, ::BlockPos const& pos, ::BlockType const& block);

MCAPI void setBlockActorCreationFunction(
    ::std::function<::std::shared_ptr<::BlockActor>(::BlockActorType, ::BlockPos const&, ::BlockType const&)> function
);
// NOLINTEND

} // namespace BlockActorFactory
