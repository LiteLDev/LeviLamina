/**
 * @file  RepairableItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RepairableItemComponent.
 *
 */
class RepairableItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPAIRABLEITEMCOMPONENT
public:
    class RepairableItemComponent& operator=(class RepairableItemComponent const &) = delete;
    RepairableItemComponent(class RepairableItemComponent const &) = delete;
    RepairableItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RepairableItemComponent();
    /**
     * @vftbl  1
     * @symbol  ?isNetworkComponent\@?$NetworkedItemComponent\@VRepairableItemComponent\@\@\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@?$NetworkedItemComponent\@VRepairableItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol  ?initializeFromNetwork\@?$NetworkedItemComponent\@VRepairableItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol  ?handleItemRepair\@RepairableItemComponent\@\@QEAAHAEAVItemStackBase\@\@0\@Z
     */
    MCAPI int handleItemRepair(class ItemStackBase &, class ItemStackBase &);
    /**
     * @symbol  ?isValidRepairItem\@RepairableItemComponent\@\@QEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI bool isValidRepairItem(class ItemStackBase const &) const;
    /**
     * @symbol  ?bindType\@RepairableItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol  ?getIdentifier\@RepairableItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();
    /**
     * @symbol  ?registerVersionUpgrades\@RepairableItemComponent\@\@SAXAEAVCerealSchemaUpgradeSet\@\@\@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

//private:
    /**
     * @symbol  ?_getRepairItemEntry\@RepairableItemComponent\@\@AEBAPEBURepairItemEntry\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI struct RepairItemEntry const * _getRepairItemEntry(class ItemStackBase const &) const;
    /**
     * @symbol  ?_repairItem\@RepairableItemComponent\@\@AEAAHAEAVItemStackBase\@\@0VExpressionNode\@\@\@Z
     */
    MCAPI int _repairItem(class ItemStackBase &, class ItemStackBase &, class ExpressionNode);

private:

};