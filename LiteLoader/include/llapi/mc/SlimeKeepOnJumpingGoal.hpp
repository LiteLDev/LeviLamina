/**
 * @file  SlimeKeepOnJumpingGoal.hpp
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
 * @brief MC class SlimeKeepOnJumpingGoal.
 *
 */
class SlimeKeepOnJumpingGoal : public Goal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEKEEPONJUMPINGGOAL
public:
    class SlimeKeepOnJumpingGoal& operator=(class SlimeKeepOnJumpingGoal const &) = delete;
    SlimeKeepOnJumpingGoal(class SlimeKeepOnJumpingGoal const &) = delete;
    SlimeKeepOnJumpingGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@SlimeKeepOnJumpingGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 6
     * @symbol ?tick\@SlimeKeepOnJumpingGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@SlimeKeepOnJumpingGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0SlimeKeepOnJumpingGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI SlimeKeepOnJumpingGoal(class Mob &);

};
