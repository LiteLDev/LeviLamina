#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Player;
class Vec3;
struct CopperBehavior;
namespace mce { class Color; }
// clang-format on

namespace CopperBlockUtil {
// functions
// NOLINTBEGIN
MCNAPI_C void emitScrapeParticlesAroundPosition(::BlockSource& region, ::Vec3 const& pos);

MCNAPI_C void emitWaxParticlesAroundPosition(::BlockSource& region, ::Vec3 const& pos, ::mce::Color const& color);

MCNAPI_C ::std::string_view getCopperTypeName(::CopperType type);

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
