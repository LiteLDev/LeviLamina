#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class ItemInstance;
class LeashKnot;
class Vec3;
// clang-format on

namespace LeashKnotUtility {
// functions
// NOLINTBEGIN
MCNAPI bool canSurviveAtPos(::BlockSource const& region, ::BlockPos const& pos);

MCNAPI_C bool canTransferLeashedActors(::Actor const& holderActor, ::BlockPos const& pos);

MCNAPI ::LeashKnot* findAt(::BlockSource& region, ::BlockPos const& pos);

MCNAPI ::LeashKnot*
trySpawn(::BlockSource& region, ::BlockPos const& pos, ::ItemInstance const* itemUsed, ::Vec3 knotOffset);

MCNAPI bool
tryTransferLeashedActors(::Actor& holderActor, ::BlockPos const& pos, ::ItemInstance* itemUsed, ::Vec3 knotOffset);
// NOLINTEND

} // namespace LeashKnotUtility
