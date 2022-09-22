/**
 * @file  InspectBookshelfGoal.hpp
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
 * @brief MC class InspectBookshelfGoal.
 *
 */
class InspectBookshelfGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSPECTBOOKSHELFGOAL
public:
    class InspectBookshelfGoal& operator=(class InspectBookshelfGoal const &) = delete;
    InspectBookshelfGoal(class InspectBookshelfGoal const &) = delete;
    InspectBookshelfGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~InspectBookshelfGoal();
    /**
     * @hash   -1082336754
     * @vftbl  2
     * @symbol ?canContinueToUse@InspectBookshelfGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -412713180
     * @vftbl  6
     * @symbol ?tick@InspectBookshelfGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1306183200
     * @vftbl  7
     * @symbol ?appendDebugInfo@InspectBookshelfGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
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
     * @hash   1131793506
     * @vftbl  11
     * @symbol ?isValidTarget@InspectBookshelfGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @hash   1086181094
     * @vftbl  13
     * @symbol ?_canReach@InspectBookshelfGoal@@MEAA_NAEBVBlockPos@@@Z
     */
    virtual bool _canReach(class BlockPos const &);
    /**
     * @hash   1855660188
     * @vftbl  17
     * @symbol ?findTargetBlock@InspectBookshelfGoal@@UEAA_NXZ
     */
    virtual bool findTargetBlock();
    /**
     * @hash   689224818
     * @symbol ??0InspectBookshelfGoal@@QEAA@AEAVMob@@MHHHM@Z
     */
    MCAPI InspectBookshelfGoal(class Mob &, float, int, int, int, float);

};