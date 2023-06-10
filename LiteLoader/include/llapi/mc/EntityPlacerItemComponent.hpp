/**
 * @file  EntityPlacerItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityPlacerItemComponent.
 *
 */
class EntityPlacerItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYPLACERITEMCOMPONENT
public:
    class EntityPlacerItemComponent& operator=(class EntityPlacerItemComponent const &) = delete;
    EntityPlacerItemComponent(class EntityPlacerItemComponent const &) = delete;
    EntityPlacerItemComponent() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
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
     * @symbol ?buildNetworkTag\@?$NetworkedItemComponent\@VEntityPlacerItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 5
     * @symbol ?initializeFromNetwork\@?$NetworkedItemComponent\@VEntityPlacerItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @vftbl 6
     * @symbol ?handleVersionBasedInitialization\@EntityPlacerItemComponent\@\@UEAAXAEBVSemVersion\@\@\@Z
     */
    virtual void handleVersionBasedInitialization(class SemVersion const &);
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol ?_useOn\@EntityPlacerItemComponent\@\@MEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENTITYPLACERITEMCOMPONENT
    /**
     * @symbol ?_canUseOn\@EntityPlacerItemComponent\@\@MEBA_NAEBVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@E\@Z
     */
    MCVAPI bool _canUseOn(class ItemStack const &, class Actor &, class BlockPos const &, unsigned char) const;
#endif
    /**
     * @symbol ?dispense\@EntityPlacerItemComponent\@\@QEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    MCAPI bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @symbol ?bindType\@EntityPlacerItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier\@EntityPlacerItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

//private:
    /**
     * @symbol ?_setActorCustomName\@EntityPlacerItemComponent\@\@AEBAXAEAVActor\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI void _setActorCustomName(class Actor &, class ItemStack const &) const;

private:

};
