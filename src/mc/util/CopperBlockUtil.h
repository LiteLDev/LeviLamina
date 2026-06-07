#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Player;
class Vec3;
struct CopperBehavior;
namespace BlockEvents { class BlockRandomTickEvent; }
namespace mce { class Color; }
// clang-format on

namespace CopperBlockUtil {
// functions
// NOLINTBEGIN
MCNAPI void
becomeWaxed(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::CopperBehavior const& behavior);

#ifdef LL_PLAT_C
MCNAPI void emitScrapeParticlesAroundPosition(::BlockSource& region, ::Vec3 const& pos);

MCNAPI void emitWaxParticlesAroundPosition(::BlockSource& region, ::Vec3 const& pos, ::mce::Color const& color);
#endif

MCNAPI ::std::string_view getCopperTypeName(::CopperType type);

MCNAPI bool tryDecrementAge(::BlockSource& region, ::BlockPos const& pos, ::CopperBehavior const& behavior);

MCNAPI bool tryIncrementAge(
    ::BlockSource&          region,
    ::BlockPos const&       pos,
    float                   dailyChance,
    float                   oxidizeChance,
    ::CopperBehavior const& behavior
);

MCNAPI bool tryLightningHitBlock(::BlockSource& region, ::BlockPos const& pos, ::CopperBehavior const& behavior);

MCNAPI bool tryRandomTickBlock(::BlockEvents::BlockRandomTickEvent& eventData, ::CopperBehavior const& behavior);

MCNAPI bool tryUseBlock(::Player& player, ::BlockPos const& pos, bool consumeTool, ::CopperBehavior const& behavior);
// NOLINTEND

} // namespace CopperBlockUtil
