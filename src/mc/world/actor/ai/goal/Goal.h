#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class Goal {

public:
    // prevent constructor by default
    Goal& operator=(Goal const&) = delete;
    Goal(Goal const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@Goal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?canBeInterrupted\@Goal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4() = 0; // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7(); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?isTargetGoal\@Goal\@\@UEBA_NXZ
     */
    virtual bool isTargetGoal() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GOAL
    /**
     * @symbol ?onPlayerDimensionChanged\@Goal\@\@UEAAXPEAVPlayer\@\@V?$AutomaticID\@VDimension\@\@H\@\@1\@Z
     */
    MCVAPI void
    onPlayerDimensionChanged(class Player*, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @symbol ?start\@Goal\@\@UEAAXXZ
     */
    MCVAPI void start(); // NOLINT
    /**
     * @symbol ?stop\@Goal\@\@UEAAXXZ
     */
    MCVAPI void stop(); // NOLINT
    /**
     * @symbol ?tick\@Goal\@\@UEAAXXZ
     */
    MCVAPI void tick(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Goal(); // NOLINT
#endif
    /**
     * @symbol ??0Goal\@\@QEAA\@XZ
     */
    MCAPI Goal(); // NOLINT
    /**
     * @symbol ?getRequiredControlFlags\@Goal\@\@QEBAHXZ
     */
    MCAPI int getRequiredControlFlags() const; // NOLINT
    /**
     * @symbol ?getTypeId\@Goal\@\@QEBAGXZ
     */
    MCAPI unsigned short getTypeId() const; // NOLINT
    /**
     * @symbol ?setRequiredControlFlags\@Goal\@\@QEAAXH\@Z
     */
    MCAPI void setRequiredControlFlags(int); // NOLINT
    /**
     * @symbol ?setTypeId\@Goal\@\@QEAAXG\@Z
     */
    MCAPI void setTypeId(unsigned short); // NOLINT
};
