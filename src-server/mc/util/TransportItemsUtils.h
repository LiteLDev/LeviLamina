#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/ChestBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Mob;
struct TransportItemsGoalSettings;
// clang-format on

namespace TransportItemsUtils {
// functions
// NOLINTBEGIN
MCNAPI bool isValidTargetContainer(::Mob const& mob, ::BlockPos const& targetPosition, ::TransportItemsGoalSettings const& settings);

MCNAPI ::std::weak_ptr<::ChestBlockActor::ChestCloser> openContainer(::Mob& mob, ::BlockPos const& targetContainerPosition);

MCNAPI bool tryPutItem(::Mob& mob, ::BlockPos const& targetContainerPosition, ::TransportItemsGoalSettings const& settings, bool dryRun);

MCNAPI bool tryTakeItem(::Mob& mob, ::BlockPos const& targetContainerPosition, ::TransportItemsGoalSettings const& settings, bool dryRun);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::Bedrock::EnumSet<::BlockActorType, 61> const& VALID_DESTINATION_BLOCKACTOR_TYPES();

MCNAPI ::Bedrock::EnumSet<::BlockActorType, 61> const& VALID_SOURCE_BLOCKACTOR_TYPES();
// NOLINTEND

}
