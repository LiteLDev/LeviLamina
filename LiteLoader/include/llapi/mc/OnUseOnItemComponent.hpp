/**
 * @file  OnUseOnItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OnUseOnItemComponent.
 *
 */
class OnUseOnItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONUSEONITEMCOMPONENT
public:
    class OnUseOnItemComponent& operator=(class OnUseOnItemComponent const &) = delete;
    OnUseOnItemComponent(class OnUseOnItemComponent const &) = delete;
    OnUseOnItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~OnUseOnItemComponent();
    /**
     * @hash   -1498288882
     * @vftbl  1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VOnUseOnItemComponent@@@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @hash   1387339874
     * @vftbl  3
     * @symbol ?useOn@OnUseOnItemComponent@@UEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
     */
    virtual bool useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &) const;
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @hash   1120186368
     * @vftbl  5
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VOnUseOnItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   801677920
     * @vftbl  6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VOnUseOnItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   1096141603
     * @symbol ?bindType@OnUseOnItemComponent@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   1905813202
     * @symbol ?getIdentifier@OnUseOnItemComponent@@SAAEBVHashedString@@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};