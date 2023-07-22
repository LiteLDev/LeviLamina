/**
 * @file  MoveToBlockGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveToBlockGoal.
 *
 */
class MoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOBLOCKGOAL
public:
    class MoveToBlockGoal& operator=(class MoveToBlockGoal const &) = delete;
    MoveToBlockGoal(class MoveToBlockGoal const &) = delete;
    MoveToBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MoveToBlockGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@MoveToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@MoveToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@MoveToBlockGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@MoveToBlockGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@MoveToBlockGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@MoveToBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0MoveToBlockGoal\@\@QEAA\@AEAVMob\@\@MHHHHMVVec3\@\@MW4TargetSelectionMethod\@\@V?$vector\@VActorDefinitionTrigger\@\@V?$allocator\@VActorDefinitionTrigger\@\@\@std\@\@\@std\@\@3V?$vector\@VItemDescriptor\@\@V?$allocator\@VItemDescriptor\@\@\@std\@\@\@5\@AEBVActorFilterGroup\@\@\@Z
     */
    MCAPI MoveToBlockGoal(class Mob &, float, int, int, int, int, float, class Vec3, float, enum class TargetSelectionMethod, std::vector<class ActorDefinitionTrigger>, std::vector<class ActorDefinitionTrigger>, std::vector<class ItemDescriptor>, class ActorFilterGroup const &);

//private:
    /**
     * @symbol  ?_checkIfStuck\@MoveToBlockGoal\@\@AEAAXXZ
     */
    MCAPI void _checkIfStuck();
    /**
     * @symbol  ?_isValidTarget\@MoveToBlockGoal\@\@AEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool _isValidTarget(class Block const &) const;
    /**
     * @symbol  ?_moveToBlock\@MoveToBlockGoal\@\@AEAAXXZ
     */
    MCAPI void _moveToBlock();
    /**
     * @symbol  ?_pathIsValid\@MoveToBlockGoal\@\@AEAA_NPEBVPath\@\@\@Z
     */
    MCAPI bool _pathIsValid(class Path const *);

private:

};