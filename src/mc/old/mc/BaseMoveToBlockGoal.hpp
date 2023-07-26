/**
 * @file  BaseMoveToBlockGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "BaseMoveToGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BaseMoveToBlockGoal.
 *
 */
class BaseMoveToBlockGoal : public BaseMoveToGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEMOVETOBLOCKGOAL
public:
    class BaseMoveToBlockGoal& operator=(class BaseMoveToBlockGoal const &) = delete;
    BaseMoveToBlockGoal(class BaseMoveToBlockGoal const &) = delete;
    BaseMoveToBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BaseMoveToBlockGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@BaseMoveToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@BaseMoveToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
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
     * @vftbl  14
     * @symbol  ?_moveToBlock\@BaseMoveToBlockGoal\@\@MEAAXXZ
     */
    virtual void _moveToBlock();
    /**
     * @vftbl  17
     * @symbol  ?findTargetBlock\@BaseMoveToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool findTargetBlock();
    /**
     * @symbol  ??0BaseMoveToBlockGoal\@\@QEAA\@AEAVMob\@\@MHHHMM\@Z
     */
    MCAPI BaseMoveToBlockGoal(class Mob &, float, int, int, int, float, float);

};