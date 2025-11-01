#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/EntityPredicateToken.h"
#include "mc/world/level/chunk/EntitySpawnReason.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class IRandom;
namespace br::spawn { struct EntityType; }
// clang-format on

namespace br::spawn::EntityPredicateTypes {
// functions
// NOLINTBEGIN
MCNAPI ::std::vector<::std::tuple<
    ::std::string,
    ::std::function<
        bool(::br::spawn::EntityType const&, ::BlockSource&, ::br::spawn::EntitySpawnReason&, ::BlockPos, ::IRandom&)>>>
defaults();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::br::spawn::EntityPredicateToken const& MOB();
// NOLINTEND

} // namespace br::spawn::EntityPredicateTypes
