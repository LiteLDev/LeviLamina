/**
 * @file  PlayDeadGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayDeadGoal.
 *
 */
class PlayDeadGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYDEADGOAL
public:
    class PlayDeadGoal& operator=(class PlayDeadGoal const &) = delete;
    PlayDeadGoal(class PlayDeadGoal const &) = delete;
    PlayDeadGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PlayDeadGoal();
    /**
     * @hash   102488917
     * @vftbl  1
     * @symbol  ?canUse\@PlayDeadGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   164227955
     * @vftbl  2
     * @symbol  ?canContinueToUse\@PlayDeadGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1634674606
     * @vftbl  4
     * @symbol  ?start\@PlayDeadGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1740149902
     * @vftbl  5
     * @symbol  ?stop\@PlayDeadGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   610409819
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@PlayDeadGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1342614894
     * @symbol  ??0PlayDeadGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI PlayDeadGoal(class Mob &);

};