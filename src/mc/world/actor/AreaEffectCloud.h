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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AREAEFFECTCLOUD
public:
    AreaEffectCloud& operator=(AreaEffectCloud const&) = delete;
    AreaEffectCloud(AreaEffectCloud const&)            = delete;
    AreaEffectCloud()                                  = delete;
#endif

public:
    /**
     * @vftbl 10
     * @symbol
     * ?reloadHardcoded\@AreaEffectCloud\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&);
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
     * @vftbl 43
     * @symbol ?normalTick\@AreaEffectCloud\@\@UEAAXXZ
     */
    virtual void normalTick();
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
     * @vftbl 69
     * @symbol ?getShadowRadius\@AreaEffectCloud\@\@UEBAMXZ
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
     * @vftbl 106
     * @symbol ?setOwner\@AreaEffectCloud\@\@UEAAXUActorUniqueID\@\@\@Z
     */
    virtual void setOwner(struct ActorUniqueID);
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
     * @symbol ?readAdditionalSaveData\@AreaEffectCloud\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@AreaEffectCloud\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
    /**
     * @symbol
     * ??0AreaEffectCloud\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI AreaEffectCloud(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    /**
     * @symbol ?addAreaEffect\@AreaEffectCloud\@\@QEAAXVMobEffectInstance\@\@\@Z
     */
    MCAPI void addAreaEffect(class MobEffectInstance);
    /**
     * @symbol ?getDuration\@AreaEffectCloud\@\@QEBAHXZ
     */
    MCAPI int getDuration() const;
    /**
     * @symbol ?getEffectiveRadius\@AreaEffectCloud\@\@QEBAMXZ
     */
    MCAPI float getEffectiveRadius() const;
    /**
     * @symbol ?getParticle\@AreaEffectCloud\@\@QEBA?AW4ParticleType\@\@XZ
     */
    MCAPI enum class ParticleType getParticle() const;
    /**
     * @symbol ?notifyPickup\@AreaEffectCloud\@\@QEAAXXZ
     */
    MCAPI void notifyPickup();
    /**
     * @symbol ?setAffectOwner\@AreaEffectCloud\@\@QEAAX_N\@Z
     */
    MCAPI void setAffectOwner(bool);
    /**
     * @symbol ?setDuration\@AreaEffectCloud\@\@QEAAXH\@Z
     */
    MCAPI void setDuration(int);
    /**
     * @symbol ?setInitialRadius\@AreaEffectCloud\@\@QEAAXM\@Z
     */
    MCAPI void setInitialRadius(float);
    /**
     * @symbol ?setParticle\@AreaEffectCloud\@\@QEAAXW4ParticleType\@\@\@Z
     */
    MCAPI void setParticle(enum class ParticleType);
    /**
     * @symbol ?setParticleColor\@AreaEffectCloud\@\@QEAAXAEAVColor\@mce\@\@\@Z
     */
    MCAPI void setParticleColor(class mce::Color&);
    /**
     * @symbol ?setPotion\@AreaEffectCloud\@\@QEAAXF\@Z
     */
    MCAPI void setPotion(short);
    /**
     * @symbol ?setRadiusChangeOnPickup\@AreaEffectCloud\@\@QEAAXM\@Z
     */
    MCAPI void setRadiusChangeOnPickup(float);
    /**
     * @symbol ?setRadiusOnUse\@AreaEffectCloud\@\@QEAAXM\@Z
     */
    MCAPI void setRadiusOnUse(float);
    /**
     * @symbol ?setRadiusPerTick\@AreaEffectCloud\@\@QEAAXM\@Z
     */
    MCAPI void setRadiusPerTick(float);
    /**
     * @symbol ?setReapplicationDelay\@AreaEffectCloud\@\@QEAAXH\@Z
     */
    MCAPI void setReapplicationDelay(int);

    // private:
    /**
     * @symbol ?_getTicksAlive\@AreaEffectCloud\@\@AEBA_JXZ
     */
    MCAPI __int64 _getTicksAlive() const;
    /**
     * @symbol ?_spawnParticles\@AreaEffectCloud\@\@AEAAXAEAVRandom\@\@IM\@Z
     */
    MCAPI void _spawnParticles(class Random&, unsigned int, float);

private:
};
