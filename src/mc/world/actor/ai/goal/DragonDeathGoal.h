#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DragonDeathGoal {

public:
    // prevent constructor by default
    DragonDeathGoal& operator=(DragonDeathGoal const&) = delete;
    DragonDeathGoal(DragonDeathGoal const&)            = delete;
    DragonDeathGoal()                                  = delete;

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
     * @symbol ?start\@DragonDeathGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@DragonDeathGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@DragonDeathGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DragonDeathGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DRAGONDEATHGOAL
    /**
     * @symbol ?canContinueToUse\@DragonDeathGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse(); // NOLINT
    /**
     * @symbol ?canUse\@DragonDeathGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canUse(); // NOLINT
#endif
    /**
     * @symbol ??0DragonDeathGoal\@\@QEAA\@AEAVEnderDragon\@\@\@Z
     */
    MCAPI DragonDeathGoal(class EnderDragon&); // NOLINT
};
