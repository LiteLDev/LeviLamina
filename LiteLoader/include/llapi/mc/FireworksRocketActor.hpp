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
     * @vftbl 47
     * @symbol ?lerpMotion\@FireworksRocketActor\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void lerpMotion(class Vec3 const &);
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
     * @symbol ?getShadowRadius\@FireworksRocketActor\@\@UEBAMXZ
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
     * @vftbl 141
     * @symbol ?handleEntityEvent\@FireworksRocketActor\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 187
     * @symbol ?onSynchedDataUpdate\@FireworksRocketActor\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int);
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
     * @symbol ?readAdditionalSaveData\@FireworksRocketActor\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 265
     * @symbol ?addAdditionalSaveData\@FireworksRocketActor\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 268
     * @symbol __unk_vfn_268
     */
    virtual void __unk_vfn_268();
    /**
     * @symbol ??0FireworksRocketActor\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI FireworksRocketActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?init\@FireworksRocketActor\@\@QEAAXAEAVLevel\@\@AEBVVec3\@\@AEBVCompoundTag\@\@1UActorUniqueID\@\@_N\@Z
     */
    MCAPI void init(class Level &, class Vec3 const &, class CompoundTag const &, class Vec3 const &, struct ActorUniqueID, bool);
    /**
     * @symbol ?isAttachedToEntity\@FireworksRocketActor\@\@QEBA_NXZ
     */
    MCAPI bool isAttachedToEntity() const;
    /**
     * @symbol ?postNormalTick\@FireworksRocketActor\@\@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @symbol ?setDispensed\@FireworksRocketActor\@\@QEAAX_N\@Z
     */
    MCAPI void setDispensed(bool);

//private:
    /**
     * @symbol ?checkAchievement\@FireworksRocketActor\@\@AEBAXXZ
     */
    MCAPI void checkAchievement() const;
    /**
     * @symbol ?dealExplosionDamage\@FireworksRocketActor\@\@AEAAXXZ
     */
    MCAPI void dealExplosionDamage();
    /**
     * @symbol ?initTagData\@FireworksRocketActor\@\@AEAAXAEAVRandom\@\@\@Z
     */
    MCAPI void initTagData(class Random &);

private:

};
