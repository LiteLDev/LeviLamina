/**
 * @file  DragonTakeoffGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DragonTakeoffGoal.
 *
 */
class DragonTakeoffGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONTAKEOFFGOAL
public:
    class DragonTakeoffGoal& operator=(class DragonTakeoffGoal const &) = delete;
    DragonTakeoffGoal(class DragonTakeoffGoal const &) = delete;
    DragonTakeoffGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DragonTakeoffGoal();
    /**
     * @hash   877383784
     * @vftbl  1
     * @symbol  ?canUse\@DragonTakeoffGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   707453878
     * @vftbl  2
     * @symbol  ?canContinueToUse\@DragonTakeoffGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1377438591
     * @vftbl  4
     * @symbol  ?start\@DragonTakeoffGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1829095649
     * @vftbl  5
     * @symbol  ?stop\@DragonTakeoffGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1351293444
     * @vftbl  6
     * @symbol  ?tick\@DragonTakeoffGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   851932824
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@DragonTakeoffGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   296198431
     * @symbol  ??0DragonTakeoffGoal\@\@QEAA\@AEAVEnderDragon\@\@\@Z
     */
    MCAPI DragonTakeoffGoal(class EnderDragon &);

//private:
    /**
     * @hash   880157677
     * @symbol  ?_findNewTarget\@DragonTakeoffGoal\@\@AEAAXXZ
     */
    MCAPI void _findNewTarget();

private:

};