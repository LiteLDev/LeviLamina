/**
 * @file  MC/AbstractArrow.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   1932020278
     * @vftbl  8
     * @symbol ?reloadHardcoded@AbstractArrow@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   -1032972583
     * @vftbl  10
     * @symbol ?initializeComponents@AbstractArrow@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~AbstractArrow();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   -1816676459
     * @vftbl  46
     * @symbol ?lerpMotion@AbstractArrow@@UEAAXAEBVVec3@@@Z
     */
    virtual void lerpMotion(class Vec3 const &);
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   -185768503
     * @vftbl  78
     * @symbol ?getShadowHeightOffs@AbstractArrow@@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @hash   -710329169
     * @vftbl  79
     * @symbol ?getShadowRadius@AbstractArrow@@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @symbol __unk_vfn_87
     */
    virtual void __unk_vfn_87();
    /**
     * @hash   866363765
     * @vftbl  88
     * @symbol ?playerTouch@AbstractArrow@@UEAAXAEAVPlayer@@@Z
     */
    virtual void playerTouch(class Player &);
    /**
     * @vftbl  95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl  98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  105
     * @symbol __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @symbol __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @hash   1712871544
     * @vftbl  171
     * @symbol ?getSourceUniqueID@AbstractArrow@@MEBA?AUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @hash   8146356
     * @vftbl  180
     * @symbol ?canChangeDimensionsUsingPortal@AbstractArrow@@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  221
     * @symbol __unk_vfn_221
     */
    virtual void __unk_vfn_221();
    /**
     * @vftbl  222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @symbol __unk_vfn_251
     */
    virtual void __unk_vfn_251();
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   1778736441
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@AbstractArrow@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -281685292
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@AbstractArrow@@MEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -1581201209
     * @vftbl  286
     * @symbol ?shoot@AbstractArrow@@UEAAXAEBVVec3@@MM0@Z
     */
    virtual void shoot(class Vec3 const &, float, float, class Vec3 const &);
    /**
     * @hash   -653968311
     * @vftbl  287
     * @symbol ?_playPickupSound@AbstractArrow@@MEAAXXZ
     */
    virtual void _playPickupSound();
    /**
     * @hash   1279930741
     * @vftbl  288
     * @symbol ?_getPickupItem@ThrownTrident@@MEBA?AVItemStack@@XZ
     */
    virtual class ItemStack _getPickupItem() const = 0;
    /**
     * @hash   -302404157
     * @symbol ??0AbstractArrow@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI AbstractArrow(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -888906592
     * @symbol ?isPlayerOwned@AbstractArrow@@QEBA_NXZ
     */
    MCAPI bool isPlayerOwned() const;
    /**
     * @hash   1880779222
     * @symbol ?setFavoredSlot@AbstractArrow@@QEAAXH@Z
     */
    MCAPI void setFavoredSlot(int);
    /**
     * @hash   -17683684
     * @symbol ?setIsCreative@AbstractArrow@@QEAAX_N@Z
     */
    MCAPI void setIsCreative(bool);

//protected:
    /**
     * @hash   1448389860
     * @symbol ?_canPickup@AbstractArrow@@IEBA_NAEBVPlayer@@@Z
     */
    MCAPI bool _canPickup(class Player const &) const;

protected:

};