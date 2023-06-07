/**
 * @file  Guardian.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Guardian.
 *
 */
class Guardian : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GUARDIAN
public:
    class Guardian& operator=(class Guardian const &) = delete;
    Guardian(class Guardian const &) = delete;
    Guardian() = delete;
#endif

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Guardian\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 11
     * @symbol ?reloadHardcodedClient\@Guardian\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 68
     * @symbol __unk_vfn_68
     */
    virtual void __unk_vfn_68();
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 104
     * @symbol __unk_vfn_104
     */
    virtual void __unk_vfn_104();
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl 112
     * @symbol ?setTarget\@Guardian\@\@UEAAXPEAVActor\@\@\@Z
     */
    virtual void setTarget(class Actor *);
    /**
     * @vftbl 176
     * @symbol __unk_vfn_176
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl 190
     * @symbol __unk_vfn_190
     */
    virtual void __unk_vfn_190();
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 216
     * @symbol __unk_vfn_216
     */
    virtual void __unk_vfn_216();
    /**
     * @vftbl 232
     * @symbol __unk_vfn_232
     */
    virtual void __unk_vfn_232();
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 252
     * @symbol __unk_vfn_252
     */
    virtual void __unk_vfn_252();
    /**
     * @vftbl 253
     * @symbol ?_hurt\@Guardian\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 256
     * @symbol ?readAdditionalSaveData\@Guardian\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 257
     * @symbol ?addAdditionalSaveData\@Guardian\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 266
     * @symbol ?_onSizeUpdated\@Guardian\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl 267
     * @symbol __unk_vfn_267
     */
    virtual void __unk_vfn_267();
    /**
     * @vftbl 285
     * @symbol ?checkSpawnRules\@Guardian\@\@UEAA_N_N\@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vftbl 293
     * @symbol __unk_vfn_293
     */
    virtual void __unk_vfn_293();
    /**
     * @vftbl 294
     * @symbol ?getMaxHeadXRot\@Guardian\@\@UEAAMXZ
     */
    virtual float getMaxHeadXRot();
    /**
     * @vftbl 297
     * @symbol __unk_vfn_297
     */
    virtual void __unk_vfn_297();
    /**
     * @vftbl 343
     * @symbol __unk_vfn_343
     */
    virtual void __unk_vfn_343();
    /**
     * @vftbl 345
     * @symbol ?isDarkEnoughToSpawn\@Guardian\@\@MEBA_NXZ
     */
    virtual bool isDarkEnoughToSpawn() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GUARDIAN
    /**
     * @symbol ?canSeeInvisible\@Guardian\@\@UEBA_NXZ
     */
    MCVAPI bool canSeeInvisible() const;
#endif
    /**
     * @symbol ??0Guardian\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Guardian(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getAttackDuration\@Guardian\@\@QEAAHXZ
     */
    MCAPI int getAttackDuration();
    /**
     * @symbol ?getMoveEyeVector\@Guardian\@\@QEAA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getMoveEyeVector();
    /**
     * @symbol ?getTargetEntity\@Guardian\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor * getTargetEntity() const;
    /**
     * @symbol ?isElder\@Guardian\@\@QEBA_NXZ
     */
    MCAPI bool isElder() const;
    /**
     * @symbol ?isElderGhost\@Guardian\@\@QEBA_NXZ
     */
    MCAPI bool isElderGhost() const;
    /**
     * @symbol ?preAiStep\@Guardian\@\@QEAAXXZ
     */
    MCAPI void preAiStep();
    /**
     * @symbol ?setAttackTime\@Guardian\@\@QEAAXH\@Z
     */
    MCAPI void setAttackTime(int);
    /**
     * @symbol ?setElder\@Guardian\@\@QEAAX_N\@Z
     */
    MCAPI void setElder(bool);

//protected:
    /**
     * @symbol ?registerLoopingSounds\@Guardian\@\@IEAAXXZ
     */
    MCAPI void registerLoopingSounds();

//private:

protected:

private:
    /**
     * @symbol ?ATTACK_TIME\@Guardian\@\@0HB
     */
    MCAPI static int const ATTACK_TIME;
    /**
     * @symbol ?FIRST_DAMAGE_TIME\@Guardian\@\@0HB
     */
    MCAPI static int const FIRST_DAMAGE_TIME;

};
