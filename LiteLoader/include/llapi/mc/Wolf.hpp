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
     * @vftbl 54
     * @symbol ?addPassenger\@Wolf\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void addPassenger(class Actor &);
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
     * @vftbl 120
     * @symbol ?setSitting\@Wolf\@\@UEAAX_N\@Z
     */
    virtual void setSitting(bool);
    /**
     * @vftbl 133
     * @symbol ?getAmbientSound\@Wolf\@\@UEBA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getAmbientSound() const;
    /**
     * @vftbl 141
     * @symbol ?handleEntityEvent\@Wolf\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 165
     * @symbol ?load\@Wolf\@\@UEAA_NAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual bool load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 187
     * @symbol ?onSynchedDataUpdate\@Wolf\@\@UEAAXH\@Z
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
     * @vftbl 261
     * @symbol ?_hurt\@Wolf\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 268
     * @symbol __unk_vfn_268
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl 275
     * @symbol __unk_vfn_275
     */
    virtual void __unk_vfn_275();
    /**
     * @vftbl 301
     * @symbol __unk_vfn_301
     */
    virtual void __unk_vfn_301();
    /**
     * @vftbl 303
     * @symbol ?isAlliedTo\@Wolf\@\@UEAA_NPEAVMob\@\@\@Z
     */
    virtual bool isAlliedTo(class Mob *);
    /**
     * @vftbl 305
     * @symbol __unk_vfn_305
     */
    virtual void __unk_vfn_305();
    /**
     * @vftbl 332
     * @symbol ?onBorn\@Wolf\@\@UEAAXAEAVActor\@\@0\@Z
     */
    virtual void onBorn(class Actor &, class Actor &);
    /**
     * @vftbl 346
     * @symbol ?newServerAiStep\@Wolf\@\@UEAAXXZ
     */
    virtual void newServerAiStep();
    /**
     * @vftbl 351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @symbol ??0Wolf\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Wolf(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getHeadRollAngle\@Wolf\@\@QEAAMM\@Z
     */
    MCAPI float getHeadRollAngle(float);
    /**
     * @symbol ?getShakeAnim\@Wolf\@\@QEBAMXZ
     */
    MCAPI float getShakeAnim() const;
    /**
     * @symbol ?getTailAngle\@Wolf\@\@QEAAMXZ
     */
    MCAPI float getTailAngle();
    /**
     * @symbol ?isShaking\@Wolf\@\@QEBA_NXZ
     */
    MCAPI bool isShaking() const;
    /**
     * @symbol ?postNormalTick\@Wolf\@\@QEAAXXZ
     */
    MCAPI void postNormalTick();

//private:
    /**
     * @symbol ?_avoidSnowBury\@Wolf\@\@AEAAXXZ
     */
    MCAPI void _avoidSnowBury();

private:

};
