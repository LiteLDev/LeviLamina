/**
 * @file  DoorInteractGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Direction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DoorInteractGoal.
 *
 */
class DoorInteractGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOORINTERACTGOAL
public:
    class DoorInteractGoal& operator=(class DoorInteractGoal const &) = delete;
    DoorInteractGoal(class DoorInteractGoal const &) = delete;
    DoorInteractGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DoorInteractGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@DoorInteractGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@DoorInteractGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@DoorInteractGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  ?tick\@DoorInteractGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@DoorInteractGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0DoorInteractGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DoorInteractGoal(class Mob &);

//protected:
    /**
     * @symbol  ?_doorBlocksPath\@DoorInteractGoal\@\@IEBA_NXZ
     */
    MCAPI bool _doorBlocksPath() const;

//private:
    /**
     * @symbol  ?_findBlockingDoorAtPos\@DoorInteractGoal\@\@CAPEBVDoorBlock\@\@AEBVBlockPos\@\@AEBVMob\@\@PEAVPath\@\@AEAW4Type\@Direction\@\@3\@Z
     */
    MCAPI static class DoorBlock const * _findBlockingDoorAtPos(class BlockPos const &, class Mob const &, class Path *, enum class Direction::Type &, enum class Direction::Type &);

protected:

private:

};