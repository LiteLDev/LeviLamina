/**
 * @file  MC/StompEggGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StompBlockGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StompEggGoal.
 *
 */
class StompEggGoal : public StompBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOMPEGGGOAL
public:
    class StompEggGoal& operator=(class StompEggGoal const &) = delete;
    StompEggGoal(class StompEggGoal const &) = delete;
    StompEggGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~StompEggGoal();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1073604953
     * @vftbl  7
     * @symbol ?appendDebugInfo@StompEggGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @hash   -693163813
     * @vftbl  18
     * @symbol ?_createBreakProgressParticles@StompEggGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z
     */
    virtual void _createBreakProgressParticles(class Level &, class BlockSource &, class BlockPos);
    /**
     * @hash   2025727609
     * @vftbl  19
     * @symbol ?_createDestroyParticles@StompEggGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z
     */
    virtual void _createDestroyParticles(class Level &, class BlockSource &, class BlockPos);
    /**
     * @hash   -947511455
     * @vftbl  20
     * @symbol ?_playBreakProgressSound@StompEggGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z
     */
    virtual void _playBreakProgressSound(class Level &, class BlockSource &, class BlockPos);
    /**
     * @hash   -2134115777
     * @vftbl  21
     * @symbol ?_playDestroySound@StompEggGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z
     */
    virtual void _playDestroySound(class Level &, class BlockSource &, class BlockPos);
    /**
     * @hash   -1611657667
     * @symbol ??0StompEggGoal@@QEAA@AEAVMob@@MHHMH@Z
     */
    MCAPI StompEggGoal(class Mob &, float, int, int, float, int);

};