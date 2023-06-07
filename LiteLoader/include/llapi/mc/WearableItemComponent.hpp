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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isNetworkComponent\@?$NetworkedItemComponent\@VWearableItemComponent\@\@\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?buildNetworkTag\@?$NetworkedItemComponent\@VWearableItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 5
     * @symbol ?initializeFromNetwork\@?$NetworkedItemComponent\@VWearableItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol ?getSlot\@WearableItemComponent\@\@QEBA?AW4EquipmentSlot\@\@XZ
     */
    MCAPI enum class EquipmentSlot getSlot() const;
    /**
     * @symbol ?use\@WearableItemComponent\@\@QEBA_NAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool use(class ItemStack &, class Player &) const;
    /**
     * @symbol ?bindType\@WearableItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier\@WearableItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};
