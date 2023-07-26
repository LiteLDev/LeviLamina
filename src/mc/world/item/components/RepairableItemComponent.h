#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RepairableItemComponent {

public:
    // prevent constructor by default
    RepairableItemComponent& operator=(RepairableItemComponent const&) = delete;
    RepairableItemComponent(RepairableItemComponent const&)            = delete;
    RepairableItemComponent()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?isNetworkComponent\@?$NetworkedItemComponent\@VRepairableItemComponent\@\@\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?buildNetworkTag\@?$NetworkedItemComponent\@VRepairableItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?initializeFromNetwork\@?$NetworkedItemComponent\@VRepairableItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?handleItemRepair\@RepairableItemComponent\@\@QEBA?AURepairItemResult\@\@AEAVItemStack\@\@0_N\@Z
     */
    MCAPI struct RepairItemResult handleItemRepair(class ItemStack&, class ItemStack&, bool) const; // NOLINT
    /**
     * @symbol ?isValidRepairItem\@RepairableItemComponent\@\@QEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI bool isValidRepairItem(class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol ?bindType\@RepairableItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol ?getIdentifier\@RepairableItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier(); // NOLINT
    /**
     * @symbol ?registerVersionUpgrades\@RepairableItemComponent\@\@SAXAEAVCerealSchemaUpgradeSet\@\@\@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet&); // NOLINT

    // private:
    /**
     * @symbol ?_getRepairItemEntry\@RepairableItemComponent\@\@AEBAPEBURepairItemEntry\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI struct RepairItemEntry const* _getRepairItemEntry(class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol ?_repairItem\@RepairableItemComponent\@\@AEBAHAEAVItemStackBase\@\@0VExpressionNode\@\@\@Z
     */
    MCAPI int _repairItem(class ItemStackBase&, class ItemStackBase&, class ExpressionNode) const; // NOLINT

private:
};
