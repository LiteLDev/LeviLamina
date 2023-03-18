/**
 * @file  AbstractArrow.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AbstractArrow.
 *
 */
class AbstractArrow : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABSTRACTARROW
public:
    class AbstractArrow& operator=(class AbstractArrow const &) = delete;
    AbstractArrow(class AbstractArrow const &) = delete;
    AbstractArrow() = delete;
#endif

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@AbstractArrow\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 12
     * @symbol ?initializeComponents\@AbstractArrow\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl 47
     * @symbol ?lerpMotion\@AbstractArrow\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void lerpMotion(class Vec3 const &);
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 69
     * @symbol __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @vftbl 79
     * @symbol ?getShadowHeightOffs\@AbstractArrow\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @vftbl 80
     * @symbol ?getShadowRadius\@AbstractArrow\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 82
     * @symbol __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl 85
     * @symbol __unk_vfn_85
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl 88
     * @symbol __unk_vfn_88
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl 89
     * @symbol ?playerTouch\@AbstractArrow\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void playerTouch(class Player &);
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 99
     * @symbol __unk_vfn_99
     */
    virtual void __unk_vfn_99();
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl 111
     * @symbol __unk_vfn_111
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl 169
     * @symbol ?getSourceUniqueID\@AbstractArrow\@\@MEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @vftbl 177
     * @symbol ?canChangeDimensionsUsingPortal\@AbstractArrow\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 192
     * @symbol __unk_vfn_192
     */
    virtual void __unk_vfn_192();
    /**
     * @vftbl 217
     * @symbol __unk_vfn_217
     */
    virtual void __unk_vfn_217();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 240
     * @symbol __unk_vfn_240
     */
    virtual void __unk_vfn_240();
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 264
     * @symbol ?readAdditionalSaveData\@AbstractArrow\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 265
     * @symbol ?addAdditionalSaveData\@AbstractArrow\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 268
     * @symbol __unk_vfn_268
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl 275
     * @symbol __unk_vfn_275
     */
    virtual void __unk_vfn_275();
    /**
     * @vftbl 276
     * @symbol ?shoot\@AbstractArrow\@\@UEAAXAEBVVec3\@\@MM0\@Z
     */
    virtual void shoot(class Vec3 const &, float, float, class Vec3 const &);
    /**
     * @vftbl 277
     * @symbol ?_playPickupSound\@AbstractArrow\@\@MEAAXXZ
     */
    virtual void _playPickupSound();
    /**
     * @vftbl 278
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
     * @symbol ??0AbstractArrow\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI AbstractArrow(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
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
     * @symbol ?spawnPlayerProjectile\@AbstractArrow\@\@SAPEAVActor\@\@AEBUActorDefinitionIdentifier\@\@AEAVPlayer\@\@VVec3\@\@\@Z
     */
    MCAPI static class Actor * spawnPlayerProjectile(struct ActorDefinitionIdentifier const &, class Player &, class Vec3);

//protected:
    /**
     * @symbol ?_canPickup\@AbstractArrow\@\@IEBA_NAEBVPlayer\@\@\@Z
     */
    MCAPI bool _canPickup(class Player const &) const;

protected:

};
