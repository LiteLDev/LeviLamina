/**
 * @file  FireworksRocketActor.hpp
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
 * @brief MC class FireworksRocketActor.
 *
 */
class FireworksRocketActor : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREWORKSROCKETACTOR
public:
    class FireworksRocketActor& operator=(class FireworksRocketActor const &) = delete;
    FireworksRocketActor(class FireworksRocketActor const &) = delete;
    FireworksRocketActor() = delete;
#endif

public:
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~FireworksRocketActor();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   -2012318989
     * @vftbl  47
     * @symbol  ?lerpMotion\@FireworksRocketActor\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void lerpMotion(class Vec3 const &);
    /**
     * @hash   -1452069114
     * @vftbl  49
     * @symbol  ?normalTick\@FireworksRocketActor\@\@UEAAXXZ
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
     * @hash   -1854963151
     * @vftbl  81
     * @symbol  ?getShadowRadius\@FireworksRocketActor\@\@UEBAMXZ
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
     * @hash   -1813293775
     * @vftbl  142
     * @symbol  ?handleEntityEvent\@FireworksRocketActor\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @hash   1366400509
     * @vftbl  188
     * @symbol  ?onSynchedDataUpdate\@FireworksRocketActor\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int);
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
     * @hash   1213226411
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@FireworksRocketActor\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1579556142
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@FireworksRocketActor\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   -1729996527
     * @symbol  ??0FireworksRocketActor\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI FireworksRocketActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -218484909
     * @symbol  ?init\@FireworksRocketActor\@\@QEAAXAEAVLevel\@\@AEBVVec3\@\@AEBVCompoundTag\@\@1UActorUniqueID\@\@_N\@Z
     */
    MCAPI void init(class Level &, class Vec3 const &, class CompoundTag const &, class Vec3 const &, struct ActorUniqueID, bool);
    /**
     * @hash   831194700
     * @symbol  ?isAttachedToEntity\@FireworksRocketActor\@\@QEBA_NXZ
     */
    MCAPI bool isAttachedToEntity() const;
    /**
     * @hash   -2117879451
     * @symbol  ?postNormalTick\@FireworksRocketActor\@\@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @hash   712438958
     * @symbol  ?setDispensed\@FireworksRocketActor\@\@QEAAX_N\@Z
     */
    MCAPI void setDispensed(bool);

//private:
    /**
     * @hash   -1916782595
     * @symbol  ?checkAchievement\@FireworksRocketActor\@\@AEBAXXZ
     */
    MCAPI void checkAchievement() const;
    /**
     * @hash   1048011167
     * @symbol  ?dealExplosionDamage\@FireworksRocketActor\@\@AEAAXXZ
     */
    MCAPI void dealExplosionDamage();
    /**
     * @hash   297161230
     * @symbol  ?initTagData\@FireworksRocketActor\@\@AEAAXAEAVRandom\@\@\@Z
     */
    MCAPI void initTagData(class Random &);

private:

};