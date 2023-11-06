#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class BegGoal : public ::Goal {
public:
    // prevent constructor by default
    BegGoal& operator=(BegGoal const&);
    BegGoal(BegGoal const&);
    BegGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~BegGoal() = default;

    // vIndex: 1, symbol: ?canUse@BegGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@BegGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@BegGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@BegGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@BegGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@BegGoal@@EEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0BegGoal@@QEAA@AEAVMob@@AEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@MHH@Z
    MCAPI BegGoal(class Mob&, std::vector<class ItemDescriptor> const&, float, int, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_playerHoldingInteresting@BegGoal@@AEAA_NPEAVPlayer@@@Z
    MCAPI bool _playerHoldingInteresting(class Player*);

    // NOLINTEND
};
