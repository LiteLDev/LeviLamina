/**
 * @file  ShooterItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShooterItemComponent.
 *
 */
class ShooterItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOOTERITEMCOMPONENT
public:
    class ShooterItemComponent& operator=(class ShooterItemComponent const &) = delete;
    ShooterItemComponent(class ShooterItemComponent const &) = delete;
    ShooterItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ShooterItemComponent();
    /**
     * @vftbl  1
     * @symbol  ?checkComponentDataForContentErrors\@ShooterItemComponent\@\@UEBA_NXZ
     */
    virtual bool checkComponentDataForContentErrors() const;
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
     * @symbol  ?isNetworkComponent\@?$NetworkedItemComponent\@VShooterItemComponent\@\@\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@?$NetworkedItemComponent\@VShooterItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol  ?initializeFromNetwork\@?$NetworkedItemComponent\@VShooterItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol  ?releaseUsing\@ShooterItemComponent\@\@QEBA_NAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    MCAPI bool releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @symbol  ?use\@ShooterItemComponent\@\@QEBA_NAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool use(class ItemStack &, class Player &) const;
    /**
     * @symbol  ?bindType\@ShooterItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol  ?getIdentifier\@ShooterItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

//private:
    /**
     * @symbol  ?_consumeAmmunition\@ShooterItemComponent\@\@AEBAXPEAVPlayer\@\@AEBVItemStack\@\@H_N2\@Z
     */
    MCAPI void _consumeAmmunition(class Player *, class ItemStack const &, int, bool, bool) const;
    /**
     * @symbol  ?_getAmmunition\@ShooterItemComponent\@\@AEBAHPEBVPlayer\@\@_NAEAVItemStack\@\@AEA_N\@Z
     */
    MCAPI int _getAmmunition(class Player const *, bool, class ItemStack &, bool &) const;
    /**
     * @symbol  ?_shootProjectiles\@ShooterItemComponent\@\@AEBAXAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    MCAPI void _shootProjectiles(class ItemStack &, class Player *, int) const;

private:

};