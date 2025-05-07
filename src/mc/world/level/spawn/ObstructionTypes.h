#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/spawn/ObstructionPredicateToken.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Mob;
namespace br::spawn { struct EntityType; }
// clang-format on

namespace br::spawn::ObstructionTypes {
// functions
// NOLINTBEGIN
MCNAPI ::std::vector<
    ::std::tuple<::std::string, ::std::function<bool(::BlockSource&, ::Mob const&, ::br::spawn::EntityType const&)>>>
defaults();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::br::spawn::ObstructionPredicateToken const& MOB();
// NOLINTEND

} // namespace br::spawn::ObstructionTypes
