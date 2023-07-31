#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/StompBlockGoal.h"

class StompEggGoal : public ::StompBlockGoal {

public:
    // prevent constructor by default
    StompEggGoal& operator=(StompEggGoal const&) = delete;
    StompEggGoal(StompEggGoal const&)            = delete;
    StompEggGoal()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@StompEggGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 18
     * @symbol ?_createBreakProgressParticles\@StompEggGoal\@\@MEAAXAEAVLevel\@\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    virtual void _createBreakProgressParticles(class Level&, class BlockSource&, class BlockPos);
    /**
     * @vftbl 19
     * @symbol ?_createDestroyParticles\@StompEggGoal\@\@MEAAXAEAVLevel\@\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    virtual void _createDestroyParticles(class Level&, class BlockSource&, class BlockPos);
    /**
     * @vftbl 20
     * @symbol ?_playBreakProgressSound\@StompEggGoal\@\@MEAAXAEAVLevel\@\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    virtual void _playBreakProgressSound(class Level&, class BlockSource&, class BlockPos);
    /**
     * @vftbl 21
     * @symbol ?_playDestroySound\@StompEggGoal\@\@MEAAXAEAVLevel\@\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    virtual void _playDestroySound(class Level&, class BlockSource&, class BlockPos);
    // NOLINTEND
};
