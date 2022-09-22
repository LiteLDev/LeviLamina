/**
 * @file  MoveToRandomBlockGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveToRandomBlockGoal.
 *
 */
class MoveToRandomBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETORANDOMBLOCKGOAL
public:
    class MoveToRandomBlockGoal& operator=(class MoveToRandomBlockGoal const &) = delete;
    MoveToRandomBlockGoal(class MoveToRandomBlockGoal const &) = delete;
    MoveToRandomBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MoveToRandomBlockGoal();
    /**
     * @hash   770990895
     * @vftbl  1
     * @symbol ?canUse@MoveToRandomBlockGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1861673549
     * @vftbl  2
     * @symbol ?canContinueToUse@MoveToRandomBlockGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1249593016
     * @vftbl  4
     * @symbol ?start@MoveToRandomBlockGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -765365448
     * @vftbl  5
     * @symbol ?stop@MoveToRandomBlockGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -850983869
     * @vftbl  6
     * @symbol ?tick@MoveToRandomBlockGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -875737247
     * @vftbl  7
     * @symbol ?appendDebugInfo@MoveToRandomBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1575667915
     * @symbol ??0MoveToRandomBlockGoal@@QEAA@AEAVMob@@MMM@Z
     */
    MCAPI MoveToRandomBlockGoal(class Mob &, float, float, float);

//private:
    /**
     * @hash   -475294283
     * @symbol ?_isValidDestinationBlock@MoveToRandomBlockGoal@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool _isValidDestinationBlock(class BlockSource &, class BlockPos const &);

private:

};