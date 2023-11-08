#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class StompBlockGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    StompBlockGoal& operator=(StompBlockGoal const&);
    StompBlockGoal(StompBlockGoal const&);
    StompBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StompBlockGoal@@UEAA@XZ
    virtual ~StompBlockGoal() = default;

    // vIndex: 1, symbol: ?canUse@StompBlockGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@StompBlockGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@StompBlockGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@StompBlockGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@StompBlockGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@StompBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // vIndex: 11, symbol: ?isValidTarget@StompBlockGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&);

    // vIndex: 13, symbol: ?_canReach@StompBlockGoal@@MEAA_NAEBVBlockPos@@@Z
    virtual bool _canReach(class BlockPos const&);

    // vIndex: 14, symbol: ?_moveToBlock@StompBlockGoal@@MEAAXXZ
    virtual void _moveToBlock();

    // vIndex: 17, symbol: ?findTargetBlock@StompBlockGoal@@UEAA_NXZ
    virtual bool findTargetBlock();

    // vIndex: 18, symbol: ?_createBreakProgressParticles@StompBlockGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z
    virtual void _createBreakProgressParticles(class Level&, class BlockSource&, class BlockPos);

    // vIndex: 19, symbol: ?_createDestroyParticles@StompBlockGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z
    virtual void _createDestroyParticles(class Level&, class BlockSource&, class BlockPos);

    // vIndex: 20, symbol: ?_playBreakProgressSound@StompBlockGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z
    virtual void _playBreakProgressSound(class Level&, class BlockSource&, class BlockPos);

    // vIndex: 21, symbol: ?_playDestroySound@StompBlockGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z
    virtual void _playDestroySound(class Level&, class BlockSource&, class BlockPos);

    // symbol: ??0StompBlockGoal@@QEAA@PEBVBlock@@AEAVMob@@MHHMH@Z
    MCAPI StompBlockGoal(class Block const*, class Mob&, float, int, int, float, int);

    // NOLINTEND
};
