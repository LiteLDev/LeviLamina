/**
 * @file  MC/DyePowderItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DyePowderItemComponent.
 *
 */
class DyePowderItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYEPOWDERITEMCOMPONENT
public:
    class DyePowderItemComponent& operator=(class DyePowderItemComponent const &) = delete;
    DyePowderItemComponent(class DyePowderItemComponent const &) = delete;
    DyePowderItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DyePowderItemComponent();
    /**
     * @hash   -704838032
     * @vftbl  1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VDyePowderItemComponent@@@@UEBA_NXZ
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
     * @hash   -313149966
     * @vftbl  5
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VDyePowderItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   1341369246
     * @vftbl  6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VDyePowderItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   1168455165
     * @symbol ?isValidAuxValue@DyePowderItemComponent@@QEBA_NH@Z
     */
    MCAPI bool isValidAuxValue(int) const;
    /**
     * @hash   2097049875
     * @symbol ?bindType@DyePowderItemComponent@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   1518624806
     * @symbol ?getIdentifier@DyePowderItemComponent@@SAAEBVHashedString@@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};