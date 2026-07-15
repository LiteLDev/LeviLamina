#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Container;
class Level;
class Mob;
// clang-format on

namespace DispensableItemUtils {
// functions
// NOLINTBEGIN
MCAPI bool canDispenseToHumanoids(::Mob const& mob);

MCAPI bool canDispenseToNonPlayerHumanoids(::Mob const& mob);

MCAPI void spawnLoot(::Level& level, ::Actor& actor, ::std::string const& lootTable);

MCAPI bool tryDispenseEquipment(
    ::BlockSource&                            region,
    ::Container&                              container,
    int                                       slot,
    ::BlockPos                                pos,
    ::SharedTypes::Legacy::EquipmentSlot      equipmentSlot,
    ::brstd::function_ref<bool(::Mob const&)> canDispenseTo,
    bool                                      canReplaceEquipment
);
// NOLINTEND

} // namespace DispensableItemUtils
