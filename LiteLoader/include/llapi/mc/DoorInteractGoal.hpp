/**
 * @file  DoorInteractGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   199620361
     * @vftbl  1
     * @symbol  ?canUse\@DoorInteractGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   643587911
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
     * @hash   1885525954
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
     * @hash   1249480557
     * @vftbl  6
     * @symbol  ?tick\@DoorInteractGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -2119706073
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@DoorInteractGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   100867366
     * @symbol  ??0DoorInteractGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DoorInteractGoal(class Mob &);

//protected:
    /**
     * @hash   1397936877
     * @symbol  ?_doorBlocksPath\@DoorInteractGoal\@\@IEBA_NXZ
     */
    MCAPI bool _doorBlocksPath() const;

//private:
    /**
     * @hash   1751828933
     * @symbol  ?_findBlockingDoorAtPos\@DoorInteractGoal\@\@CAPEBVDoorBlock\@\@AEBVBlockPos\@\@AEBVMob\@\@PEAVPath\@\@AEAW4Type\@Direction\@\@3\@Z
     */
    MCAPI static class DoorBlock const * _findBlockingDoorAtPos(class BlockPos const &, class Mob const &, class Path *, enum class Direction::Type &, enum class Direction::Type &);

protected:

private:

};