#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

class AbstractArrow : public ::PredictableProjectile {

public:
    // prevent constructor by default
    AbstractArrow& operator=(AbstractArrow const&) = delete;
    AbstractArrow(AbstractArrow const&)            = delete;
    AbstractArrow()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@AbstractArrow\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&);
    /**
     * @vftbl 12
     * @symbol
     * ?initializeComponents\@AbstractArrow\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const&);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 41
     * @symbol ?lerpMotion\@AbstractArrow\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void lerpMotion(class Vec3 const&);
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 68
     * @symbol ?getShadowHeightOffs\@AbstractArrow\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @vftbl 69
     * @symbol ?getShadowRadius\@AbstractArrow\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 78
     * @symbol ?playerTouch\@AbstractArrow\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void playerTouch(class Player&);
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl 155
     * @symbol ?getSourceUniqueID\@AbstractArrow\@\@MEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @vftbl 163
     * @symbol ?canChangeDimensionsUsingPortal\@AbstractArrow\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202();
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203();
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239();
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@AbstractArrow\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@AbstractArrow\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253();
    /**
     * @vftbl 254
     * @symbol ?shoot\@AbstractArrow\@\@UEAAXAEBVVec3\@\@MM0\@Z
     */
    virtual void shoot(class Vec3 const&, float, float, class Vec3 const&);
    /**
     * @vftbl 255
     * @symbol ?_playPickupSound\@AbstractArrow\@\@MEAAXXZ
     */
    virtual void _playPickupSound();
    /**
     * @vftbl 256
     * @symbol ?_getPickupItem\@ThrownTrident\@\@MEBA?AVItemStack\@\@XZ
     */
    virtual class ItemStack _getPickupItem() const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ABSTRACTARROW
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AbstractArrow();
#endif
    /**
     * @symbol
     * ??0AbstractArrow\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI AbstractArrow(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    /**
     * @symbol ?isPlayerOwned\@AbstractArrow\@\@QEBA_NXZ
     */
    MCAPI bool isPlayerOwned() const;
    /**
     * @symbol ?setFavoredSlot\@AbstractArrow\@\@QEAAXH\@Z
     */
    MCAPI void setFavoredSlot(int);
    /**
     * @symbol ?setIsCreative\@AbstractArrow\@\@QEAAX_N\@Z
     */
    MCAPI void setIsCreative(bool);
    /**
     * @symbol
     * ?spawnPlayerProjectile\@AbstractArrow\@\@SAPEAVActor\@\@AEBUActorDefinitionIdentifier\@\@AEAVPlayer\@\@VVec3\@\@\@Z
     */
    MCAPI static class Actor* spawnPlayerProjectile(struct ActorDefinitionIdentifier const&, class Player&, class Vec3);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_canPickup\@AbstractArrow\@\@IEBA_NAEBVPlayer\@\@\@Z
     */
    MCAPI bool _canPickup(class Player const&) const;
    // NOLINTEND
};
