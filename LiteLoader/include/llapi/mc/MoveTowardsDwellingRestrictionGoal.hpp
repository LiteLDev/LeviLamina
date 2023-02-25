/**
 * @file  MoveTowardsDwellingRestrictionGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MoveTowardsRestrictionGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveTowardsDwellingRestrictionGoal.
 *
 */
class MoveTowardsDwellingRestrictionGoal : public MoveTowardsRestrictionGoal {

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
     * @symbol  __unk_destructor_0
     */
    virtual ~MoveTowardsDwellingRestrictionGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@MoveTowardsDwellingRestrictionGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@MoveTowardsDwellingRestrictionGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0MoveTowardsDwellingRestrictionGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI MoveTowardsDwellingRestrictionGoal(class Mob &);

};