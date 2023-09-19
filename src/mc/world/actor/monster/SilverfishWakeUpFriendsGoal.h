#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SilverfishWakeUpFriendsGoal : public ::Goal {
public:
    // prevent constructor by default
    SilverfishWakeUpFriendsGoal& operator=(SilverfishWakeUpFriendsGoal const&);
    SilverfishWakeUpFriendsGoal(SilverfishWakeUpFriendsGoal const&);
    SilverfishWakeUpFriendsGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@SilverfishWakeUpFriendsGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 6, symbol: ?tick@SilverfishWakeUpFriendsGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SilverfishWakeUpFriendsGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0SilverfishWakeUpFriendsGoal@@QEAA@AEAVSilverfish@@@Z
    MCAPI explicit SilverfishWakeUpFriendsGoal(class Silverfish&);

    // NOLINTEND
};
