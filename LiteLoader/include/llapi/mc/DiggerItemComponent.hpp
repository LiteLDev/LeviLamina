/**
 * @file  DiggerItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DiggerItemComponent.
 *
 */
class DiggerItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIGGERITEMCOMPONENT
public:
    class DiggerItemComponent& operator=(class DiggerItemComponent const &) = delete;
    DiggerItemComponent(class DiggerItemComponent const &) = delete;
    DiggerItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DiggerItemComponent();
    /**
     * @hash   1875505577
     * @vftbl  1
     * @symbol  ?isNetworkComponent\@?$NetworkedItemComponent\@VDiggerItemComponent\@\@\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
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
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @hash   -1183896005
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@?$NetworkedItemComponent\@VDiggerItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   128089109
     * @vftbl  6
     * @symbol  ?initializeFromNetwork\@?$NetworkedItemComponent\@VDiggerItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   -993804405
     * @symbol  ?canDestroySpecial\@DiggerItemComponent\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool canDestroySpecial(class Block const &) const;
    /**
     * @hash   570226296
     * @symbol  ?getDestroySpeed\@DiggerItemComponent\@\@QEAAMAEBVItemStackBase\@\@AEBVBlock\@\@\@Z
     */
    MCAPI float getDestroySpeed(class ItemStackBase const &, class Block const &);
    /**
     * @hash   -12198941
     * @symbol  ?mineBlock\@DiggerItemComponent\@\@QEAA_NAEAVItemStack\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    MCAPI bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *);
    /**
     * @hash   1449674655
     * @symbol  ?bindType\@DiggerItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   -732634040
     * @symbol  ?getIdentifier\@DiggerItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};