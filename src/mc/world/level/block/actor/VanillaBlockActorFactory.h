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

namespace VanillaBlockActorFactory {
// functions
// NOLINTBEGIN
MCAPI ::std::shared_ptr<::BlockActor>
createBlockActor(::BlockActorType type, ::BlockPos const& pos, ::BlockLegacy const& block);
// NOLINTEND

} // namespace VanillaBlockActorFactory
