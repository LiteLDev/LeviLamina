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
     * @vftbl 12
     * @symbol ?initializeComponents\@Throwable\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl 46
     * @symbol ?lerpMotion\@Throwable\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void lerpMotion(class Vec3 const &);
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 68
     * @symbol __unk_vfn_68
     */
    virtual void __unk_vfn_68();
    /**
     * @vftbl 77
     * @symbol ?getShadowHeightOffs\@Throwable\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 104
     * @symbol __unk_vfn_104
     */
    virtual void __unk_vfn_104();
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl 167
     * @symbol ?getSourceUniqueID\@Throwable\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @vftbl 176
     * @symbol __unk_vfn_176
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl 190
     * @symbol __unk_vfn_190
     */
    virtual void __unk_vfn_190();
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 216
     * @symbol __unk_vfn_216
     */
    virtual void __unk_vfn_216();
    /**
     * @vftbl 232
     * @symbol __unk_vfn_232
     */
    virtual void __unk_vfn_232();
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 252
     * @symbol __unk_vfn_252
     */
    virtual void __unk_vfn_252();
    /**
     * @vftbl 256
     * @symbol ?readAdditionalSaveData\@Throwable\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 257
     * @symbol ?addAdditionalSaveData\@Throwable\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 267
     * @symbol __unk_vfn_267
     */
    virtual void __unk_vfn_267();
    /**
     * @vftbl 268
     * @symbol ?getThrowPower\@Throwable\@\@UEAAMXZ
     */
    virtual float getThrowPower();
    /**
     * @vftbl 269
     * @symbol __unk_vfn_269
     */
    virtual void __unk_vfn_269();
    /**
     * @vftbl 270
     * @symbol ?getThrowUpAngleOffset\@Throwable\@\@MEAAMXZ
     */
    virtual float getThrowUpAngleOffset();
    /**
     * @vftbl 271
     * @symbol ?getGravity\@Throwable\@\@MEAAMXZ
     */
    virtual float getGravity();
    /**
     * @vftbl 272
     * @symbol ?getParticleType\@Throwable\@\@MEAA?AW4ParticleType\@\@XZ
     */
    virtual enum class ParticleType getParticleType();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_THROWABLE
    /**
     * @symbol ?canMakeStepSound\@Throwable\@\@MEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const;
    /**
     * @symbol ?onHit\@Throwable\@\@MEAAXAEBVHitResult\@\@\@Z
     */
    MCVAPI void onHit(class HitResult const &);
    /**
     * @symbol ?stopUponGroundCollision\@Throwable\@\@UEBA_NXZ
     */
    MCVAPI bool stopUponGroundCollision() const;
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Throwable();
#endif
    /**
     * @symbol ??0Throwable\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Throwable(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?shoot\@Throwable\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void shoot(class Mob &);
    /**
     * @symbol ?shoot\@Throwable\@\@QEAAXAEBVVec3\@\@MM0\@Z
     */
    MCAPI void shoot(class Vec3 const &, float, float, class Vec3 const &);
    /**
     * @symbol ?spawnPlayerProjectile\@Throwable\@\@SAPEAVActor\@\@AEBUActorDefinitionIdentifier\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI static class Actor * spawnPlayerProjectile(struct ActorDefinitionIdentifier const &, class Player &);

};
