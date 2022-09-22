/**
 * @file  OnUseItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OnUseItemComponent.
 *
 */
class OnUseItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONUSEITEMCOMPONENT
public:
    class OnUseItemComponent& operator=(class OnUseItemComponent const &) = delete;
    OnUseItemComponent(class OnUseItemComponent const &) = delete;
    OnUseItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~OnUseItemComponent();
    /**
     * @hash   46287535
     * @vftbl  1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VOnUseItemComponent@@@@UEBA_NXZ
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
     * @hash   1422563473
     * @vftbl  5
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VOnUseItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   1637676927
     * @vftbl  6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VOnUseItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   163034323
     * @symbol ?bindType@OnUseItemComponent@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   -1672283484
     * @symbol ?getIdentifier@OnUseItemComponent@@SAAEBVHashedString@@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};