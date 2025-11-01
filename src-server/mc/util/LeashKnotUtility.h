#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class ItemInstance;
class LeashKnot;
// clang-format on

namespace LeashKnotUtility {
// functions
// NOLINTBEGIN
MCNAPI bool canSurviveAtPos(::BlockSource const& region, ::BlockPos const& pos);

MCNAPI ::LeashKnot* findAt(::BlockSource& region, ::BlockPos const& pos);

MCNAPI ::LeashKnot* trySpawn(::BlockSource& region, ::BlockPos const& pos, ::ItemInstance const* itemUsed);

MCNAPI bool tryTranferLeashedActors(::Actor& holderActor, ::BlockPos const& pos, ::ItemInstance* itemUsed);
// NOLINTEND

}
