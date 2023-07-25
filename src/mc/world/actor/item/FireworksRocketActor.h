#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

class FireworksRocketActor : public ::PredictableProjectile {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREWORKSROCKETACTOR
public:
    FireworksRocketActor& operator=(FireworksRocketActor const&) = delete;
    FireworksRocketActor(FireworksRocketActor const&)            = delete;
    FireworksRocketActor()                                       = delete;
#endif

public:
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
     * @vftbl 41
     * @symbol ?lerpMotion\@FireworksRocketActor\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void lerpMotion(class Vec3 const&);
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
     * @symbol ?getShadowRadius\@FireworksRocketActor\@\@UEBAMXZ
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
     * @vftbl 127
     * @symbol ?handleEntityEvent\@FireworksRocketActor\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 173
     * @symbol ?onSynchedDataUpdate\@FireworksRocketActor\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int);
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
     * @symbol ?readAdditionalSaveData\@FireworksRocketActor\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@FireworksRocketActor\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
    /**
     * @symbol
     * ??0FireworksRocketActor\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI
    FireworksRocketActor(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    /**
     * @symbol ?init\@FireworksRocketActor\@\@QEAAXAEAVLevel\@\@AEBVVec3\@\@AEBVCompoundTag\@\@1UActorUniqueID\@\@_N\@Z
     */
    MCAPI void
    init(class Level&, class Vec3 const&, class CompoundTag const&, class Vec3 const&, struct ActorUniqueID, bool);
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

    // private:
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
    MCAPI void initTagData(class Random&);

private:
};
