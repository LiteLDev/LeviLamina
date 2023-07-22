/**
 * @file  FindCoverGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FindCoverGoal.
 *
 */
class FindCoverGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINDCOVERGOAL
public:
    class FindCoverGoal& operator=(class FindCoverGoal const &) = delete;
    FindCoverGoal(class FindCoverGoal const &) = delete;
    FindCoverGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FindCoverGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@FindCoverGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@FindCoverGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@FindCoverGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@FindCoverGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@FindCoverGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0FindCoverGoal\@\@QEAA\@AEAVMob\@\@MM\@Z
     */
    MCAPI FindCoverGoal(class Mob &, float, float);
    /**
     * @symbol  ?getMob\@FindCoverGoal\@\@QEBAAEBVMob\@\@XZ
     */
    MCAPI class Mob const & getMob() const;

//private:
    /**
     * @symbol  ?getHidePos\@FindCoverGoal\@\@AEBA_NAEAVVec3\@\@\@Z
     */
    MCAPI bool getHidePos(class Vec3 &) const;

private:

};