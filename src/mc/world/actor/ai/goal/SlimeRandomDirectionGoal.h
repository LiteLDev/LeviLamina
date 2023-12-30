#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SlimeRandomDirectionGoal : public ::Goal {
public:
    // prevent constructor by default
    SlimeRandomDirectionGoal& operator=(SlimeRandomDirectionGoal const&);
    SlimeRandomDirectionGoal(SlimeRandomDirectionGoal const&);
    SlimeRandomDirectionGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SlimeRandomDirectionGoal@@UEAA@XZ
    virtual ~SlimeRandomDirectionGoal() = default;

    // vIndex: 1, symbol: ?canUse@SlimeRandomDirectionGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 6, symbol: ?tick@SlimeRandomDirectionGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SlimeRandomDirectionGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0SlimeRandomDirectionGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit SlimeRandomDirectionGoal(class Mob& mob);

    // NOLINTEND
};
