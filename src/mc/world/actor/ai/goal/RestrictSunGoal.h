#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RestrictSunGoal : public ::Goal {

public:
    // prevent constructor by default
    RestrictSunGoal& operator=(RestrictSunGoal const&) = delete;
    RestrictSunGoal(RestrictSunGoal const&)            = delete;
    RestrictSunGoal()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RestrictSunGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 4
     * @symbol ?start\@RestrictSunGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@RestrictSunGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RestrictSunGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0RestrictSunGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI RestrictSunGoal(class Mob&);
    // NOLINTEND
};
