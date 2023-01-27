/**
 * @file  WearableItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WearableItemComponent.
 *
 */
class WearableItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEARABLEITEMCOMPONENT
public:
    class WearableItemComponent& operator=(class WearableItemComponent const &) = delete;
    WearableItemComponent(class WearableItemComponent const &) = delete;
    WearableItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~WearableItemComponent();
    /**
     * @hash   -2083233072
     * @vftbl  1
     * @symbol  ?isNetworkComponent\@?$NetworkedItemComponent\@VWearableItemComponent\@\@\@\@UEBA_NXZ
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
     * @hash   1181003666
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@?$NetworkedItemComponent\@VWearableItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   -1984960018
     * @vftbl  6
     * @symbol  ?initializeFromNetwork\@?$NetworkedItemComponent\@VWearableItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   -1914602134
     * @symbol  ?getSlot\@WearableItemComponent\@\@QEBA?AW4EquipmentSlot\@\@XZ
     */
    MCAPI enum class EquipmentSlot getSlot() const;
    /**
     * @hash   -1262493784
     * @symbol  ?use\@WearableItemComponent\@\@QEBA_NAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool use(class ItemStack &, class Player &) const;
    /**
     * @hash   1201883471
     * @symbol  ?bindType\@WearableItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   313027286
     * @symbol  ?getIdentifier\@WearableItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};