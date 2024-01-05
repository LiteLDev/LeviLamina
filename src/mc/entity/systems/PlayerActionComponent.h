#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerActionComponent {
public:
    // prevent constructor by default
    PlayerActionComponent& operator=(PlayerActionComponent const&);
    PlayerActionComponent(PlayerActionComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0PlayerActionComponent@@QEAA@XZ
    MCAPI PlayerActionComponent();

    // symbol: ??0PlayerActionComponent@@QEAA@$$QEAU0@@Z
    MCAPI PlayerActionComponent(struct PlayerActionComponent&&);

    // symbol: ?addAbortDestroyBlock@PlayerActionComponent@@QEAAXAEBVBlockPos@@H@Z
    MCAPI void addAbortDestroyBlock(class BlockPos const& pos, int data);

    // symbol: ?addContinueDestroyBlock@PlayerActionComponent@@QEAAXAEBVBlockPos@@H@Z
    MCAPI void addContinueDestroyBlock(class BlockPos const& pos, int facing);

    // symbol: ?addStartDestroyBlock@PlayerActionComponent@@QEAAXAEBVBlockPos@@H@Z
    MCAPI void addStartDestroyBlock(class BlockPos const& pos, int facing);

    // symbol: ?addStopDestroyBlock@PlayerActionComponent@@QEAAXXZ
    MCAPI void addStopDestroyBlock();

    // symbol: ?clear@PlayerActionComponent@@QEAAXXZ
    MCAPI void clear();

    // symbol: ??4PlayerActionComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct PlayerActionComponent& operator=(struct PlayerActionComponent&&);

    // symbol: ??1PlayerActionComponent@@QEAA@XZ
    MCAPI ~PlayerActionComponent();

    // symbol:
    // ?getDiffOfPlayerAuthInputPacket@PlayerActionComponent@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBU1@0@Z
    MCAPI static std::string
    getDiffOfPlayerAuthInputPacket(struct PlayerActionComponent const&, struct PlayerActionComponent const&);

    // NOLINTEND
};
