/**
 * @file  SilverfishMergeWithStoneGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "RandomStrollGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SilverfishMergeWithStoneGoal.
 *
 */
class SilverfishMergeWithStoneGoal : public RandomStrollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SILVERFISHMERGEWITHSTONEGOAL
public:
    class SilverfishMergeWithStoneGoal& operator=(class SilverfishMergeWithStoneGoal const &) = delete;
    SilverfishMergeWithStoneGoal(class SilverfishMergeWithStoneGoal const &) = delete;
    SilverfishMergeWithStoneGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SilverfishMergeWithStoneGoal();
    /**
     * @hash   -2001182703
     * @vftbl  1
     * @symbol  ?canUse\@SilverfishMergeWithStoneGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1575396447
     * @vftbl  2
     * @symbol  ?canContinueToUse\@SilverfishMergeWithStoneGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @hash   -113399350
     * @vftbl  4
     * @symbol  ?start\@SilverfishMergeWithStoneGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1591238641
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@SilverfishMergeWithStoneGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @hash   466506248
     * @symbol  ??0SilverfishMergeWithStoneGoal\@\@QEAA\@AEAVSilverfish\@\@\@Z
     */
    MCAPI SilverfishMergeWithStoneGoal(class Silverfish &);

};