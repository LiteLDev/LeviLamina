#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/world/item/ItemStackBase.h"

namespace ActorInventoryUtils {
// NOLINTBEGIN
// symbol:
// ?forEachItemInContainer@ActorInventoryUtils@@YAXAEBVContainer@@AEBVCommandIntegerRange@@V?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
MCAPI void forEachItemInContainer(
    class Container const&                      container,
    class CommandIntegerRange const&            slot,
    std::function<void(class ItemStack const&)> callback
);

// symbol: ?forEachItemOnActor@ActorInventoryUtils@@YAXAEBVActor@@V?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
MCAPI void forEachItemOnActor(class Actor const& actor, std::function<void(class ItemStack const&)> callback);

// symbol:
// ?forEachItemOnActor@ActorInventoryUtils@@YAXAEBVActor@@W4EquipmentSlot@Legacy@Puv@@AEBVCommandIntegerRange@@V?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
MCAPI void forEachItemOnActor(
    class Actor const&                          actor,
    ::Puv::Legacy::EquipmentSlot                equipmentSlot,
    class CommandIntegerRange const&            slot,
    std::function<void(class ItemStack const&)> callback
);

// symbol:
// ?forEachItemOnActorHotbar@ActorInventoryUtils@@YAXAEBVActor@@AEBVCommandIntegerRange@@V?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
MCAPI void forEachItemOnActorHotbar(
    class Actor const&                          actor,
    class CommandIntegerRange const&            slot,
    std::function<void(class ItemStack const&)> callback
);

// symbol:
// ?forEachItemOnActorInventory@ActorInventoryUtils@@YAXAEBVActor@@AEBVCommandIntegerRange@@V?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
MCAPI void forEachItemOnActorInventory(
    class Actor const&                          actor,
    class CommandIntegerRange const&            slot,
    std::function<void(class ItemStack const&)> callback
);

// symbol: ?getItem@ActorInventoryUtils@@YAPEBVItemStack@@AEBVActor@@W4EquipmentSlot@Legacy@Puv@@H@Z
MCAPI class ItemStack const* getItem(class Actor const&, ::Puv::Legacy::EquipmentSlot, int);

// symbol:
// ?queryActorEquipmentSlotForItem@ActorInventoryUtils@@YA_NAEBVActor@@AEBVItemInstance@@W4EquipmentSlot@Legacy@Puv@@AEBVCommandIntegerRange@@3AEBUComparisonOptions@ItemStackBase@@@Z
MCAPI bool queryActorEquipmentSlotForItem(
    class Actor const&                             actor,
    class ItemInstance const&                      item,
    ::Puv::Legacy::EquipmentSlot                   equipmentSlot,
    class CommandIntegerRange const&               slot,
    class CommandIntegerRange const&               quantity,
    struct ItemStackBase::ComparisonOptions const& options
);

// symbol:
// ?queryActorForItem@ActorInventoryUtils@@YA_NAEBVActor@@AEBVItemInstance@@AEBVCommandIntegerRange@@AEBUComparisonOptions@ItemStackBase@@@Z
MCAPI bool queryActorForItem(
    class Actor const&                             actor,
    class ItemInstance const&                      item,
    class CommandIntegerRange const&               quantity,
    struct ItemStackBase::ComparisonOptions const& options
);
// NOLINTEND

}; // namespace ActorInventoryUtils
