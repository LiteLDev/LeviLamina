#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EquippableComponent {

public:
    // prevent constructor by default
    EquippableComponent& operator=(EquippableComponent const&) = delete;
    EquippableComponent(EquippableComponent const&)            = delete;
    EquippableComponent()                                      = delete;

public:
    /**
     * @symbol ??0EquippableComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI EquippableComponent(class EquippableComponent&&); // NOLINT
    /**
     * @symbol ?createDataPacket\@EquippableComponent\@\@QEBA?AVUpdateEquipPacket\@\@AEAVActor\@\@W4ContainerID\@\@\@Z
     */
    MCAPI class UpdateEquipPacket createDataPacket(class Actor&, enum class ContainerID) const; // NOLINT
    /**
     * @symbol
     * ?createTag\@EquippableComponent\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEAVActor\@\@\@Z
     */
    MCAPI std::unique_ptr<class CompoundTag> createTag(class Actor&) const; // NOLINT
    /**
     * @symbol ?getSlotCount\@EquippableComponent\@\@QEBAHXZ
     */
    MCAPI int getSlotCount() const; // NOLINT
    /**
     * @symbol ?hasSlotAllowedItems\@EquippableComponent\@\@QEBA_NH\@Z
     */
    MCAPI bool hasSlotAllowedItems(int) const; // NOLINT
    /**
     * @symbol ?onItemChanged\@EquippableComponent\@\@QEBA_NAEAVActor\@\@_KAEBVItemStack\@\@\@Z
     */
    MCAPI bool onItemChanged(class Actor&, unsigned __int64, class ItemStack const&) const; // NOLINT
    /**
     * @symbol ??4EquippableComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class EquippableComponent& operator=(class EquippableComponent&&); // NOLINT
    /**
     * @symbol
     * ?tryGetSlotAllowedItems\@EquippableComponent\@\@QEBAPEBV?$vector\@VItemDescriptor\@\@V?$allocator\@VItemDescriptor\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI std::vector<class ItemDescriptor> const* tryGetSlotAllowedItems(int) const; // NOLINT
    /**
     * @symbol ??1EquippableComponent\@\@QEAA\@XZ
     */
    MCAPI ~EquippableComponent(); // NOLINT
};
