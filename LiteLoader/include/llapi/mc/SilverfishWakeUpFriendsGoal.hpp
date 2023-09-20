/**
 * @file  SilverfishWakeUpFriendsGoal.hpp
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
 * @brief MC class SilverfishWakeUpFriendsGoal.
 *
 */
class SilverfishWakeUpFriendsGoal : public Goal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SILVERFISHWAKEUPFRIENDSGOAL
public:
    class SilverfishWakeUpFriendsGoal& operator=(class SilverfishWakeUpFriendsGoal const &) = delete;
    SilverfishWakeUpFriendsGoal(class SilverfishWakeUpFriendsGoal const &) = delete;
    SilverfishWakeUpFriendsGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@SilverfishWakeUpFriendsGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 6
     * @symbol ?tick\@SilverfishWakeUpFriendsGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@SilverfishWakeUpFriendsGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0SilverfishWakeUpFriendsGoal\@\@QEAA\@AEAVSilverfish\@\@\@Z
     */
    MCAPI SilverfishWakeUpFriendsGoal(class Silverfish &);

};
