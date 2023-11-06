#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SlimeFloatGoal : public ::Goal {
public:
    // prevent constructor by default
    SlimeFloatGoal& operator=(SlimeFloatGoal const&);
    SlimeFloatGoal(SlimeFloatGoal const&);
    SlimeFloatGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SlimeFloatGoal();

    // vIndex: 1, symbol: ?canUse@SlimeFloatGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 6, symbol: ?tick@SlimeFloatGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SlimeFloatGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0SlimeFloatGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit SlimeFloatGoal(class Mob&);

    // NOLINTEND
};
