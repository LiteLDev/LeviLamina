/**
 * @file  MC/DurabilityItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DurabilityItemComponent.
 *
 */
class DurabilityItemComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DURABILITYITEMCOMPONENT
public:
    class DurabilityItemComponent& operator=(class DurabilityItemComponent const &) = delete;
    DurabilityItemComponent(class DurabilityItemComponent const &) = delete;
    DurabilityItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DurabilityItemComponent();
    /**
     * @hash   -1529911952
     * @vftbl  1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VDurabilityItemComponent@@@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @hash   -467802974
     * @vftbl  5
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VDurabilityItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   520425470
     * @vftbl  6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VDurabilityItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   2124987871
     * @symbol ?getDamageChance@DurabilityItemComponent@@QEBAHH@Z
     */
    MCAPI int getDamageChance(int) const;
    /**
     * @hash   -1323620856
     * @symbol ?getDamageChanceRange@DurabilityItemComponent@@QEBA?AUIntRange@@XZ
     */
    MCAPI struct IntRange getDamageChanceRange() const;
    /**
     * @hash   -2056294912
     * @symbol ?getMaxDamage@DurabilityItemComponent@@QEBAHXZ
     */
    MCAPI int getMaxDamage() const;
    /**
     * @hash   -1737382122
     * @symbol ?setMaxDamage@DurabilityItemComponent@@QEAAXH@Z
     */
    MCAPI void setMaxDamage(int);
    /**
     * @hash   -366316065
     * @symbol ?bindType@DurabilityItemComponent@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   -6239354
     * @symbol ?getIdentifier@DurabilityItemComponent@@SAAEBVHashedString@@XZ
     */
    MCAPI static class HashedString const & getIdentifier();
    /**
     * @hash   179189530
     * @symbol ?registerVersionUpgrades@DurabilityItemComponent@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};