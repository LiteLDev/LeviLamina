/**
 * @file  SummonActorGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SummonActorGoal.
 *
 */
class SummonActorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUMMONACTORGOAL
public:
    class SummonActorGoal& operator=(class SummonActorGoal const &) = delete;
    SummonActorGoal(class SummonActorGoal const &) = delete;
    SummonActorGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SummonActorGoal();
    /**
     * @hash   -708754343
     * @vftbl  1
     * @symbol  ?canUse\@SummonActorGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   31984535
     * @vftbl  2
     * @symbol  ?canContinueToUse\@SummonActorGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   515815938
     * @vftbl  4
     * @symbol  ?start\@SummonActorGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1405982098
     * @vftbl  5
     * @symbol  ?stop\@SummonActorGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   1244729053
     * @vftbl  6
     * @symbol  ?tick\@SummonActorGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -110526441
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@SummonActorGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1745402685
     * @symbol  ??0SummonActorGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@USummonSpellData\@\@V?$allocator\@USummonSpellData\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI SummonActorGoal(class Mob &, std::vector<struct SummonSpellData> const &);

//private:
    /**
     * @hash   -1293456478
     * @symbol  ?_createSpellEntity\@SummonActorGoal\@\@AEBAXMMMMMHUActorDefinitionIdentifier\@\@\@Z
     */
    MCAPI void _createSpellEntity(float, float, float, float, float, int, struct ActorDefinitionIdentifier) const;
    /**
     * @hash   -1369476813
     * @symbol  ?_selectBestSpell\@SummonActorGoal\@\@AEBAHAEAVActor\@\@\@Z
     */
    MCAPI int _selectBestSpell(class Actor &) const;

private:

};