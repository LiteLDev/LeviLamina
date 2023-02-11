/**
 * @file  DropItemForGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~DropItemForGoal();
    /**
     * @hash   -95959802
     * @vftbl  1
     * @symbol  ?canUse\@DropItemForGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   644840580
     * @vftbl  2
     * @symbol  ?canContinueToUse\@DropItemForGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1154819745
     * @vftbl  4
     * @symbol  ?start\@DropItemForGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -264392193
     * @vftbl  5
     * @symbol  ?stop\@DropItemForGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -425537606
     * @vftbl  6
     * @symbol  ?tick\@DropItemForGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1550927098
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@DropItemForGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @hash   -1976476808
     * @vftbl  11
     * @symbol  ?isValidTarget\@DropItemForGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @hash   506572626
     * @vftbl  17
     * @symbol  ?findTargetBlock\@DropItemForGoal\@\@UEAA_NXZ
     */
    virtual bool findTargetBlock();
    /**
     * @hash   282800723
     * @symbol  ??0DropItemForGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DropItemForGoal(class Mob &);

};