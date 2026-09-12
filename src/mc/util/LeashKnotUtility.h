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
MCAPI ::LeashKnot* findAt(::BlockSource& region, ::BlockPos const& pos);

MCAPI ::LeashKnot*
trySpawn(::BlockSource& region, ::BlockPos const& pos, ::ItemInstance const* itemUsed, ::Vec3 knotOffset);

MCAPI bool
tryTransferLeashedActors(::Actor& holderActor, ::BlockPos const& pos, ::ItemInstance* itemUsed, ::Vec3 knotOffset);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::Vec3 const& DEFAULT_KNOT_OFFSET();
// NOLINTEND

} // namespace LeashKnotUtility
