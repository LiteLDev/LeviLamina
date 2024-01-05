#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class BarterGoal : public ::Goal {
public:
    // prevent constructor by default
    BarterGoal& operator=(BarterGoal const&);
    BarterGoal(BarterGoal const&);
    BarterGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BarterGoal@@UEAA@XZ
    virtual ~BarterGoal() = default;

    // vIndex: 1, symbol: ?canUse@BarterGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@BarterGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 6, symbol: ?tick@BarterGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@BarterGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0BarterGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit BarterGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getThrowVector@BarterGoal@@AEAA?AVVec3@@XZ
    MCAPI class Vec3 _getThrowVector();

    // symbol: ?_sendBarterEventPacket@BarterGoal@@AEAAXPEAVBarterComponent@@@Z
    MCAPI void _sendBarterEventPacket(class BarterComponent*);

    // NOLINTEND
};
