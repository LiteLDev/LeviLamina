#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/EquipmentSlot.h"
#include "mc/world/item/HandSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandIntegerRange;
class ItemStack;
// clang-format on

namespace ActorInventoryUtils {
// functions
// NOLINTBEGIN
MCNAPI void forEachItemOnActor(::Actor const& actor, ::std::function<void(::ItemStack const&)> callback);

MCNAPI void forEachItemOnActor(::Actor const& actor, ::SharedTypes::Legacy::EquipmentSlot equipmentSlot, ::CommandIntegerRange const& slot, ::std::function<void(::ItemStack const&)> callback);

MCNAPI void forEachItemOnActorChest(::Actor const& actor, ::CommandIntegerRange const& slot, ::std::function<void(::ItemStack const&)> callback);

MCNAPI void forEachItemOnActorEnderChest(::Actor const& actor, ::CommandIntegerRange const& slot, ::std::function<void(::ItemStack const&)> callback);

MCNAPI void forEachItemOnActorHandSlot(::Actor const& actor, ::HandSlot slot, ::std::function<void(::ItemStack const&)> callback);

MCNAPI void forEachItemOnActorHotbar(::Actor const& actor, ::CommandIntegerRange const& slot, ::std::function<void(::ItemStack const&)> callback);

MCNAPI void forEachItemOnActorInventory(::Actor const& actor, ::CommandIntegerRange const& slot, ::std::function<void(::ItemStack const&)> callback);

MCNAPI ::ItemStack const* getItem(::Actor const& actor, ::SharedTypes::Legacy::EquipmentSlot equipmentSlot, int slotId);
// NOLINTEND

}
