/**
 * @file  AreaEffectCloud.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   1156286854
     * @vftbl  8
     * @symbol ?reloadHardcoded@AreaEffectCloud@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~AreaEffectCloud();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   -659852172
     * @vftbl  48
     * @symbol ?normalTick@AreaEffectCloud@@UEAAXXZ
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
     * @hash   293830527
     * @vftbl  79
     * @symbol ?getShadowRadius@AreaEffectCloud@@UEBAMXZ
     */
    virtual float getShadowRadius() const;
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
     * @hash   1209563196
     * @vftbl  118
     * @symbol ?setOwner@AreaEffectCloud@@UEAAXUActorUniqueID@@@Z
     */
    virtual void setOwner(struct ActorUniqueID);
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
     * @hash   1024360521
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@AreaEffectCloud@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1844433804
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@AreaEffectCloud@@MEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @hash   -1568836333
     * @symbol ??0AreaEffectCloud@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI AreaEffectCloud(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -688583372
     * @symbol ?addAreaEffect@AreaEffectCloud@@QEAAXVMobEffectInstance@@@Z
     */
    MCAPI void addAreaEffect(class MobEffectInstance);
    /**
     * @hash   1597684348
     * @symbol ?getDuration@AreaEffectCloud@@QEBAHXZ
     */
    MCAPI int getDuration() const;
    /**
     * @hash   1985829370
     * @symbol ?getEffectiveRadius@AreaEffectCloud@@QEBAMXZ
     */
    MCAPI float getEffectiveRadius() const;
    /**
     * @hash   780315944
     * @symbol ?getParticle@AreaEffectCloud@@QEBA?AW4ParticleType@@XZ
     */
    MCAPI enum class ParticleType getParticle() const;
    /**
     * @hash   -2126834851
     * @symbol ?notifyPickup@AreaEffectCloud@@QEAAXXZ
     */
    MCAPI void notifyPickup();
    /**
     * @hash   1010877530
     * @symbol ?setAffectOwner@AreaEffectCloud@@QEAAX_N@Z
     */
    MCAPI void setAffectOwner(bool);
    /**
     * @hash   -396226502
     * @symbol ?setDuration@AreaEffectCloud@@QEAAXH@Z
     */
    MCAPI void setDuration(int);
    /**
     * @hash   911313438
     * @symbol ?setInitialRadius@AreaEffectCloud@@QEAAXM@Z
     */
    MCAPI void setInitialRadius(float);
    /**
     * @hash   -800211274
     * @symbol ?setParticle@AreaEffectCloud@@QEAAXW4ParticleType@@@Z
     */
    MCAPI void setParticle(enum class ParticleType);
    /**
     * @hash   -1216556582
     * @symbol ?setParticleColor@AreaEffectCloud@@QEAAXAEAVColor@mce@@@Z
     */
    MCAPI void setParticleColor(class mce::Color &);
    /**
     * @hash   -113277039
     * @symbol ?setPotion@AreaEffectCloud@@QEAAXF@Z
     */
    MCAPI void setPotion(short);
    /**
     * @hash   87356390
     * @symbol ?setRadiusChangeOnPickup@AreaEffectCloud@@QEAAXM@Z
     */
    MCAPI void setRadiusChangeOnPickup(float);
    /**
     * @hash   -1020017714
     * @symbol ?setRadiusOnUse@AreaEffectCloud@@QEAAXM@Z
     */
    MCAPI void setRadiusOnUse(float);
    /**
     * @hash   1122590522
     * @symbol ?setRadiusPerTick@AreaEffectCloud@@QEAAXM@Z
     */
    MCAPI void setRadiusPerTick(float);
    /**
     * @hash   285678454
     * @symbol ?setReapplicationDelay@AreaEffectCloud@@QEAAXH@Z
     */
    MCAPI void setReapplicationDelay(int);

//private:
    /**
     * @hash   -1007430343
     * @symbol ?_getTicksAlive@AreaEffectCloud@@AEBA_JXZ
     */
    MCAPI __int64 _getTicksAlive() const;
    /**
     * @hash   -2145849785
     * @symbol ?_setSpawnTick@AreaEffectCloud@@AEAAX_J@Z
     */
    MCAPI void _setSpawnTick(__int64);
    /**
     * @hash   1659480219
     * @symbol ?_spawnParticles@AreaEffectCloud@@AEAAXAEAVRandom@@IM@Z
     */
    MCAPI void _spawnParticles(class Random &, unsigned int, float);

private:

};