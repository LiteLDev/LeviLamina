/**
 * @file  MoveTowardsDwellingRestrictionGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveTowardsDwellingRestrictionGoal.
 *
 */
class MoveTowardsDwellingRestrictionGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWARDSDWELLINGRESTRICTIONGOAL
public:
    class MoveTowardsDwellingRestrictionGoal& operator=(class MoveTowardsDwellingRestrictionGoal const &) = delete;
    MoveTowardsDwellingRestrictionGoal(class MoveTowardsDwellingRestrictionGoal const &) = delete;
    MoveTowardsDwellingRestrictionGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MoveTowardsDwellingRestrictionGoal();
    /**
     * @hash   -108896100
     * @vftbl  1
     * @symbol ?canUse@MoveTowardsDwellingRestrictionGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   1467408052
     * @vftbl  7
     * @symbol ?appendDebugInfo@MoveTowardsDwellingRestrictionGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   617323993
     * @symbol ??0MoveTowardsDwellingRestrictionGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI MoveTowardsDwellingRestrictionGoal(class Mob &);

};