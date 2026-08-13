#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Player;
namespace SculkShriekerBlockActorInternal { struct NearbyPlayer; }
// clang-format on

namespace SculkShriekerBlockActorInternal {
// functions
// NOLINTBEGIN
MCAPI ::std::vector<::SculkShriekerBlockActorInternal::NearbyPlayer>
_getNearbyPlayers(::BlockSource& region, ::BlockPos pos, float radius, ::Actor const* except);

MCAPI void _shriek(::BlockSource& region, ::BlockPos pos, ::Player& provokingPlayer);
// NOLINTEND

} // namespace SculkShriekerBlockActorInternal
