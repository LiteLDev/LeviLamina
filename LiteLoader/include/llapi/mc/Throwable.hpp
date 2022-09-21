/**
 * @file  MC/Throwable.hpp
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
     * @hash   1813850384
     * @vftbl  10
     * @symbol ?initializeComponents@Throwable@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Throwable();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   718121422
     * @vftbl  46
     * @symbol ?lerpMotion@Throwable@@UEAAXAEBVVec3@@@Z
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
     * @hash   1979289104
     * @vftbl  78
     * @symbol ?getShadowHeightOffs@Throwable@@UEAAMXZ
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
     * @vftbl  87
     * @symbol __unk_vfn_87
     */
    virtual void __unk_vfn_87();
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
     * @hash   67962326
     * @vftbl  171
     * @symbol ?getSourceUniqueID@Throwable@@UEBA?AUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
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
     * @hash   475930544
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@Throwable@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1662596323
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@Throwable@@MEBAXAEAVCompoundTag@@@Z
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
     * @hash   -519476860
     * @vftbl  286
     * @symbol ?getThrowPower@Throwable@@UEAAMXZ
     */
    virtual float getThrowPower();
    /**
     * @vftbl  287
     * @symbol __unk_vfn_287
     */
    virtual void __unk_vfn_287();
    /**
     * @hash   249390291
     * @vftbl  288
     * @symbol ?getThrowUpAngleOffset@Throwable@@MEAAMXZ
     */
    virtual float getThrowUpAngleOffset();
    /**
     * @hash   -1540945872
     * @vftbl  289
     * @symbol ?getGravity@Throwable@@MEAAMXZ
     */
    virtual float getGravity();
    /**
     * @hash   1753647152
     * @vftbl  290
     * @symbol ?getParticleType@Throwable@@MEAA?AW4ParticleType@@XZ
     */
    virtual enum ParticleType getParticleType();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_THROWABLE
    /**
     * @hash   -1089818730
     * @symbol ?canMakeStepSound@Throwable@@MEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const;
    /**
     * @hash   764734485
     * @symbol ?onHit@Throwable@@MEAAXAEBVHitResult@@@Z
     */
    MCVAPI void onHit(class HitResult const &);
    /**
     * @hash   2035162279
     * @symbol ?stopUponGroundCollision@Throwable@@UEBA_NXZ
     */
    MCVAPI bool stopUponGroundCollision() const;
#endif
    /**
     * @hash   -675255284
     * @symbol ??0Throwable@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Throwable(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -997873210
     * @symbol ?shoot@Throwable@@QEAAXAEAVMob@@@Z
     */
    MCAPI void shoot(class Mob &);
    /**
     * @hash   1294483290
     * @symbol ?shoot@Throwable@@QEAAXAEBVVec3@@MM0@Z
     */
    MCAPI void shoot(class Vec3 const &, float, float, class Vec3 const &);

};