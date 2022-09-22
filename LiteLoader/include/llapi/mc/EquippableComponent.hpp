/**
 * @file  EquippableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EquippableComponent.
 *
 */
class EquippableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EQUIPPABLECOMPONENT
public:
    class EquippableComponent& operator=(class EquippableComponent const &) = delete;
    EquippableComponent(class EquippableComponent const &) = delete;
    EquippableComponent() = delete;
#endif

public:
    /**
     * @hash   -1306601761
     * @symbol ??0EquippableComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI EquippableComponent(class EquippableComponent &&);
    /**
     * @hash   244476938
     * @symbol ?createDataPacket@EquippableComponent@@QEBA?AVUpdateEquipPacket@@AEAVActor@@W4ContainerID@@@Z
     */
    MCAPI class UpdateEquipPacket createDataPacket(class Actor &, enum ContainerID) const;
    /**
     * @hash   463368897
     * @symbol ?createTag@EquippableComponent@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAVActor@@@Z
     */
    MCAPI std::unique_ptr<class CompoundTag> createTag(class Actor &) const;
    /**
     * @hash   -1869318708
     * @symbol ?getSlotCount@EquippableComponent@@QEBAHXZ
     */
    MCAPI int getSlotCount() const;
    /**
     * @hash   -1399450447
     * @symbol ?hasSlotAllowedItems@EquippableComponent@@QEBA_NH@Z
     */
    MCAPI bool hasSlotAllowedItems(int) const;
    /**
     * @hash   -1450155148
     * @symbol ?onItemChanged@EquippableComponent@@QEBA_NAEAVActor@@_KAEBVItemStack@@@Z
     */
    MCAPI bool onItemChanged(class Actor &, unsigned __int64, class ItemStack const &) const;
    /**
     * @hash   1741485866
     * @symbol ??4EquippableComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class EquippableComponent & operator=(class EquippableComponent &&);
    /**
     * @hash   780152968
     * @symbol ?tryGetSlotAllowedItems@EquippableComponent@@QEBAPEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@H@Z
     */
    MCAPI std::vector<class ItemDescriptor> const * tryGetSlotAllowedItems(int) const;
    /**
     * @hash   -1600865185
     * @symbol ??1EquippableComponent@@QEAA@XZ
     */
    MCAPI ~EquippableComponent();

};