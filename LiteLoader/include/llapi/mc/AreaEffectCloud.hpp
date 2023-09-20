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
     * @vftbl 54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 68
     * @symbol ?getShadowRadius\@AreaEffectCloud\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl 76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
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
     * @vftbl 92
     * @symbol __unk_vfn_92
     */
    virtual void __unk_vfn_92();
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 105
     * @symbol ?setOwner\@AreaEffectCloud\@\@UEAAXUActorUniqueID\@\@\@Z
     */
    virtual void setOwner(struct ActorUniqueID);
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162();
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 198
     * @symbol __unk_vfn_198
     */
    virtual void __unk_vfn_198();
    /**
     * @vftbl 199
     * @symbol __unk_vfn_199
     */
    virtual void __unk_vfn_199();
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 239
     * @symbol ?readAdditionalSaveData\@AreaEffectCloud\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 240
     * @symbol ?addAdditionalSaveData\@AreaEffectCloud\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
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
     * @symbol ?_setSpawnTick\@AreaEffectCloud\@\@AEAAX_J\@Z
     */
    MCAPI void _setSpawnTick(__int64);
    /**
     * @symbol ?_spawnParticles\@AreaEffectCloud\@\@AEAAXAEAVRandom\@\@IM\@Z
     */
    MCAPI void _spawnParticles(class Random &, unsigned int, float);

private:

};
