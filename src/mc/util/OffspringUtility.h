#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Player;
struct ActorDefinitionIdentifier;
struct OffspringDefinition;
// clang-format on

namespace OffspringUtility {
// functions
// NOLINTBEGIN
MCNAPI ::Mob* createOffspring(
    ::Actor&                           owner,
    ::Actor&                           partner,
    ::OffspringDefinition const&       offspringData,
    ::ActorDefinitionIdentifier const& babyType,
    ::gsl::span<::Player const* const> players
);
// NOLINTEND

} // namespace OffspringUtility
