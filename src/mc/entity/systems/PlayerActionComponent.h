#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerActionComponent {
public:
    // prevent constructor by default
    PlayerActionComponent& operator=(PlayerActionComponent const&);
    PlayerActionComponent(PlayerActionComponent const&);

public:
    // NOLINTBEGIN
    MCAPI PlayerActionComponent();

    MCAPI PlayerActionComponent(struct PlayerActionComponent&&);

    MCAPI void addAbortDestroyBlock(class BlockPos const& pos, int data);

    MCAPI void addContinueDestroyBlock(class BlockPos const& pos, int facing);

    MCAPI void addStartDestroyBlock(class BlockPos const& pos, int facing);

    MCAPI void addStopDestroyBlock();

    MCAPI void clear();

    MCAPI struct PlayerActionComponent& operator=(struct PlayerActionComponent&&);

    MCAPI ~PlayerActionComponent();

    MCAPI static std::string
    getDiffOfPlayerAuthInputPacket(struct PlayerActionComponent const&, struct PlayerActionComponent const&);

    // NOLINTEND
};
