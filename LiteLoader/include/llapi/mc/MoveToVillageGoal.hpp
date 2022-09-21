/**
 * @file  MC/MoveToVillageGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveToVillageGoal.
 *
 */
class MoveToVillageGoal : public BaseMoveToGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOVILLAGEGOAL
public:
    class MoveToVillageGoal& operator=(class MoveToVillageGoal const &) = delete;
    MoveToVillageGoal(class MoveToVillageGoal const &) = delete;
    MoveToVillageGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MoveToVillageGoal();
    /**
     * @hash   1706897677
     * @vftbl  1
     * @symbol ?canUse@MoveToVillageGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1536752507
     * @vftbl  2
     * @symbol ?canContinueToUse@MoveToVillageGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1734494278
     * @vftbl  4
     * @symbol ?start@MoveToVillageGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1760501041
     * @vftbl  6
     * @symbol ?tick@MoveToVillageGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1511835117
     * @vftbl  7
     * @symbol ?appendDebugInfo@MoveToVillageGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
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
     * @hash   1145246719
     * @vftbl  11
     * @symbol ?isValidTarget@MoveToVillageGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -1679081050
     * @vftbl  14
     * @symbol ?_moveToBlock@MoveToVillageGoal@@UEAAXXZ
     */
    virtual void _moveToBlock();
    /**
     * @hash   -485718576
     * @vftbl  17
     * @symbol ?_selectRandomPosInVillage@MoveToVillageGoal@@MEAA?AVBlockPos@@XZ
     */
    virtual class BlockPos _selectRandomPosInVillage();
    /**
     * @hash   1279063260
     * @symbol ??0MoveToVillageGoal@@QEAA@AEAVMob@@MMMH@Z
     */
    MCAPI MoveToVillageGoal(class Mob &, float, float, float, int);

//protected:
    /**
     * @hash   -1669185097
     * @symbol ?_tryGetCurrentVillage@MoveToVillageGoal@@IEAA?AV?$shared_ptr@VVillage@@@std@@XZ
     */
    MCAPI class std::shared_ptr<class Village> _tryGetCurrentVillage();

protected:

};