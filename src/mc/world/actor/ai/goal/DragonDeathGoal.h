#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DragonDeathGoal {

public:
    // prevent constructor by default
    DragonDeathGoal& operator=(DragonDeathGoal const&) = delete;
    DragonDeathGoal(DragonDeathGoal const&)            = delete;
    DragonDeathGoal()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@DragonDeathGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@DragonDeathGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@DragonDeathGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DragonDeathGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DRAGONDEATHGOAL
    /**
     * @symbol ?canContinueToUse\@DragonDeathGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse();
    /**
     * @symbol ?canUse\@DragonDeathGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canUse();
#endif
    /**
     * @symbol ??0DragonDeathGoal\@\@QEAA\@AEAVEnderDragon\@\@\@Z
     */
    MCAPI DragonDeathGoal(class EnderDragon&);
    // NOLINTEND
};
