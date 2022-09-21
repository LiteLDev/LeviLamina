/**
 * @file  MC/DropItemForGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DropItemForGoal.
 *
 */
class DropItemForGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DROPITEMFORGOAL
public:
    class DropItemForGoal& operator=(class DropItemForGoal const &) = delete;
    DropItemForGoal(class DropItemForGoal const &) = delete;
    DropItemForGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DropItemForGoal();
    /**
     * @hash   -317989242
     * @vftbl  1
     * @symbol ?canUse@DropItemForGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   422811140
     * @vftbl  2
     * @symbol ?canContinueToUse@DropItemForGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1376895313
     * @vftbl  4
     * @symbol ?start@DropItemForGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -486483137
     * @vftbl  5
     * @symbol ?stop@DropItemForGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -647628550
     * @vftbl  6
     * @symbol ?tick@DropItemForGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1328436378
     * @vftbl  7
     * @symbol ?appendDebugInfo@DropItemForGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
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
     * @hash   2096430296
     * @vftbl  11
     * @symbol ?isValidTarget@DropItemForGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @hash   284543186
     * @vftbl  17
     * @symbol ?findTargetBlock@DropItemForGoal@@UEAA_NXZ
     */
    virtual bool findTargetBlock();
    /**
     * @hash   60556019
     * @symbol ??0DropItemForGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI DropItemForGoal(class Mob &);

};