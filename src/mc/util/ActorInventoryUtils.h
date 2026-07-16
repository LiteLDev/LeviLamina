#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandIntegerRange;
class ItemStack;
// clang-format on

namespace ActorInventoryUtils {
// functions
// NOLINTBEGIN
MCAPI void forEachItemOnActor(::Actor const& actor, ::std::function<void(::ItemStack const&)> callback);

MCAPI void forEachItemOnActor(
    ::Actor const&                            actor,
    ::SharedTypes::Legacy::EquipmentSlot      equipmentSlot,
    ::CommandIntegerRange const&              slot,
    ::std::function<void(::ItemStack const&)> callback
);

MCAPI ::ItemStack const* getItem(::Actor const& actor, ::SharedTypes::Legacy::EquipmentSlot equipmentSlot, int slotId);
// NOLINTEND

} // namespace ActorInventoryUtils
