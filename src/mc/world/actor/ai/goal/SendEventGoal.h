#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SendEventGoal : public ::Goal {
public:
    // prevent constructor by default
    SendEventGoal& operator=(SendEventGoal const&) = delete;
    SendEventGoal(SendEventGoal const&)            = delete;
    SendEventGoal()                                = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@SendEventGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@SendEventGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@SendEventGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@SendEventGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@SendEventGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SendEventGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0SendEventGoal@@QEAA@AEAVMob@@AEBV?$vector@USendEventData@@V?$allocator@USendEventData@@@std@@@std@@@Z
    MCAPI SendEventGoal(class Mob&, std::vector<struct SendEventData> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_selectBestSpell@SendEventGoal@@AEAAHXZ
    MCAPI int _selectBestSpell();

    // NOLINTEND
};
