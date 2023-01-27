/**
 * @file  AreaEffectCloud.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Actor.hpp"

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
     * @hash   501315382
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@AreaEffectCloud\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~AreaEffectCloud();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   -1314700636
     * @vftbl  49
     * @symbol  ?normalTick\@AreaEffectCloud\@\@UEAAXXZ
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
     * @hash   591556015
     * @vftbl  81
     * @symbol  ?getShadowRadius\@AreaEffectCloud\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
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
     * @hash   554607100
     * @vftbl  120
     * @symbol  ?setOwner\@AreaEffectCloud\@\@UEAAXUActorUniqueID\@\@\@Z
     */
    virtual void setOwner(struct ActorUniqueID);
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
     * @hash   369558185
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@AreaEffectCloud\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1795715780
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@AreaEffectCloud\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   2070513699
     * @symbol  ??0AreaEffectCloud\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI AreaEffectCloud(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -1343447212
     * @symbol  ?addAreaEffect\@AreaEffectCloud\@\@QEAAXVMobEffectInstance\@\@\@Z
     */
    MCAPI void addAreaEffect(class MobEffectInstance);
    /**
     * @hash   942835884
     * @symbol  ?getDuration\@AreaEffectCloud\@\@QEBAHXZ
     */
    MCAPI int getDuration() const;
    /**
     * @hash   1330980906
     * @symbol  ?getEffectiveRadius\@AreaEffectCloud\@\@QEBAMXZ
     */
    MCAPI float getEffectiveRadius() const;
    /**
     * @hash   125467480
     * @symbol  ?getParticle\@AreaEffectCloud\@\@QEBA?AW4ParticleType\@\@XZ
     */
    MCAPI enum class ParticleType getParticle() const;
    /**
     * @hash   1513330109
     * @symbol  ?notifyPickup\@AreaEffectCloud\@\@QEAAXXZ
     */
    MCAPI void notifyPickup();
    /**
     * @hash   355921434
     * @symbol  ?setAffectOwner\@AreaEffectCloud\@\@QEAAX_N\@Z
     */
    MCAPI void setAffectOwner(bool);
    /**
     * @hash   -1051182598
     * @symbol  ?setDuration\@AreaEffectCloud\@\@QEAAXH\@Z
     */
    MCAPI void setDuration(int);
    /**
     * @hash   256357342
     * @symbol  ?setInitialRadius\@AreaEffectCloud\@\@QEAAXM\@Z
     */
    MCAPI void setInitialRadius(float);
    /**
     * @hash   -1455167370
     * @symbol  ?setParticle\@AreaEffectCloud\@\@QEAAXW4ParticleType\@\@\@Z
     */
    MCAPI void setParticle(enum class ParticleType);
    /**
     * @hash   -1871620310
     * @symbol  ?setParticleColor\@AreaEffectCloud\@\@QEAAXAEAVColor\@mce\@\@\@Z
     */
    MCAPI void setParticleColor(class mce::Color &);
    /**
     * @hash   -768433023
     * @symbol  ?setPotion\@AreaEffectCloud\@\@QEAAXF\@Z
     */
    MCAPI void setPotion(short);
    /**
     * @hash   -567799594
     * @symbol  ?setRadiusChangeOnPickup\@AreaEffectCloud\@\@QEAAXM\@Z
     */
    MCAPI void setRadiusChangeOnPickup(float);
    /**
     * @hash   -1675173698
     * @symbol  ?setRadiusOnUse\@AreaEffectCloud\@\@QEAAXM\@Z
     */
    MCAPI void setRadiusOnUse(float);
    /**
     * @hash   467434538
     * @symbol  ?setRadiusPerTick\@AreaEffectCloud\@\@QEAAXM\@Z
     */
    MCAPI void setRadiusPerTick(float);
    /**
     * @hash   -369477530
     * @symbol  ?setReapplicationDelay\@AreaEffectCloud\@\@QEAAXH\@Z
     */
    MCAPI void setReapplicationDelay(int);

//private:
    /**
     * @hash   -1662939975
     * @symbol  ?_getTicksAlive\@AreaEffectCloud\@\@AEBA_JXZ
     */
    MCAPI __int64 _getTicksAlive() const;
    /**
     * @hash   1493623255
     * @symbol  ?_setSpawnTick\@AreaEffectCloud\@\@AEAAX_J\@Z
     */
    MCAPI void _setSpawnTick(__int64);
    /**
     * @hash   1004016715
     * @symbol  ?_spawnParticles\@AreaEffectCloud\@\@AEAAXAEAVRandom\@\@IM\@Z
     */
    MCAPI void _spawnParticles(class Random &, unsigned int, float);

private:

};