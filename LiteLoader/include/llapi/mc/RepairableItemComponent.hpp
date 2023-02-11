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
     * @hash   764613278
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
     * @hash   282759968
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@?$NetworkedItemComponent\@VRepairableItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   1172469344
     * @vftbl  6
     * @symbol  ?initializeFromNetwork\@?$NetworkedItemComponent\@VRepairableItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   591503293
     * @symbol  ?handleItemRepair\@RepairableItemComponent\@\@QEAAHAEAVItemStackBase\@\@0\@Z
     */
    MCAPI int handleItemRepair(class ItemStackBase &, class ItemStackBase &);
    /**
     * @hash   -530922017
     * @symbol  ?isValidRepairItem\@RepairableItemComponent\@\@QEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI bool isValidRepairItem(class ItemStackBase const &) const;
    /**
     * @hash   307403423
     * @symbol  ?bindType\@RepairableItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   1352865010
     * @symbol  ?getIdentifier\@RepairableItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();
    /**
     * @hash   -113624610
     * @symbol  ?registerVersionUpgrades\@RepairableItemComponent\@\@SAXAEAVCerealSchemaUpgradeSet\@\@\@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

//private:
    /**
     * @hash   -1539884238
     * @symbol  ?_getRepairItemEntry\@RepairableItemComponent\@\@AEBAPEBURepairItemEntry\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI struct RepairItemEntry const * _getRepairItemEntry(class ItemStackBase const &) const;
    /**
     * @hash   -1759777668
     * @symbol  ?_repairItem\@RepairableItemComponent\@\@AEAAHAEAVItemStackBase\@\@0VExpressionNode\@\@\@Z
     */
    MCAPI int _repairItem(class ItemStackBase &, class ItemStackBase &, class ExpressionNode);

private:

};