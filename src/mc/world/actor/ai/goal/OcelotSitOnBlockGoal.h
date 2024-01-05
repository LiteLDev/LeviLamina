#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class OcelotSitOnBlockGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    OcelotSitOnBlockGoal& operator=(OcelotSitOnBlockGoal const&);
    OcelotSitOnBlockGoal(OcelotSitOnBlockGoal const&);
    OcelotSitOnBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OcelotSitOnBlockGoal@@UEAA@XZ
    virtual ~OcelotSitOnBlockGoal() = default;

    // vIndex: 1, symbol: ?canUse@OcelotSitOnBlockGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 4, symbol: ?start@OcelotSitOnBlockGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@OcelotSitOnBlockGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@OcelotSitOnBlockGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@OcelotSitOnBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11, symbol: ?isValidTarget@OcelotSitOnBlockGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    // vIndex: 13, symbol: ?_canReach@OcelotSitOnBlockGoal@@UEAA_NAEBVBlockPos@@@Z
    virtual bool _canReach(class BlockPos const& pos);

    // symbol: ??0OcelotSitOnBlockGoal@@QEAA@AEAVMob@@M@Z
    MCAPI OcelotSitOnBlockGoal(class Mob& mob, float speedMod);

    // NOLINTEND
};
