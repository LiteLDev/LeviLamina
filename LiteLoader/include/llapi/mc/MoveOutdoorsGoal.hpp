/**
 * @file  MoveOutdoorsGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveOutdoorsGoal.
 *
 */
class MoveOutdoorsGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEOUTDOORSGOAL
public:
    class MoveOutdoorsGoal& operator=(class MoveOutdoorsGoal const &) = delete;
    MoveOutdoorsGoal(class MoveOutdoorsGoal const &) = delete;
    MoveOutdoorsGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MoveOutdoorsGoal();
    /**
     * @hash   685102389
     * @vftbl  1
     * @symbol ?canUse@MoveOutdoorsGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -2141781106
     * @vftbl  4
     * @symbol ?start@MoveOutdoorsGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1516971657
     * @vftbl  6
     * @symbol ?tick@MoveOutdoorsGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   488615947
     * @vftbl  7
     * @symbol ?appendDebugInfo@MoveOutdoorsGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
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
     * @hash   1241786967
     * @vftbl  11
     * @symbol ?isValidTarget@MoveOutdoorsGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -15126462
     * @symbol ??0MoveOutdoorsGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI MoveOutdoorsGoal(class Mob &);

//private:
    /**
     * @hash   1884056037
     * @symbol ?_setNextTargetTick@MoveOutdoorsGoal@@AEAAXXZ
     */
    MCAPI void _setNextTargetTick();

private:

};