#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class LevelData;
class WorldClockRegistry;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

namespace VanillaWorldClocks {
// functions
// NOLINTBEGIN
MCAPI void registerWorldClockEvents(
    ::WorldClockRegistry&                           registry,
    ::LevelData&                                    levelData,
    ::std::vector<::Bedrock::PubSub::Subscription>& clockSubscriptions
);

MCAPI void registerWorldClocks(::WorldClockRegistry& registry);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::HashedString const& OVERWORLD_CLOCK_NAME();
// NOLINTEND

} // namespace VanillaWorldClocks
