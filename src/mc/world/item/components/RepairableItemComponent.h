#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RepairableItemComponent {

public:
    // prevent constructor by default
    RepairableItemComponent& operator=(RepairableItemComponent const&) = delete;
    RepairableItemComponent(RepairableItemComponent const&)            = delete;
    RepairableItemComponent()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isNetworkComponent\@?$NetworkedItemComponent\@VRepairableItemComponent\@\@\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol
     * ?buildNetworkTag\@?$NetworkedItemComponent\@VRepairableItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 5
     * @symbol
     * ?initializeFromNetwork\@?$NetworkedItemComponent\@VRepairableItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const&);
    /**
     * @symbol ?bindType\@RepairableItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier\@RepairableItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier();
    /**
     * @symbol ?handleItemRepair\@RepairableItemComponent\@\@QEBA?AURepairItemResult\@\@AEAVItemStack\@\@0_N\@Z
     */
    MCAPI struct RepairItemResult handleItemRepair(class ItemStack&, class ItemStack&, bool) const;
    /**
     * @symbol ?isValidRepairItem\@RepairableItemComponent\@\@QEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI bool isValidRepairItem(class ItemStackBase const&) const;
    /**
     * @symbol ?registerVersionUpgrades\@RepairableItemComponent\@\@SAXAEAVCerealSchemaUpgradeSet\@\@\@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_getRepairItemEntry\@RepairableItemComponent\@\@AEBAPEBURepairItemEntry\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI struct RepairItemEntry const* _getRepairItemEntry(class ItemStackBase const&) const;
    /**
     * @symbol ?_repairItem\@RepairableItemComponent\@\@AEBAHAEAVItemStackBase\@\@0VExpressionNode\@\@\@Z
     */
    MCAPI int _repairItem(class ItemStackBase&, class ItemStackBase&, class ExpressionNode) const;
    // NOLINTEND
};
