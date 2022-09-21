/**
 * @file  MC/Wolf.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Wolf.
 *
 */
class Wolf : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WOLF
public:
    class Wolf& operator=(class Wolf const &) = delete;
    Wolf(class Wolf const &) = delete;
    Wolf() = delete;
#endif

public:
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Wolf();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   -63639831
     * @vftbl  48
     * @symbol ?normalTick@Wolf@@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @hash   2069604489
     * @vftbl  53
     * @symbol ?addPassenger@Wolf@@UEAAXAEAVActor@@@Z
     */
    virtual void addPassenger(class Actor &);
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
     * @hash   -2008301859
     * @vftbl  119
     * @symbol ?setSitting@Wolf@@UEAAX_N@Z
     */
    virtual void setSitting(bool);
    /**
     * @hash   1120592530
     * @vftbl  133
     * @symbol ?getAmbientSound@Wolf@@UEBA?AW4LevelSoundEvent@@XZ
     */
    virtual enum LevelSoundEvent getAmbientSound() const;
    /**
     * @hash   1319928372
     * @vftbl  141
     * @symbol ?handleEntityEvent@Wolf@@UEAAXW4ActorEvent@@H@Z
     */
    virtual void handleEntityEvent(enum ActorEvent, int);
    /**
     * @hash   941475481
     * @vftbl  167
     * @symbol ?load@Wolf@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual bool load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @hash   1830183994
     * @vftbl  190
     * @symbol ?onSynchedDataUpdate@Wolf@@UEAAXH@Z
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
     * @hash   -2023011090
     * @vftbl  271
     * @symbol ?_hurt@Wolf@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @vftbl  313
     * @symbol __unk_vfn_313
     */
    virtual void __unk_vfn_313();
    /**
     * @hash   -1132446091
     * @vftbl  315
     * @symbol ?isAlliedTo@Wolf@@UEAA_NPEAVMob@@@Z
     */
    virtual bool isAlliedTo(class Mob *);
    /**
     * @vftbl  317
     * @symbol __unk_vfn_317
     */
    virtual void __unk_vfn_317();
    /**
     * @hash   1581205069
     * @vftbl  344
     * @symbol ?onBorn@Wolf@@UEAAXAEAVActor@@0@Z
     */
    virtual void onBorn(class Actor &, class Actor &);
    /**
     * @vftbl  351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @hash   -294270532
     * @vftbl  360
     * @symbol ?newServerAiStep@Wolf@@UEAAXXZ
     */
    virtual void newServerAiStep();
    /**
     * @vftbl  365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
    /**
     * @hash   238733934
     * @symbol ??0Wolf@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Wolf(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -1715201071
     * @symbol ?getHeadRollAngle@Wolf@@QEAAMM@Z
     */
    MCAPI float getHeadRollAngle(float);
    /**
     * @hash   1374179286
     * @symbol ?getShakeAnim@Wolf@@QEBAMXZ
     */
    MCAPI float getShakeAnim() const;
    /**
     * @hash   -290395288
     * @symbol ?getTailAngle@Wolf@@QEAAMXZ
     */
    MCAPI float getTailAngle();
    /**
     * @hash   1832600190
     * @symbol ?isShaking@Wolf@@QEBA_NXZ
     */
    MCAPI bool isShaking() const;
    /**
     * @hash   -199577547
     * @symbol ?postNormalTick@Wolf@@QEAAXXZ
     */
    MCAPI void postNormalTick();

//private:
    /**
     * @hash   -1479651235
     * @symbol ?_avoidSnowBury@Wolf@@AEAAXXZ
     */
    MCAPI void _avoidSnowBury();

private:

};