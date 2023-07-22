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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~EntityPlacerItemComponent();
    /**
     * @vftbl  1
     * @symbol  ?isNetworkComponent\@?$NetworkedItemComponent\@VEntityPlacerItemComponent\@\@\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  ?useOn\@EntityPlacerItemComponent\@\@UEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual bool useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &) const;
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@?$NetworkedItemComponent\@VEntityPlacerItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol  ?initializeFromNetwork\@?$NetworkedItemComponent\@VEntityPlacerItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol  ?dispense\@EntityPlacerItemComponent\@\@QEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    MCAPI bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @symbol  ?bindType\@EntityPlacerItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol  ?getIdentifier\@EntityPlacerItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

//private:
    /**
     * @symbol  ?_positionAndRotateActor\@EntityPlacerItemComponent\@\@AEBAXAEAVActor\@\@VVec3\@\@EAEBV3\@PEBVBlockLegacy\@\@\@Z
     */
    MCAPI void _positionAndRotateActor(class Actor &, class Vec3, unsigned char, class Vec3 const &, class BlockLegacy const *) const;
    /**
     * @symbol  ?_setActorCustomName\@EntityPlacerItemComponent\@\@AEBAXAEAVActor\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI void _setActorCustomName(class Actor &, class ItemStack const &) const;

private:

};