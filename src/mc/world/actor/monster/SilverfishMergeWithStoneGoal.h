#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

class SilverfishMergeWithStoneGoal : public ::RandomStrollGoal {

public:
    // prevent constructor by default
    SilverfishMergeWithStoneGoal& operator=(SilverfishMergeWithStoneGoal const&) = delete;
    SilverfishMergeWithStoneGoal(SilverfishMergeWithStoneGoal const&)            = delete;
    SilverfishMergeWithStoneGoal()                                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@SilverfishMergeWithStoneGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@SilverfishMergeWithStoneGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@SilverfishMergeWithStoneGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@SilverfishMergeWithStoneGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @symbol ??0SilverfishMergeWithStoneGoal\@\@QEAA\@AEAVSilverfish\@\@\@Z
     */
    MCAPI SilverfishMergeWithStoneGoal(class Silverfish&); // NOLINT
};
