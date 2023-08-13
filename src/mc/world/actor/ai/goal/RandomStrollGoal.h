#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RandomStrollGoal : public ::Goal {

public:
    // prevent constructor by default
    RandomStrollGoal& operator=(RandomStrollGoal const&) = delete;
    RandomStrollGoal(RandomStrollGoal const&)            = delete;
    RandomStrollGoal()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomStrollGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RandomStrollGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@RandomStrollGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@RandomStrollGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@RandomStrollGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RandomStrollGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @vftbl 10
     * @symbol ?_setWantedPosition\@RandomStrollGoal\@\@MEAA_NXZ
     */
    virtual bool _setWantedPosition();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMSTROLLGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RandomStrollGoal();
#endif
    /**
     * @symbol ??0RandomStrollGoal\@\@QEAA\@AEAVMob\@\@MHHH\@Z
     */
    MCAPI RandomStrollGoal(class Mob&, float, int, int, int);
    // NOLINTEND
};
