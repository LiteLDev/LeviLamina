#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Player;
struct CopperBehavior;
// clang-format on

namespace CopperBlockUtil {
// functions
// NOLINTBEGIN
MCNAPI bool shouldUseInteractableBlockAsCopper(::Actor const& actor);

MCNAPI bool tryIncrementAge(
    ::BlockSource&          region,
    ::BlockPos const&       pos,
    float                   dailyChance,
    float                   oxidizeChance,
    ::CopperBehavior const& behavior
);

MCNAPI bool tryLightningHitBlock(::BlockSource& region, ::BlockPos const& pos, ::CopperBehavior const& behavior);

MCNAPI bool tryUseBlock(::Player& player, ::BlockPos const& pos, bool consumeTool, ::CopperBehavior const& behavior);
// NOLINTEND

} // namespace CopperBlockUtil
