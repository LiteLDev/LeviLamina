/**
 * @file  StayNearNoteblockGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StayNearNoteblockGoal.
 *
 */
class StayNearNoteblockGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STAYNEARNOTEBLOCKGOAL
public:
    class StayNearNoteblockGoal& operator=(class StayNearNoteblockGoal const &) = delete;
    StayNearNoteblockGoal(class StayNearNoteblockGoal const &) = delete;
    StayNearNoteblockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StayNearNoteblockGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@StayNearNoteblockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@StayNearNoteblockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@StayNearNoteblockGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@StayNearNoteblockGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@StayNearNoteblockGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@StayNearNoteblockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0StayNearNoteblockGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI StayNearNoteblockGoal(class Mob &);

//private:
    /**
     * @symbol  ?_hasLastVibrationAtNoteblock\@StayNearNoteblockGoal\@\@AEAA?BV?$optional\@VBlockPos\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<class BlockPos> const _hasLastVibrationAtNoteblock();

private:

};