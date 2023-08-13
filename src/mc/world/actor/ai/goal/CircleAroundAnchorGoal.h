#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class CircleAroundAnchorGoal : public ::Goal {

public:
    // prevent constructor by default
    CircleAroundAnchorGoal& operator=(CircleAroundAnchorGoal const&) = delete;
    CircleAroundAnchorGoal(CircleAroundAnchorGoal const&)            = delete;
    CircleAroundAnchorGoal()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@CircleAroundAnchorGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 4
     * @symbol ?start\@CircleAroundAnchorGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@CircleAroundAnchorGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@CircleAroundAnchorGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@CircleAroundAnchorGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0CircleAroundAnchorGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI CircleAroundAnchorGoal(class Mob&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_calculateHeightOffset\@CircleAroundAnchorGoal\@\@AEBAMXZ
     */
    MCAPI float _calculateHeightOffset() const;
    /**
     * @symbol ?_selectNext\@CircleAroundAnchorGoal\@\@AEAAXXZ
     */
    MCAPI void _selectNext();
    /**
     * @symbol ?_setAnchorAboveTarget\@CircleAroundAnchorGoal\@\@AEAAXXZ
     */
    MCAPI void _setAnchorAboveTarget();
    // NOLINTEND
};
