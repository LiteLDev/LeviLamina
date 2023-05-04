/**
 * @file  AreaEffectCloud.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AreaEffectCloud.
 *
 */
class AreaEffectCloud : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AREAEFFECTCLOUD
public:
    class AreaEffectCloud& operator=(class AreaEffectCloud const &) = delete;
    AreaEffectCloud(class AreaEffectCloud const &) = delete;
    AreaEffectCloud() = delete;
#endif

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@AreaEffectCloud\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
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
     * @vftbl 49
     * @symbol ?normalTick\@AreaEffectCloud\@\@UEAAXXZ
     */
    virtual void normalTick();
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
     * @vftbl 80
     * @symbol ?getShadowRadius\@AreaEffectCloud\@\@UEBAMXZ
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
     * @vftbl 119
     * @symbol ?setOwner\@AreaEffectCloud\@\@UEAAXUActorUniqueID\@\@\@Z
     */
    virtual void setOwner(struct ActorUniqueID);
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
     * @symbol ?readAdditionalSaveData\@AreaEffectCloud\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 265
     * @symbol ?addAdditionalSaveData\@AreaEffectCloud\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 268
     * @symbol __unk_vfn_268
     */
    virtual void __unk_vfn_268();
    /**
     * @symbol ??0AreaEffectCloud\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI AreaEffectCloud(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
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
    MCAPI void setParticleColor(class mce::Color &);
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

//private:
    /**
     * @symbol ?_getTicksAlive\@AreaEffectCloud\@\@AEBA_JXZ
     */
    MCAPI __int64 _getTicksAlive() const;
    /**
     * @symbol ?_spawnParticles\@AreaEffectCloud\@\@AEAAXAEAVRandom\@\@IM\@Z
     */
    MCAPI void _spawnParticles(class Random &, unsigned int, float);

private:

};
