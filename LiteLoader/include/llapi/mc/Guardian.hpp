/**
 * @file  Guardian.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   -901588820
     * @vftbl  8
     * @symbol ?reloadHardcoded@Guardian@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   -261007273
     * @vftbl  9
     * @symbol ?reloadHardcodedClient@Guardian@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Guardian();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
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
     * @hash   1989789162
     * @vftbl  113
     * @symbol ?setTarget@Guardian@@UEAAXPEAVActor@@@Z
     */
    virtual void setTarget(class Actor *);
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
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
     * @hash   396478111
     * @vftbl  271
     * @symbol ?_hurt@Guardian@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   2113461951
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@Guardian@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -195452514
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@Guardian@@MEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @hash   1440010436
     * @vftbl  284
     * @symbol ?_onSizeUpdated@Guardian@@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -650616950
     * @vftbl  300
     * @symbol ?aiStep@Guardian@@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @hash   2141201776
     * @vftbl  305
     * @symbol ?checkSpawnRules@Guardian@@UEAA_N_N@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vftbl  313
     * @symbol __unk_vfn_313
     */
    virtual void __unk_vfn_313();
    /**
     * @hash   548568395
     * @vftbl  314
     * @symbol ?getMaxHeadXRot@Guardian@@UEAAMXZ
     */
    virtual float getMaxHeadXRot();
    /**
     * @vftbl  317
     * @symbol __unk_vfn_317
     */
    virtual void __unk_vfn_317();
    /**
     * @vftbl  351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @vftbl  365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
    /**
     * @hash   -592902864
     * @vftbl  367
     * @symbol ?isDarkEnoughToSpawn@Guardian@@MEBA_NXZ
     */
    virtual bool isDarkEnoughToSpawn() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GUARDIAN
    /**
     * @hash   2058819633
     * @symbol ?canSeeInvisible@Guardian@@UEBA_NXZ
     */
    MCVAPI bool canSeeInvisible() const;
#endif
    /**
     * @hash   1690977453
     * @symbol ??0Guardian@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Guardian(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   176529240
     * @symbol ?getAttackDuration@Guardian@@QEAAHXZ
     */
    MCAPI int getAttackDuration();
    /**
     * @hash   2082196836
     * @symbol ?getMoveEyeVector@Guardian@@QEAA?AVVec3@@XZ
     */
    MCAPI class Vec3 getMoveEyeVector();
    /**
     * @hash   -1128866306
     * @symbol ?isElder@Guardian@@QEBA_NXZ
     */
    MCAPI bool isElder() const;
    /**
     * @hash   946055626
     * @symbol ?isElderGhost@Guardian@@QEBA_NXZ
     */
    MCAPI bool isElderGhost() const;
    /**
     * @hash   -1577529581
     * @symbol ?preAiStep@Guardian@@QEAAXXZ
     */
    MCAPI void preAiStep();
    /**
     * @hash   -813119320
     * @symbol ?setAttackTime@Guardian@@QEAAXH@Z
     */
    MCAPI void setAttackTime(int);
    /**
     * @hash   -617435648
     * @symbol ?setElder@Guardian@@QEAAX_N@Z
     */
    MCAPI void setElder(bool);

//protected:
    /**
     * @hash   -1101982655
     * @symbol ?registerLoopingSounds@Guardian@@IEAAXXZ
     */
    MCAPI void registerLoopingSounds();

//private:

protected:

private:
    /**
     * @hash   -1814788461
     * @symbol ?ATTACK_TIME@Guardian@@0HB
     */
    MCAPI static int const ATTACK_TIME;
    /**
     * @hash   -1400463903
     * @symbol ?FIRST_DAMAGE_TIME@Guardian@@0HB
     */
    MCAPI static int const FIRST_DAMAGE_TIME;

};