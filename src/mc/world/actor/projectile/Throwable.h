#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

class Throwable : public ::PredictableProjectile {

public:
    // prevent constructor by default
    Throwable& operator=(Throwable const&) = delete;
    Throwable(Throwable const&)            = delete;
    Throwable()                            = delete;

public:
    /**
     * @vftbl 12
     * @symbol ?initializeComponents\@Throwable\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void
    initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 41
     * @symbol ?lerpMotion\@Throwable\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void lerpMotion(class Vec3 const&); // NOLINT
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55(); // NOLINT
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62(); // NOLINT
    /**
     * @vftbl 68
     * @symbol ?getShadowHeightOffs\@Throwable\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs(); // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83(); // NOLINT
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86(); // NOLINT
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93(); // NOLINT
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95(); // NOLINT
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96(); // NOLINT
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98(); // NOLINT
    /**
     * @vftbl 155
     * @symbol ?getSourceUniqueID\@Throwable\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const; // NOLINT
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178(); // NOLINT
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202(); // NOLINT
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203(); // NOLINT
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219(); // NOLINT
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222(); // NOLINT
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@Throwable\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@Throwable\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253(); // NOLINT
    /**
     * @vftbl 254
     * @symbol ?getThrowPower\@Throwable\@\@UEAAMXZ
     */
    virtual float getThrowPower(); // NOLINT
    /**
     * @vftbl 255
     * @symbol __unk_vfn_255
     */
    virtual void __unk_vfn_255(); // NOLINT
    /**
     * @vftbl 256
     * @symbol ?getThrowUpAngleOffset\@Throwable\@\@MEAAMXZ
     */
    virtual float getThrowUpAngleOffset(); // NOLINT
    /**
     * @vftbl 257
     * @symbol ?getGravity\@Throwable\@\@MEAAMXZ
     */
    virtual float getGravity(); // NOLINT
    /**
     * @vftbl 258
     * @symbol ?getParticleType\@Throwable\@\@MEAA?AW4ParticleType\@\@XZ
     */
    virtual enum class ParticleType getParticleType(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_THROWABLE
    /**
     * @symbol ?canMakeStepSound\@Throwable\@\@MEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const; // NOLINT
    /**
     * @symbol ?onHit\@Throwable\@\@MEAAXAEBVHitResult\@\@\@Z
     */
    MCVAPI void onHit(class HitResult const&); // NOLINT
    /**
     * @symbol ?stopUponGroundCollision\@Throwable\@\@UEBA_NXZ
     */
    MCVAPI bool stopUponGroundCollision() const; // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Throwable(); // NOLINT
#endif
    /**
     * @symbol
     * ??0Throwable\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI
    Throwable(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&); // NOLINT
    /**
     * @symbol ?shoot\@Throwable\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void shoot(class Mob&); // NOLINT
    /**
     * @symbol ?shoot\@Throwable\@\@QEAAXAEBVVec3\@\@MM0\@Z
     */
    MCAPI void shoot(class Vec3 const&, float, float, class Vec3 const&); // NOLINT
    /**
     * @symbol ?spawnPlayerProjectile\@Throwable\@\@SAPEAVActor\@\@AEBUActorDefinitionIdentifier\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI static class Actor* spawnPlayerProjectile(struct ActorDefinitionIdentifier const&, class Player&); // NOLINT
};
