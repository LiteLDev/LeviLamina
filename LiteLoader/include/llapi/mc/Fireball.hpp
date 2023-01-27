/**
 * @file  Fireball.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Actor.hpp"
#include "../../PredictableProjectile.hpp"

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
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~Fireball();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   1587262838
     * @vftbl  49
     * @symbol  ?normalTick\@Fireball\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @hash   1370152715
     * @vftbl  80
     * @symbol  ?getShadowHeightOffs\@Fireball\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @vftbl  83
     * @symbol  __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl  86
     * @symbol  __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl  88
     * @symbol  ?getBrightness\@Fireball\@\@UEBAMMAEBVIConstBlockSource\@\@\@Z
     */
    virtual float getBrightness(float, class IConstBlockSource const &) const;
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @hash   -1920849799
     * @vftbl  96
     * @symbol  ?isPickable\@Fireball\@\@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  109
     * @symbol  __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  110
     * @symbol  __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  112
     * @symbol  __unk_vfn_112
     */
    virtual void __unk_vfn_112();
    /**
     * @hash   466219939
     * @vftbl  143
     * @symbol  ?getPickRadius\@Fireball\@\@UEAAMXZ
     */
    virtual float getPickRadius();
    /**
     * @hash   -775701311
     * @vftbl  170
     * @symbol  ?getSourceUniqueID\@Fireball\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @hash   1226318918
     * @vftbl  178
     * @symbol  ?canChangeDimensionsUsingPortal\@Fireball\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @vftbl  218
     * @symbol  __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl  219
     * @symbol  __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl  241
     * @symbol  __unk_vfn_241
     */
    virtual void __unk_vfn_241();
    /**
     * @vftbl  244
     * @symbol  __unk_vfn_244
     */
    virtual void __unk_vfn_244();
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @hash   -636918725
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@Fireball\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   307889826
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@Fireball\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @hash   -1970433625
     * @vftbl  278
     * @symbol  ?getInertia\@Fireball\@\@MEAAMXZ
     */
    virtual float getInertia();
    /**
     * @vftbl  279
     * @symbol  __unk_vfn_279
     */
    virtual void __unk_vfn_279();
    /**
     * @hash   -1897942053
     * @vftbl  280
     * @symbol  ?getTrailParticle\@Fireball\@\@MEAA?AW4ParticleType\@\@XZ
     */
    virtual enum class ParticleType getTrailParticle();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FIREBALL
    /**
     * @hash   -1765975263
     * @symbol  ?canMakeStepSound\@Fireball\@\@MEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const;
    /**
     * @hash   -1797177494
     * @symbol  ?onHit\@Fireball\@\@MEAAXAEBVHitResult\@\@\@Z
     */
    MCVAPI void onHit(class HitResult const &);
    /**
     * @hash   -2014818513
     * @symbol  ?shouldBurn\@Fireball\@\@MEAA_NXZ
     */
    MCVAPI bool shouldBurn();
#endif
    /**
     * @hash   1810975297
     * @symbol  ??0Fireball\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Fireball(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};