#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class FollowCaravanGoal : public ::Goal {
public:
    // prevent constructor by default
    FollowCaravanGoal& operator=(FollowCaravanGoal const&);
    FollowCaravanGoal(FollowCaravanGoal const&);
    FollowCaravanGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FollowCaravanGoal@@UEAA@XZ
    virtual ~FollowCaravanGoal() = default;

    // vIndex: 1, symbol: ?canUse@FollowCaravanGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@FollowCaravanGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@FollowCaravanGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@FollowCaravanGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@FollowCaravanGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@FollowCaravanGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol:
    // ??0FollowCaravanGoal@@QEAA@AEAVMob@@MHAEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@@Z
    MCAPI FollowCaravanGoal(
        class Mob&                               mob,
        float                                    speed,
        int                                      caravanLimit,
        std::vector<struct MobDescriptor> const& targetTypes
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?checkCaravanType@FollowCaravanGoal@@AEAA_NPEAVMob@@@Z
    MCAPI bool checkCaravanType(class Mob* currentMob);

    // symbol: ?firstIsLeashed@FollowCaravanGoal@@AEAA_NPEAVMob@@H@Z
    MCAPI bool firstIsLeashed(class Mob* currentMob, int counter);

    // NOLINTEND
};
