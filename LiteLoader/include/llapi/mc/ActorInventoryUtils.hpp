/**
 * @file  ActorInventoryUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ActorInventoryUtils.
 *
 */
namespace ActorInventoryUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   -165083645
     * @symbol ?forEachItemOnActor@ActorInventoryUtils@@YAXAEBVActor@@V?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
     */
    MCAPI void forEachItemOnActor(class Actor const &, class std::function<void (class ItemStack const &)>);
    /**
     * @hash   -941620267
     * @symbol ?forEachItemOnActor@ActorInventoryUtils@@YAXAEBVActor@@W4EquipmentSlot@@AEBVCommandIntegerRange@@V?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
     */
    MCAPI void forEachItemOnActor(class Actor const &, enum EquipmentSlot, class CommandIntegerRange const &, class std::function<void (class ItemStack const &)>);
    /**
     * @hash   -1592284436
     * @symbol ?forEachItemOnActorHotbar@ActorInventoryUtils@@YAXAEBVActor@@AEBVCommandIntegerRange@@V?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
     */
    MCAPI void forEachItemOnActorHotbar(class Actor const &, class CommandIntegerRange const &, class std::function<void (class ItemStack const &)>);
    /**
     * @hash   -1007264254
     * @symbol ?forEachItemOnActorInventory@ActorInventoryUtils@@YAXAEBVActor@@AEBVCommandIntegerRange@@V?$function@$$A6AXAEBVItemStack@@@Z@std@@@Z
     */
    MCAPI void forEachItemOnActorInventory(class Actor const &, class CommandIntegerRange const &, class std::function<void (class ItemStack const &)>);
    /**
     * @hash   -939919483
     * @symbol ?getItem@ActorInventoryUtils@@YAPEBVItemStack@@AEBVActor@@W4EquipmentSlot@@H@Z
     */
    MCAPI class ItemStack const * getItem(class Actor const &, enum EquipmentSlot, int);
    /**
     * @hash   -306927057
     * @symbol ?queryActorEquipmentSlotForItem@ActorInventoryUtils@@YA_NAEBVActor@@AEBVItemInstance@@W4EquipmentSlot@@AEBVCommandIntegerRange@@3@Z
     */
    MCAPI bool queryActorEquipmentSlotForItem(class Actor const &, class ItemInstance const &, enum EquipmentSlot, class CommandIntegerRange const &, class CommandIntegerRange const &);
    /**
     * @hash   -1766092552
     * @symbol ?queryActorForItem@ActorInventoryUtils@@YA_NAEBVActor@@AEBVItemInstance@@AEBVCommandIntegerRange@@@Z
     */
    MCAPI bool queryActorForItem(class Actor const &, class ItemInstance const &, class CommandIntegerRange const &);

};