/**
 * @file  Fireball.hpp
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
 * @brief MC class Fireball.
 *
 */
class Fireball : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREBALL
public:
    class Fireball& operator=(class Fireball const &) = delete;
    Fireball(class Fireball const &) = delete;
    Fireball() = delete;
#endif

public:
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Fireball();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   -1648313434
     * @vftbl  48
     * @symbol ?normalTick@Fireball@@UEAAXXZ
     */
    virtual void normalTick();
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
     * @hash   1072427227
     * @vftbl  78
     * @symbol ?getShadowHeightOffs@Fireball@@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
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
     * @hash   1745861648
     * @vftbl  86
     * @symbol ?getBrightness@Fireball@@UEBAMM@Z
     */
    virtual float getBrightness(float) const;
    /**
     * @vftbl  87
     * @symbol __unk_vfn_87
     */
    virtual void __unk_vfn_87();
    /**
     * @hash   -2020747671
     * @vftbl  94
     * @symbol ?isPickable@Fireball@@UEAA_NXZ
     */
    virtual bool isPickable();
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
     * @hash   262687827
     * @vftbl  142
     * @symbol ?getPickRadius@Fireball@@UEAAMXZ
     */
    virtual float getPickRadius();
    /**
     * @hash   -120483823
     * @vftbl  171
     * @symbol ?getSourceUniqueID@Fireball@@UEBA?AUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @vftbl  180
     * @symbol ?canChangeDimensionsUsingPortal@Fireball@@UEBA_NXZ
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
     * @hash   422441547
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@Fireball@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1367296226
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@Fireball@@MEBAXAEAVCompoundTag@@@Z
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
     * @hash   -911042601
     * @vftbl  286
     * @symbol ?getInertia@Fireball@@MEAAMXZ
     */
    virtual float getInertia();
    /**
     * @vftbl  287
     * @symbol __unk_vfn_287
     */
    virtual void __unk_vfn_287();
    /**
     * @hash   2125915611
     * @vftbl  288
     * @symbol ?getTrailParticle@Fireball@@MEAA?AW4ParticleType@@XZ
     */
    virtual enum ParticleType getTrailParticle();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FIREBALL
    /**
     * @hash   -1866595807
     * @symbol ?canMakeStepSound@Fireball@@MEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const;
    /**
     * @hash   -1889064470
     * @symbol ?onHit@Fireball@@MEAAXAEBVHitResult@@@Z
     */
    MCVAPI void onHit(class HitResult const &);
    /**
     * @hash   -2114716385
     * @symbol ?shouldBurn@Fireball@@MEAA_NXZ
     */
    MCVAPI bool shouldBurn();
#endif
    /**
     * @hash   -1424862367
     * @symbol ??0Fireball@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Fireball(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};