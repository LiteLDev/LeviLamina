#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/animal/Animal.h"

class Wolf : public ::Animal {

public:
    // prevent constructor by default
    Wolf& operator=(Wolf const&) = delete;
    Wolf(Wolf const&)            = delete;
    Wolf()                       = delete;

public:
    // NOLINTBEGIN
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
     * @vftbl 48
     * @symbol ?addPassenger\@Wolf\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void addPassenger(class Actor&);
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
     * @vftbl 107
     * @symbol ?setSitting\@Wolf\@\@UEAAX_N\@Z
     */
    virtual void setSitting(bool);
    /**
     * @vftbl 119
     * @symbol ?getAmbientSound\@Wolf\@\@UEBA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getAmbientSound() const;
    /**
     * @vftbl 127
     * @symbol ?handleEntityEvent\@Wolf\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 151
     * @symbol ?load\@Wolf\@\@UEAA_NAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual bool load(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 173
     * @symbol ?onSynchedDataUpdate\@Wolf\@\@UEAAXH\@Z
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
     * @vftbl 240
     * @symbol ?_hurt\@Wolf\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253();
    /**
     * @vftbl 276
     * @symbol __unk_vfn_276
     */
    virtual void __unk_vfn_276();
    /**
     * @vftbl 278
     * @symbol ?isAlliedTo\@Wolf\@\@UEAA_NPEAVMob\@\@\@Z
     */
    virtual bool isAlliedTo(class Mob*);
    /**
     * @vftbl 280
     * @symbol __unk_vfn_280
     */
    virtual void __unk_vfn_280();
    /**
     * @vftbl 307
     * @symbol ?onBorn\@Wolf\@\@UEAAXAEAVActor\@\@0\@Z
     */
    virtual void onBorn(class Actor&, class Actor&);
    /**
     * @vftbl 318
     * @symbol ?newServerAiStep\@Wolf\@\@UEAAXXZ
     */
    virtual void newServerAiStep();
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323();
    /**
     * @symbol ??0Wolf\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Wolf(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
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
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_avoidSnowBury\@Wolf\@\@AEAAXXZ
     */
    MCAPI void _avoidSnowBury();
    // NOLINTEND
};
