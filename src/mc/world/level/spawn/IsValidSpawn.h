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
MCNAPI bool always(::BlockSource const&, ::Block const&, ::BlockPos, ::br::spawn::EntityType const&);

MCNAPI bool fireImmune(::BlockSource const&, ::Block const&, ::BlockPos, ::br::spawn::EntityType const& entityType);

MCNAPI bool never(::BlockSource const&, ::Block const&, ::BlockPos, ::br::spawn::EntityType const&);

MCNAPI bool ocelotOrParrot(::BlockSource const&, ::Block const&, ::BlockPos, ::br::spawn::EntityType const& entityType);

MCNAPI bool polarBear(::BlockSource const&, ::Block const&, ::BlockPos, ::br::spawn::EntityType const& entityType);
// NOLINTEND

} // namespace IsValidSpawn
