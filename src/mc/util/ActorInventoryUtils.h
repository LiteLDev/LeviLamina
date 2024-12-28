#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/EquipmentSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemStackBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandIntegerRange;
class ItemInstance;
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

MCAPI void
forEachItemOnActorHandSlot(::Actor const& actor, ::HandSlot slot, ::std::function<void(::ItemStack const&)> callback);

MCAPI void forEachItemOnActorHotbar(
    ::Actor const&                            actor,
    ::CommandIntegerRange const&              slot,
    ::std::function<void(::ItemStack const&)> callback
);

MCAPI void forEachItemOnActorInventory(
    ::Actor const&                            actor,
    ::CommandIntegerRange const&              slot,
    ::std::function<void(::ItemStack const&)> callback
);

MCAPI ::ItemStack const* getItem(::Actor const& actor, ::SharedTypes::Legacy::EquipmentSlot equipmentSlot, int slotId);

MCAPI bool queryActorEquipmentSlotForItem(
    ::Actor const&                            actor,
    ::ItemInstance const&                     item,
    ::SharedTypes::Legacy::EquipmentSlot      equipmentSlot,
    ::CommandIntegerRange const&              slot,
    ::CommandIntegerRange const&              quantity,
    ::ItemStackBase::ComparisonOptions const& options
);

MCAPI bool queryActorForItem(
    ::Actor const&                            actor,
    ::ItemInstance const&                     item,
    ::CommandIntegerRange const&              quantity,
    ::ItemStackBase::ComparisonOptions const& options
);
// NOLINTEND

} // namespace ActorInventoryUtils
