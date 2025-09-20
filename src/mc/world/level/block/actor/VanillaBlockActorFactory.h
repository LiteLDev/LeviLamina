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

namespace VanillaBlockActorFactory {
// functions
// NOLINTBEGIN
MCNAPI ::std::shared_ptr<::BlockActor>
createBlockActor(::BlockActorType type, ::BlockPos const& pos, ::BlockType const& block);
// NOLINTEND

} // namespace VanillaBlockActorFactory
