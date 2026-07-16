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
MCNAPI ::LeashKnot* findAt(::BlockSource& region, ::BlockPos const& pos);

MCNAPI ::LeashKnot*
trySpawn(::BlockSource& region, ::BlockPos const& pos, ::ItemInstance const* itemUsed, ::Vec3 knotOffset);

MCNAPI bool
tryTransferLeashedActors(::Actor& holderActor, ::BlockPos const& pos, ::ItemInstance* itemUsed, ::Vec3 knotOffset);
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::Vec3 const& DEFAULT_KNOT_OFFSET();
#endif

#ifdef LL_PLAT_S
MCNAPI ::Vec3 const& DEFAULT_KNOT_OFFSET();
#endif
// NOLINTEND

} // namespace LeashKnotUtility
