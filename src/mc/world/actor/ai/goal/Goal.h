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
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@Goal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol ?canBeInterrupted\@Goal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4() = 0;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol ?isTargetGoal\@Goal\@\@UEBA_NXZ
     */
    virtual bool isTargetGoal() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GOAL
    /**
     * @symbol ?onPlayerDimensionChanged\@Goal\@\@UEAAXPEAVPlayer\@\@V?$AutomaticID\@VDimension\@\@H\@\@1\@Z
     */
    MCVAPI void
    onPlayerDimensionChanged(class Player*, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>);
    /**
     * @symbol ?start\@Goal\@\@UEAAXXZ
     */
    MCVAPI void start();
    /**
     * @symbol ?stop\@Goal\@\@UEAAXXZ
     */
    MCVAPI void stop();
    /**
     * @symbol ?tick\@Goal\@\@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Goal();
#endif
    /**
     * @symbol ??0Goal\@\@QEAA\@XZ
     */
    MCAPI Goal();
    /**
     * @symbol ?getRequiredControlFlags\@Goal\@\@QEBAHXZ
     */
    MCAPI int getRequiredControlFlags() const;
    /**
     * @symbol ?getTypeId\@Goal\@\@QEBAGXZ
     */
    MCAPI unsigned short getTypeId() const;
    /**
     * @symbol ?setRequiredControlFlags\@Goal\@\@QEAAXH\@Z
     */
    MCAPI void setRequiredControlFlags(int);
    /**
     * @symbol ?setTypeId\@Goal\@\@QEAAXG\@Z
     */
    MCAPI void setTypeId(unsigned short);
    // NOLINTEND
};
