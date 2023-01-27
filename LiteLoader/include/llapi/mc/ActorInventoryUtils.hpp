/**
 * @file  ActorInventoryUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1933849084
     * @symbol  ?forEachItemInContainer\@ActorInventoryUtils\@\@YAXAEBVContainer\@\@AEBVCommandIntegerRange\@\@V?$function\@$$A6AXAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachItemInContainer(class Container const &, class CommandIntegerRange const &, class std::function<void (class ItemStack const &)>);
    /**
     * @hash   -1224121021
     * @symbol  ?forEachItemOnActor\@ActorInventoryUtils\@\@YAXAEBVActor\@\@V?$function\@$$A6AXAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachItemOnActor(class Actor const &, class std::function<void (class ItemStack const &)>);
    /**
     * @hash   -2000842155
     * @symbol  ?forEachItemOnActor\@ActorInventoryUtils\@\@YAXAEBVActor\@\@W4EquipmentSlot\@\@AEBVCommandIntegerRange\@\@V?$function\@$$A6AXAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachItemOnActor(class Actor const &, enum class EquipmentSlot, class CommandIntegerRange const &, class std::function<void (class ItemStack const &)>);
    /**
     * @hash   1643583980
     * @symbol  ?forEachItemOnActorHotbar\@ActorInventoryUtils\@\@YAXAEBVActor\@\@AEBVCommandIntegerRange\@\@V?$function\@$$A6AXAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachItemOnActorHotbar(class Actor const &, class CommandIntegerRange const &, class std::function<void (class ItemStack const &)>);
    /**
     * @hash   -2066347758
     * @symbol  ?forEachItemOnActorInventory\@ActorInventoryUtils\@\@YAXAEBVActor\@\@AEBVCommandIntegerRange\@\@V?$function\@$$A6AXAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachItemOnActorInventory(class Actor const &, class CommandIntegerRange const &, class std::function<void (class ItemStack const &)>);
    /**
     * @hash   -1998987611
     * @symbol  ?getItem\@ActorInventoryUtils\@\@YAPEBVItemStack\@\@AEBVActor\@\@W4EquipmentSlot\@\@H\@Z
     */
    MCAPI class ItemStack const * getItem(class Actor const &, enum class EquipmentSlot, int);
    /**
     * @hash   1370181606
     * @symbol  ?queryActorEquipmentSlotForItem\@ActorInventoryUtils\@\@YA_NAEBVActor\@\@AEBVItemInstance\@\@W4EquipmentSlot\@\@AEBVCommandIntegerRange\@\@3_N\@Z
     */
    MCAPI bool queryActorEquipmentSlotForItem(class Actor const &, class ItemInstance const &, enum class EquipmentSlot, class CommandIntegerRange const &, class CommandIntegerRange const &, bool);
    /**
     * @hash   -235647135
     * @symbol  ?queryActorForItem\@ActorInventoryUtils\@\@YA_NAEBVActor\@\@AEBVItemInstance\@\@AEBVCommandIntegerRange\@\@_N\@Z
     */
    MCAPI bool queryActorForItem(class Actor const &, class ItemInstance const &, class CommandIntegerRange const &, bool);

};