/**
 * @file  MC/IconItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IconItemComponent.
 *
 */
class IconItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICONITEMCOMPONENT
public:
    class IconItemComponent& operator=(class IconItemComponent const &) = delete;
    IconItemComponent(class IconItemComponent const &) = delete;
    IconItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~IconItemComponent();
    /**
     * @hash   -653519904
     * @vftbl  1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VIconItemComponent@@@@UEBA_NXZ
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
     * @hash   -1178317726
     * @vftbl  5
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VIconItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   1988871790
     * @vftbl  6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VIconItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   -455841559
     * @symbol ??0IconItemComponent@@QEAA@PEAVComponentItem@@@Z
     */
    MCAPI IconItemComponent(class ComponentItem *);
    /**
     * @hash   1669096631
     * @symbol ?setOwnerIcon@IconItemComponent@@QEAAXXZ
     */
    MCAPI void setOwnerIcon();
    /**
     * @hash   -168705057
     * @symbol ?bindType@IconItemComponent@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   769787238
     * @symbol ?getIdentifier@IconItemComponent@@SAAEBVHashedString@@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};