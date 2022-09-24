/**
 * @file  KnockbackResistanceItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class KnockbackResistanceItemComponent.
 *
 */
class KnockbackResistanceItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KNOCKBACKRESISTANCEITEMCOMPONENT
public:
    class KnockbackResistanceItemComponent& operator=(class KnockbackResistanceItemComponent const &) = delete;
    KnockbackResistanceItemComponent(class KnockbackResistanceItemComponent const &) = delete;
    KnockbackResistanceItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~KnockbackResistanceItemComponent();
    /**
     * @hash   531062107
     * @vftbl  1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VKnockbackResistanceItemComponent@@@@UEBA_NXZ
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
     * @hash   1515083309
     * @vftbl  5
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VKnockbackResistanceItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   148584691
     * @vftbl  6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VKnockbackResistanceItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   335861478
     * @symbol ?getProtectionValue@KnockbackResistanceItemComponent@@QEBAMXZ
     */
    MCAPI float getProtectionValue() const;
    /**
     * @hash   130658579
     * @symbol ?bindType@KnockbackResistanceItemComponent@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   1333315532
     * @symbol ?getIdentifier@KnockbackResistanceItemComponent@@SAAEBVHashedString@@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};