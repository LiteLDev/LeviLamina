/**
 * @file  EndermanTakeBlockGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Goal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EndermanTakeBlockGoal.
 *
 */
class EndermanTakeBlockGoal : public Goal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERMANTAKEBLOCKGOAL
public:
    class EndermanTakeBlockGoal& operator=(class EndermanTakeBlockGoal const &) = delete;
    EndermanTakeBlockGoal(class EndermanTakeBlockGoal const &) = delete;
    EndermanTakeBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@EndermanTakeBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 6
     * @symbol ?tick\@EndermanTakeBlockGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@EndermanTakeBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl 10
     * @symbol ?getRandomNearbyBlockPos\@EndermanTakeBlockGoal\@\@MEBA?AVBlockPos\@\@AEBVVec3\@\@\@Z
     */
    virtual class BlockPos getRandomNearbyBlockPos(class Vec3 const &) const;
    /**
     * @symbol ??0EndermanTakeBlockGoal\@\@QEAA\@AEAVEnderMan\@\@\@Z
     */
    MCAPI EndermanTakeBlockGoal(class EnderMan &);

};
