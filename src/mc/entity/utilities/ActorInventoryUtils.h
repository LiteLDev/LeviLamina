#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/world/item/ItemStackBase.h"

namespace ActorInventoryUtils {
// NOLINTBEGIN
MCAPI void forEachItemInContainer(
    class Container const&                      container,
    class CommandIntegerRange const&            slot,
    std::function<void(class ItemStack const&)> callback
);

MCAPI void forEachItemOnActor(class Actor const& actor, std::function<void(class ItemStack const&)> callback);

MCAPI void forEachItemOnActor(
    class Actor const&                          actor,
    ::Puv::Legacy::EquipmentSlot                equipmentSlot,
    class CommandIntegerRange const&            slot,
    std::function<void(class ItemStack const&)> callback
);

MCAPI void forEachItemOnActorHotbar(
    class Actor const&                          actor,
    class CommandIntegerRange const&            slot,
    std::function<void(class ItemStack const&)> callback
);

MCAPI void forEachItemOnActorInventory(
    class Actor const&                          actor,
    class CommandIntegerRange const&            slot,
    std::function<void(class ItemStack const&)> callback
);

MCAPI class ItemStack const* getItem(class Actor const&, ::Puv::Legacy::EquipmentSlot, int);

MCAPI bool queryActorEquipmentSlotForItem(
    class Actor const&                             actor,
    class ItemInstance const&                      item,
    ::Puv::Legacy::EquipmentSlot                   equipmentSlot,
    class CommandIntegerRange const&               slot,
    class CommandIntegerRange const&               quantity,
    struct ItemStackBase::ComparisonOptions const& options
);

MCAPI bool queryActorForItem(
    class Actor const&                             actor,
    class ItemInstance const&                      item,
    class CommandIntegerRange const&               quantity,
    struct ItemStackBase::ComparisonOptions const& options
);
// NOLINTEND

}; // namespace ActorInventoryUtils
