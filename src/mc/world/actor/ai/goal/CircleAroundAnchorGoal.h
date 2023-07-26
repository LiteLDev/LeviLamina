#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CircleAroundAnchorGoal {

public:
    // prevent constructor by default
    CircleAroundAnchorGoal& operator=(CircleAroundAnchorGoal const&) = delete;
    CircleAroundAnchorGoal(CircleAroundAnchorGoal const&)            = delete;
    CircleAroundAnchorGoal()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@CircleAroundAnchorGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@CircleAroundAnchorGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@CircleAroundAnchorGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@CircleAroundAnchorGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@CircleAroundAnchorGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0CircleAroundAnchorGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI CircleAroundAnchorGoal(class Mob&); // NOLINT

    // private:
    /**
     * @symbol ?_calculateHeightOffset\@CircleAroundAnchorGoal\@\@AEBAMXZ
     */
    MCAPI float _calculateHeightOffset() const; // NOLINT
    /**
     * @symbol ?_selectNext\@CircleAroundAnchorGoal\@\@AEAAXXZ
     */
    MCAPI void _selectNext(); // NOLINT
    /**
     * @symbol ?_setAnchorAboveTarget\@CircleAroundAnchorGoal\@\@AEAAXXZ
     */
    MCAPI void _setAnchorAboveTarget(); // NOLINT

private:
};
