#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class ItemStackBase;
class Player;
class Vec3;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

namespace BedBlockUtils {
// functions
// NOLINTBEGIN
MCNAPI bool checkPlacementPermissions(
    ::Actor&          entity,
    ::ItemStackBase&  item,
    uchar const&      face,
    ::BlockPos const& pos,
    bool              generateDenyParticleEffect
);

MCNAPI void displayLocalizedBedMessage(::Player& player, char const* localizationKey);

MCNAPI ::std::optional<::BlockPos> findHeadPiece(::BlockSource const& region, ::BlockPos const& interactPos);

MCNAPI ::std::optional<::BlockPos>
findWakeupPosition(::BlockSource const& region, ::BlockPos const& pos, ::std::optional<::Vec3> const& enteredBedPos);

MCNAPI ::Direction::Type getDirection(::Block const& block);

MCNAPI ::BlockPos getSecondPartPos(::Block const& block, ::BlockPos const& origin);

MCNAPI void handleNeighborChanged(
    ::BlockSource&     region,
    ::BlockType const& bedType,
    ::BlockPos const&  pos,
    ::BlockPos const&  neighborPos
);

MCNAPI void onFillBlock(::BlockType const& bedType, ::BlockSource& region, ::BlockPos const& pos, ::Block const& block);

MCNAPI ::Block const& sanitizeFillBlock(::Block const& block);

MCNAPI void setOccupied(::BlockSource& region, ::BlockPos const& pos, bool occupied);

MCNAPI bool tryPlaceBedParts(
    ::BlockSource&    region,
    ::BlockPos const& feetPos,
    ::BlockPos const& headPos,
    ::Block const&    footBlock,
    ::Block const&    headBlock
);

MCNAPI void trySleepInBed(
    ::Player&                                player,
    ::BlockSource&                           region,
    ::BlockPos const&                        headPos,
    bool                                     setsRespawn,
    ::BlockEvents::BlockPlayerInteractEvent& eventData
);
// NOLINTEND

} // namespace BedBlockUtils
