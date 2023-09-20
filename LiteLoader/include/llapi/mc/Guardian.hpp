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
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl 76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
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
     * @vftbl 92
     * @symbol __unk_vfn_92
     */
    virtual void __unk_vfn_92();
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 100
     * @symbol ?setTarget\@Guardian\@\@UEAAXPEAVActor\@\@\@Z
     */
    virtual void setTarget(class Actor *);
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162();
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 198
     * @symbol __unk_vfn_198
     */
    virtual void __unk_vfn_198();
    /**
     * @vftbl 199
     * @symbol __unk_vfn_199
     */
    virtual void __unk_vfn_199();
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 236
     * @symbol ?_hurt\@Guardian\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 239
     * @symbol ?readAdditionalSaveData\@Guardian\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 240
     * @symbol ?addAdditionalSaveData\@Guardian\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
    /**
     * @vftbl 247
     * @symbol ?_onSizeUpdated\@Guardian\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl 248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl 262
     * @symbol ?checkSpawnRules\@Guardian\@\@UEAA_N_N\@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vftbl 270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl 271
     * @symbol ?getMaxHeadXRot\@Guardian\@\@UEAAMXZ
     */
    virtual float getMaxHeadXRot();
    /**
     * @vftbl 274
     * @symbol __unk_vfn_274
     */
    virtual void __unk_vfn_274();
    /**
     * @vftbl 318
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
