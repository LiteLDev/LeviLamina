#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
namespace br::spawn { struct EntityType; }
// clang-format on

namespace IsValidSpawn {
// functions
// NOLINTBEGIN
MCFOLD bool always(::BlockSource const&, ::Block const&, ::BlockPos, ::br::spawn::EntityType const&);

MCAPI bool fireImmune(::BlockSource const&, ::Block const&, ::BlockPos, ::br::spawn::EntityType const& entityType);

MCFOLD bool never(::BlockSource const&, ::Block const&, ::BlockPos, ::br::spawn::EntityType const&);

MCAPI bool ocelotOrParrot(::BlockSource const&, ::Block const&, ::BlockPos, ::br::spawn::EntityType const& entityType);

MCAPI bool polarBear(::BlockSource const&, ::Block const&, ::BlockPos, ::br::spawn::EntityType const& entityType);
// NOLINTEND

}
