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
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@BaseMoveToBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse() = 0;
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
     * @symbol ?start\@Goal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@Goal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@Goal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@ScaredGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const = 0;
    /**
     * @vftbl 8
     * @symbol ?isTargetGoal\@Goal\@\@UEBA_NXZ
     */
    virtual bool isTargetGoal() const;
    /**
     * @vftbl 9
     * @symbol ?onPlayerDimensionChanged\@Goal\@\@UEAAXPEAVPlayer\@\@V?$AutomaticID\@VDimension\@\@H\@\@1\@Z
     */
    virtual void
    onPlayerDimensionChanged(class Player*, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GOAL
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
