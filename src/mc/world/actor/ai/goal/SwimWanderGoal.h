#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SwimWanderGoal {

public:
    // prevent constructor by default
    SwimWanderGoal& operator=(SwimWanderGoal const&) = delete;
    SwimWanderGoal(SwimWanderGoal const&)            = delete;
    SwimWanderGoal()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@SwimWanderGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@SwimWanderGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@SwimWanderGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?tick\@SwimWanderGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@SwimWanderGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_setWantedPosition\@SwimWanderGoal\@\@IEAA_NXZ
     */
    MCAPI bool _setWantedPosition();
    // NOLINTEND
};
