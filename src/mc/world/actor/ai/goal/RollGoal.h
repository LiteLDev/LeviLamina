#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RollGoal {

public:
    // prevent constructor by default
    RollGoal& operator=(RollGoal const&) = delete;
    RollGoal(RollGoal const&)            = delete;
    RollGoal()                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@RollGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RollGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?canBeInterrupted\@RollGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@RollGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@RollGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@RollGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RollGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0RollGoal\@\@QEAA\@AEAVMob\@\@M\@Z
     */
    MCAPI RollGoal(class Mob&, float); // NOLINT

    // private:
    /**
     * @symbol ?_checkForDamagingBlocks\@RollGoal\@\@AEBA_NXZ
     */
    MCAPI bool _checkForDamagingBlocks() const; // NOLINT
    /**
     * @symbol ?_handleRoll\@RollGoal\@\@AEBAXHAEAVVec3\@\@AEAM1\@Z
     */
    MCAPI void _handleRoll(int, class Vec3&, float&, float&) const; // NOLINT

private:
};
