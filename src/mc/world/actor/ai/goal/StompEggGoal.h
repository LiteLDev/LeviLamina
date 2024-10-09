#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/StompBlockGoal.h"

class StompEggGoal : public ::StompBlockGoal {
public:
    // prevent constructor by default
    StompEggGoal& operator=(StompEggGoal const&);
    StompEggGoal(StompEggGoal const&);
    StompEggGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StompEggGoal() = default;

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 18
    virtual void _createBreakProgressParticles(class Level& level, class BlockSource& region, class BlockPos pos);

    // vIndex: 19
    virtual void _createDestroyParticles(class Level& level, class BlockSource& region, class BlockPos pos);

    // vIndex: 20
    virtual void _playBreakProgressSound(class Level&, class BlockSource&, class BlockPos pos);

    // vIndex: 21
    virtual void _playDestroySound(class Level&, class BlockSource&, class BlockPos pos);

    MCAPI StompEggGoal(
        class Mob& mob,
        float      speedModifier,
        int        horizontalSearchRange,
        int        verticalSearchRange,
        float      goalRadius,
        int        interval
    );

    // NOLINTEND
};
