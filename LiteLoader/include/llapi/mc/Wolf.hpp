/**
 * @file  Wolf.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~Wolf();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   -715889751
     * @vftbl  49
     * @symbol  ?normalTick\@Wolf\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @hash   1417354569
     * @vftbl  54
     * @symbol  ?addPassenger\@Wolf\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void addPassenger(class Actor &);
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
     * @hash   1634723037
     * @vftbl  121
     * @symbol  ?setSitting\@Wolf\@\@UEAAX_N\@Z
     */
    virtual void setSitting(bool);
    /**
     * @hash   468342610
     * @vftbl  134
     * @symbol  ?getAmbientSound\@Wolf\@\@UEBA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getAmbientSound() const;
    /**
     * @hash   667678452
     * @vftbl  142
     * @symbol  ?handleEntityEvent\@Wolf\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @hash   289225561
     * @vftbl  166
     * @symbol  ?load\@Wolf\@\@UEAA_NAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual bool load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @hash   1177964826
     * @vftbl  188
     * @symbol  ?onSynchedDataUpdate\@Wolf\@\@UEAAXH\@Z
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
     * @hash   1619660158
     * @vftbl  263
     * @symbol  ?_hurt\@Wolf\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl  285
     * @symbol  __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @vftbl  304
     * @symbol  __unk_vfn_304
     */
    virtual void __unk_vfn_304();
    /**
     * @hash   -1784696011
     * @vftbl  306
     * @symbol  ?isAlliedTo\@Wolf\@\@UEAA_NPEAVMob\@\@\@Z
     */
    virtual bool isAlliedTo(class Mob *);
    /**
     * @vftbl  308
     * @symbol  __unk_vfn_308
     */
    virtual void __unk_vfn_308();
    /**
     * @hash   928970525
     * @vftbl  335
     * @symbol  ?onBorn\@Wolf\@\@UEAAXAEAVActor\@\@0\@Z
     */
    virtual void onBorn(class Actor &, class Actor &);
    /**
     * @hash   -946520452
     * @vftbl  349
     * @symbol  ?newServerAiStep\@Wolf\@\@UEAAXXZ
     */
    virtual void newServerAiStep();
    /**
     * @vftbl  354
     * @symbol  __unk_vfn_354
     */
    virtual void __unk_vfn_354();
    /**
     * @hash   -413823506
     * @symbol  ??0Wolf\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Wolf(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   1927516305
     * @symbol  ?getHeadRollAngle\@Wolf\@\@QEAAMM\@Z
     */
    MCAPI float getHeadRollAngle(float);
    /**
     * @hash   721929366
     * @symbol  ?getShakeAnim\@Wolf\@\@QEBAMXZ
     */
    MCAPI float getShakeAnim() const;
    /**
     * @hash   -942645208
     * @symbol  ?getTailAngle\@Wolf\@\@QEAAMXZ
     */
    MCAPI float getTailAngle();
    /**
     * @hash   1180350270
     * @symbol  ?isShaking\@Wolf\@\@QEBA_NXZ
     */
    MCAPI bool isShaking() const;
    /**
     * @hash   -851796715
     * @symbol  ?postNormalTick\@Wolf\@\@QEAAXXZ
     */
    MCAPI void postNormalTick();

//private:
    /**
     * @hash   -2131993411
     * @symbol  ?_avoidSnowBury\@Wolf\@\@AEAAXXZ
     */
    MCAPI void _avoidSnowBury();

private:

};