#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseMoveToGoal {

public:
    // prevent constructor by default
    BaseMoveToGoal& operator=(BaseMoveToGoal const&) = delete;
    BaseMoveToGoal(BaseMoveToGoal const&)            = delete;
    BaseMoveToGoal()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@BaseMoveToGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@BaseMoveToGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@BaseMoveToGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@BaseMoveToGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@BaseMoveToGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RaidGardenGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const = 0; // NOLINT
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
     * @vftbl 10
     * @symbol ?hasReachedTarget\@BaseMoveToGoal\@\@UEBA_NXZ
     */
    virtual bool hasReachedTarget() const; // NOLINT
    /**
     * @vftbl 11
     * @symbol ?isValidTarget\@RaidGardenGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&) = 0; // NOLINT
    /**
     * @vftbl 12
     * @symbol ?_nextStartTick\@BaseMoveToGoal\@\@MEAAHXZ
     */
    virtual int _nextStartTick(); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?_canReach\@BaseMoveToGoal\@\@MEAA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool _canReach(class BlockPos const&); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?_moveToBlock\@BaseMoveToBlockGoal\@\@MEAAXXZ
     */
    virtual void _moveToBlock() = 0; // NOLINT
    /**
     * @vftbl 15
     * @symbol ?_getTargetPosition\@BaseMoveToGoal\@\@MEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 _getTargetPosition() const; // NOLINT
    /**
     * @vftbl 16
     * @symbol ?_getRepathTime\@BaseMoveToGoal\@\@MEBA_KXZ
     */
    virtual unsigned __int64 _getRepathTime() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASEMOVETOGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseMoveToGoal(); // NOLINT
#endif
    /**
     * @symbol ??0BaseMoveToGoal\@\@QEAA\@AEAVMob\@\@MMMHH\@Z
     */
    MCAPI BaseMoveToGoal(class Mob&, float, float, float, int, int); // NOLINT
    /**
     * @symbol ?setTargetPositionOffset\@BaseMoveToGoal\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setTargetPositionOffset(class Vec3 const&); // NOLINT

    // protected:
    /**
     * @symbol ?_blockAboveTarget\@BaseMoveToGoal\@\@IEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos _blockAboveTarget() const; // NOLINT
    /**
     * @symbol ?_checkIfStuck\@BaseMoveToGoal\@\@IEAAXXZ
     */
    MCAPI void _checkIfStuck(); // NOLINT
    /**
     * @symbol ?_isCooldownActive\@BaseMoveToGoal\@\@IEBA_NXZ
     */
    MCAPI bool _isCooldownActive() const; // NOLINT
    /**
     * @symbol ?setInterval\@BaseMoveToGoal\@\@IEAAXH\@Z
     */
    MCAPI void setInterval(int); // NOLINT

protected:
};
