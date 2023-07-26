#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class AreaEffectCloud : public ::Actor {

public:
    // prevent constructor by default
    AreaEffectCloud& operator=(AreaEffectCloud const&) = delete;
    AreaEffectCloud(AreaEffectCloud const&)            = delete;
    AreaEffectCloud()                                  = delete;

public:
    /**
     * @vftbl 10
     * @symbol
     * ?reloadHardcoded\@AreaEffectCloud\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
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
     * @vftbl 43
     * @symbol ?normalTick\@AreaEffectCloud\@\@UEAAXXZ
     */
    virtual void normalTick(); // NOLINT
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
     * @vftbl 69
     * @symbol ?getShadowRadius\@AreaEffectCloud\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const; // NOLINT
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
     * @vftbl 106
     * @symbol ?setOwner\@AreaEffectCloud\@\@UEAAXUActorUniqueID\@\@\@Z
     */
    virtual void setOwner(struct ActorUniqueID); // NOLINT
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
     * @symbol ?readAdditionalSaveData\@AreaEffectCloud\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@AreaEffectCloud\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
    /**
     * @symbol
     * ??0AreaEffectCloud\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI
    AreaEffectCloud(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&); // NOLINT
    /**
     * @symbol ?addAreaEffect\@AreaEffectCloud\@\@QEAAXVMobEffectInstance\@\@\@Z
     */
    MCAPI void addAreaEffect(class MobEffectInstance); // NOLINT
    /**
     * @symbol ?getDuration\@AreaEffectCloud\@\@QEBAHXZ
     */
    MCAPI int getDuration() const; // NOLINT
    /**
     * @symbol ?getEffectiveRadius\@AreaEffectCloud\@\@QEBAMXZ
     */
    MCAPI float getEffectiveRadius() const; // NOLINT
    /**
     * @symbol ?getParticle\@AreaEffectCloud\@\@QEBA?AW4ParticleType\@\@XZ
     */
    MCAPI enum class ParticleType getParticle() const; // NOLINT
    /**
     * @symbol ?notifyPickup\@AreaEffectCloud\@\@QEAAXXZ
     */
    MCAPI void notifyPickup(); // NOLINT
    /**
     * @symbol ?setAffectOwner\@AreaEffectCloud\@\@QEAAX_N\@Z
     */
    MCAPI void setAffectOwner(bool); // NOLINT
    /**
     * @symbol ?setDuration\@AreaEffectCloud\@\@QEAAXH\@Z
     */
    MCAPI void setDuration(int); // NOLINT
    /**
     * @symbol ?setInitialRadius\@AreaEffectCloud\@\@QEAAXM\@Z
     */
    MCAPI void setInitialRadius(float); // NOLINT
    /**
     * @symbol ?setParticle\@AreaEffectCloud\@\@QEAAXW4ParticleType\@\@\@Z
     */
    MCAPI void setParticle(enum class ParticleType); // NOLINT
    /**
     * @symbol ?setParticleColor\@AreaEffectCloud\@\@QEAAXAEAVColor\@mce\@\@\@Z
     */
    MCAPI void setParticleColor(class mce::Color&); // NOLINT
    /**
     * @symbol ?setPotion\@AreaEffectCloud\@\@QEAAXF\@Z
     */
    MCAPI void setPotion(short); // NOLINT
    /**
     * @symbol ?setRadiusChangeOnPickup\@AreaEffectCloud\@\@QEAAXM\@Z
     */
    MCAPI void setRadiusChangeOnPickup(float); // NOLINT
    /**
     * @symbol ?setRadiusOnUse\@AreaEffectCloud\@\@QEAAXM\@Z
     */
    MCAPI void setRadiusOnUse(float); // NOLINT
    /**
     * @symbol ?setRadiusPerTick\@AreaEffectCloud\@\@QEAAXM\@Z
     */
    MCAPI void setRadiusPerTick(float); // NOLINT
    /**
     * @symbol ?setReapplicationDelay\@AreaEffectCloud\@\@QEAAXH\@Z
     */
    MCAPI void setReapplicationDelay(int); // NOLINT

    // private:
    /**
     * @symbol ?_getTicksAlive\@AreaEffectCloud\@\@AEBA_JXZ
     */
    MCAPI __int64 _getTicksAlive() const; // NOLINT
    /**
     * @symbol ?_spawnParticles\@AreaEffectCloud\@\@AEAAXAEAVRandom\@\@IM\@Z
     */
    MCAPI void _spawnParticles(class Random&, unsigned int, float); // NOLINT

private:
};
