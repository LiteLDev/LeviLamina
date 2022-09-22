/**
 * @file  ChargeableItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ChargeableItemComponent.
 *
 */
class ChargeableItemComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHARGEABLEITEMCOMPONENT
public:
    class ChargeableItemComponent& operator=(class ChargeableItemComponent const &) = delete;
    ChargeableItemComponent(class ChargeableItemComponent const &) = delete;
    ChargeableItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ChargeableItemComponent();
    /**
     * @hash   155367061
     * @vftbl  1
     * @symbol ?isNetworkComponent@ChargeableItemComponent@@UEBA_NXZ
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
     * @hash   319239591
     * @vftbl  5
     * @symbol ?buildNetworkTag@ChargeableItemComponent@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   -463860119
     * @vftbl  6
     * @symbol ?initializeFromNetwork@ChargeableItemComponent@@UEAA_NAEBVCompoundTag@@@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   -287287730
     * @symbol ?getMovementModifier@ChargeableItemComponent@@QEBAMXZ
     */
    MCAPI float getMovementModifier() const;
    /**
     * @hash   -1979731160
     * @symbol ?use@ChargeableItemComponent@@QEBA_NAEAVItemStack@@AEAVPlayer@@@Z
     */
    MCAPI bool use(class ItemStack &, class Player &) const;
    /**
     * @hash   -1551673554
     * @symbol ?useTimeDepleted@ChargeableItemComponent@@QEBAXAEAVItemStack@@AEAVPlayer@@AEAVLevel@@@Z
     */
    MCAPI void useTimeDepleted(class ItemStack &, class Player &, class Level &) const;
    /**
     * @hash   -697614673
     * @symbol ?bindType@ChargeableItemComponent@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   2122313440
     * @symbol ?getIdentifier@ChargeableItemComponent@@SAAEBVHashedString@@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};