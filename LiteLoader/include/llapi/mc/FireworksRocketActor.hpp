/**
 * @file  FireworksRocketActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~FireworksRocketActor();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   -1359361773
     * @vftbl  46
     * @symbol ?lerpMotion@FireworksRocketActor@@UEAAXAEBVVec3@@@Z
     */
    virtual void lerpMotion(class Vec3 const &);
    /**
     * @hash   -799142650
     * @vftbl  48
     * @symbol ?normalTick@FireworksRocketActor@@UEAAXXZ
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
     * @hash   2142278657
     * @vftbl  79
     * @symbol ?getShadowRadius@FireworksRocketActor@@UEBAMXZ
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
     * @hash   -1160275055
     * @vftbl  141
     * @symbol ?handleEntityEvent@FireworksRocketActor@@UEAAXW4ActorEvent@@H@Z
     */
    virtual void handleEntityEvent(enum ActorEvent, int);
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @hash   2019280845
     * @vftbl  190
     * @symbol ?onSynchedDataUpdate@FireworksRocketActor@@UEAAXH@Z
     */
    virtual void onSynchedDataUpdate(int);
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
     * @hash   1865922235
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@FireworksRocketActor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -926491294
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@FireworksRocketActor@@MEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @hash   -1076562655
     * @symbol ??0FireworksRocketActor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI FireworksRocketActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   434518435
     * @symbol ?init@FireworksRocketActor@@QEAAXAEAVLevel@@AEBVVec3@@AEBVCompoundTag@@1UActorUniqueID@@_N@Z
     */
    MCAPI void init(class Level &, class Vec3 const &, class CompoundTag const &, class Vec3 const &, struct ActorUniqueID, bool);
    /**
     * @hash   1484151916
     * @symbol ?isAttachedToEntity@FireworksRocketActor@@QEBA_NXZ
     */
    MCAPI bool isAttachedToEntity() const;
    /**
     * @hash   -1465014491
     * @symbol ?postNormalTick@FireworksRocketActor@@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @hash   1367395054
     * @symbol ?setDispensed@FireworksRocketActor@@QEAAX_N@Z
     */
    MCAPI void setDispensed(bool);

//private:
    /**
     * @hash   -1263717747
     * @symbol ?checkAchievement@FireworksRocketActor@@AEBAXXZ
     */
    MCAPI void checkAchievement() const;
    /**
     * @hash   1701060639
     * @symbol ?dealExplosionDamage@FireworksRocketActor@@AEAAXXZ
     */
    MCAPI void dealExplosionDamage();
    /**
     * @hash   950133822
     * @symbol ?initTagData@FireworksRocketActor@@AEAAXAEAVRandom@@@Z
     */
    MCAPI void initTagData(class Random &);

private:

};