#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/world/item/ItemStackBase.h"

namespace ActorInventoryUtils {
// NOLINTBEGIN
// symbol:
// ?forEachItemInContainer@ActorInventoryUtils@@YAXAEBVContainer@@AEBVCommandIntegerRange@@V?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
MCAPI void
forEachItemInContainer(class Container const&, class CommandIntegerRange const&, std::function<void(class ItemStack const&)>);

// symbol: ?forEachItemOnActor@ActorInventoryUtils@@YAXAEBVActor@@V?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
MCAPI void forEachItemOnActor(class Actor const&, std::function<void(class ItemStack const&)>);

// symbol:
// ?forEachItemOnActor@ActorInventoryUtils@@YAXAEBVActor@@W4EquipmentSlot@Legacy@Puv@@AEBVCommandIntegerRange@@V?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
MCAPI void
forEachItemOnActor(class Actor const&, ::Puv::Legacy::EquipmentSlot, class CommandIntegerRange const&, std::function<void(class ItemStack const&)>);

// symbol:
// ?forEachItemOnActorHotbar@ActorInventoryUtils@@YAXAEBVActor@@AEBVCommandIntegerRange@@V?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
MCAPI void
forEachItemOnActorHotbar(class Actor const&, class CommandIntegerRange const&, std::function<void(class ItemStack const&)>);

// symbol:
// ?forEachItemOnActorInventory@ActorInventoryUtils@@YAXAEBVActor@@AEBVCommandIntegerRange@@V?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
MCAPI void
forEachItemOnActorInventory(class Actor const&, class CommandIntegerRange const&, std::function<void(class ItemStack const&)>);

// symbol: ?getItem@ActorInventoryUtils@@YAPEBVItemStack@@AEBVActor@@W4EquipmentSlot@Legacy@Puv@@H@Z
MCAPI class ItemStack const* getItem(class Actor const&, ::Puv::Legacy::EquipmentSlot, int);

// symbol:
// ?queryActorEquipmentSlotForItem@ActorInventoryUtils@@YA_NAEBVActor@@AEBVItemInstance@@W4EquipmentSlot@Legacy@Puv@@AEBVCommandIntegerRange@@3AEBUComparisonOptions@ItemStackBase@@@Z
MCAPI bool
queryActorEquipmentSlotForItem(class Actor const&, class ItemInstance const&, ::Puv::Legacy::EquipmentSlot, class CommandIntegerRange const&, class CommandIntegerRange const&, struct ItemStackBase::ComparisonOptions const&);

// symbol:
// ?queryActorForItem@ActorInventoryUtils@@YA_NAEBVActor@@AEBVItemInstance@@AEBVCommandIntegerRange@@AEBUComparisonOptions@ItemStackBase@@@Z
MCAPI bool
queryActorForItem(class Actor const&, class ItemInstance const&, class CommandIntegerRange const&, struct ItemStackBase::ComparisonOptions const&);
// NOLINTEND

}; // namespace ActorInventoryUtils
