#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SquidMoveAwayFromGroundGoal {

public:
    // prevent constructor by default
    SquidMoveAwayFromGroundGoal& operator=(SquidMoveAwayFromGroundGoal const&) = delete;
    SquidMoveAwayFromGroundGoal(SquidMoveAwayFromGroundGoal const&)            = delete;
    SquidMoveAwayFromGroundGoal()                                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
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
     * @symbol ?start\@SquidMoveAwayFromGroundGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
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
     * @symbol
     * ?appendDebugInfo\@SquidMoveAwayFromGroundGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SQUIDMOVEAWAYFROMGROUNDGOAL
    /**
     * @symbol ?canContinueToUse\@SquidMoveAwayFromGroundGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse(); // NOLINT
    /**
     * @symbol ?canUse\@SquidMoveAwayFromGroundGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canUse(); // NOLINT
    /**
     * @symbol ?stop\@SquidMoveAwayFromGroundGoal\@\@UEAAXXZ
     */
    MCVAPI void stop(); // NOLINT
    /**
     * @symbol ?tick\@SquidMoveAwayFromGroundGoal\@\@UEAAXXZ
     */
    MCVAPI void tick(); // NOLINT
#endif
};
