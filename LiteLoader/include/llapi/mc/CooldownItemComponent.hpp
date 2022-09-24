/**
 * @file  CooldownItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CooldownItemComponent.
 *
 */
class CooldownItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COOLDOWNITEMCOMPONENT
public:
    class CooldownItemComponent& operator=(class CooldownItemComponent const &) = delete;
    CooldownItemComponent(class CooldownItemComponent const &) = delete;
    CooldownItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CooldownItemComponent();
    /**
     * @hash   1617551378
     * @vftbl  1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VCooldownItemComponent@@@@UEBA_NXZ
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
     * @hash   -989642732
     * @vftbl  5
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VCooldownItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   -1331788420
     * @vftbl  6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VCooldownItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   803411647
     * @symbol ?bindType@CooldownItemComponent@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   1376757306
     * @symbol ?getIdentifier@CooldownItemComponent@@SAAEBVHashedString@@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};