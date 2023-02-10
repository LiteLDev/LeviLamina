/**
 * @file  MountPathingGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MountPathingGoal.
 *
 */
class MountPathingGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOUNTPATHINGGOAL
public:
    class MountPathingGoal& operator=(class MountPathingGoal const &) = delete;
    MountPathingGoal(class MountPathingGoal const &) = delete;
    MountPathingGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MountPathingGoal();
    /**
     * @hash   1062849593
     * @vftbl  1
     * @symbol  ?canUse\@MountPathingGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1506663383
     * @vftbl  2
     * @symbol  ?canContinueToUse\@MountPathingGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -875653662
     * @vftbl  4
     * @symbol  ?start\@MountPathingGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1613106002
     * @vftbl  5
     * @symbol  ?stop\@MountPathingGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1460850627
     * @vftbl  6
     * @symbol  ?tick\@MountPathingGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1560476361
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@MountPathingGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol  __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @hash   1566583361
     * @vftbl  10
     * @symbol  ?_getAttackReachSqr\@MountPathingGoal\@\@MEAAMXZ
     */
    virtual float _getAttackReachSqr();
    /**
     * @hash   174876519
     * @symbol  ??0MountPathingGoal\@\@QEAA\@AEAVMob\@\@MM_N\@Z
     */
    MCAPI MountPathingGoal(class Mob &, float, float, bool);

};