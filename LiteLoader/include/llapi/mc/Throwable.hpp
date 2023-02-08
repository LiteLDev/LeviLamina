/**
 * @file  Throwable.hpp
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
 * @brief MC class Throwable.
 *
 */
class Throwable : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THROWABLE
public:
    class Throwable& operator=(class Throwable const &) = delete;
    Throwable(class Throwable const &) = delete;
    Throwable() = delete;
#endif

public:
    /**
     * @hash   764915040
     * @vftbl  12
     * @symbol  ?initializeComponents\@Throwable\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~Throwable();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   -330813922
     * @vftbl  47
     * @symbol  ?lerpMotion\@Throwable\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void lerpMotion(class Vec3 const &);
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
     * @hash   -2017952704
     * @vftbl  80
     * @symbol  ?getShadowHeightOffs\@Throwable\@\@UEAAMXZ
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
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
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
     * @hash   -980973018
     * @vftbl  170
     * @symbol  ?getSourceUniqueID\@Throwable\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
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
     * @hash   -572974048
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@Throwable\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1583435629
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@Throwable\@\@MEBAXAEAVCompoundTag\@\@\@Z
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
     * @hash   -1568412204
     * @vftbl  278
     * @symbol  ?getThrowPower\@Throwable\@\@UEAAMXZ
     */
    virtual float getThrowPower();
    /**
     * @vftbl  279
     * @symbol  __unk_vfn_279
     */
    virtual void __unk_vfn_279();
    /**
     * @hash   547115779
     * @vftbl  280
     * @symbol  ?getThrowUpAngleOffset\@Throwable\@\@MEAAMXZ
     */
    virtual float getThrowUpAngleOffset();
    /**
     * @hash   1705086080
     * @vftbl  281
     * @symbol  ?getGravity\@Throwable\@\@MEAAMXZ
     */
    virtual float getGravity();
    /**
     * @hash   825628672
     * @vftbl  282
     * @symbol  ?getParticleType\@Throwable\@\@MEAA?AW4ParticleType\@\@XZ
     */
    virtual enum class ParticleType getParticleType();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_THROWABLE
    /**
     * @hash   -989198186
     * @symbol  ?canMakeStepSound\@Throwable\@\@MEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const;
    /**
     * @hash   856621461
     * @symbol  ?onHit\@Throwable\@\@MEAAXAEBVHitResult\@\@\@Z
     */
    MCVAPI void onHit(class HitResult const &);
    /**
     * @hash   2135782823
     * @symbol  ?stopUponGroundCollision\@Throwable\@\@UEBA_NXZ
     */
    MCVAPI bool stopUponGroundCollision() const;
#endif
    /**
     * @hash   -1724190628
     * @symbol  ??0Throwable\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Throwable(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -2046777802
     * @symbol  ?shoot\@Throwable\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void shoot(class Mob &);
    /**
     * @hash   245594074
     * @symbol  ?shoot\@Throwable\@\@QEAAXAEBVVec3\@\@MM0\@Z
     */
    MCAPI void shoot(class Vec3 const &, float, float, class Vec3 const &);

};