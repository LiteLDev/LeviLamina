/**
 * @file  ProjectileItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ProjectileItemComponent.
 *
 */
class ProjectileItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROJECTILEITEMCOMPONENT
public:
    class ProjectileItemComponent& operator=(class ProjectileItemComponent const &) = delete;
    ProjectileItemComponent(class ProjectileItemComponent const &) = delete;
    ProjectileItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ProjectileItemComponent();
    /**
     * @hash   325033808
     * @vftbl  1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VProjectileItemComponent@@@@UEBA_NXZ
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
     * @hash   313655586
     * @vftbl  5
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VProjectileItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   1572319198
     * @vftbl  6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VProjectileItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   1056642738
     * @symbol ?dispense@ProjectileItemComponent@@QEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    MCAPI bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   -1040048980
     * @symbol ?getShootDir@ProjectileItemComponent@@QEBA?AVVec3@@AEBVPlayer@@M@Z
     */
    MCAPI class Vec3 getShootDir(class Player const &, float) const;
    /**
     * @hash   397266501
     * @symbol ?shootProjectile@ProjectileItemComponent@@QEBAPEAVActor@@AEAVBlockSource@@AEBVVec3@@1MPEAVPlayer@@@Z
     */
    MCAPI class Actor * shootProjectile(class BlockSource &, class Vec3 const &, class Vec3 const &, float, class Player *) const;
    /**
     * @hash   -1985333185
     * @symbol ?bindType@ProjectileItemComponent@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   204007766
     * @symbol ?getIdentifier@ProjectileItemComponent@@SAAEBVHashedString@@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};