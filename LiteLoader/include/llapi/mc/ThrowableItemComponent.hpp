/**
 * @file  MC/ThrowableItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ThrowableItemComponent.
 *
 */
class ThrowableItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THROWABLEITEMCOMPONENT
public:
    class ThrowableItemComponent& operator=(class ThrowableItemComponent const &) = delete;
    ThrowableItemComponent(class ThrowableItemComponent const &) = delete;
    ThrowableItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ThrowableItemComponent();
    /**
     * @hash   1055652807
     * @vftbl  1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VThrowableItemComponent@@@@UEBA_NXZ
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
     * @hash   -1966841303
     * @vftbl  5
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VThrowableItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   1019339879
     * @vftbl  6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VThrowableItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   1447991404
     * @symbol ?releaseUsing@ThrowableItemComponent@@QEBA_NAEAVItemStack@@PEAVPlayer@@H@Z
     */
    MCAPI bool releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @hash   -905981480
     * @symbol ?use@ThrowableItemComponent@@QEBA_NAEAVItemStack@@AEAVPlayer@@@Z
     */
    MCAPI bool use(class ItemStack &, class Player &) const;
    /**
     * @hash   757713507
     * @symbol ?bindType@ThrowableItemComponent@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   -1141485020
     * @symbol ?getIdentifier@ThrowableItemComponent@@SAAEBVHashedString@@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

//private:
    /**
     * @hash   1094915625
     * @symbol ?_getLaunchPower@ThrowableItemComponent@@AEBAMHHH@Z
     */
    MCAPI float _getLaunchPower(int, int, int) const;

private:

};