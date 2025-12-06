#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorSpawnRuleData;
namespace Puv { struct Input; }
namespace Puv { struct Logger; }
// clang-format on

namespace SpawnGroupsLegacyParser {
// functions
// NOLINTBEGIN
MCAPI ::ActorSpawnRuleData parseSpawnRulesData(::Puv::Input const& input, ::Puv::Logger& logger);
// NOLINTEND

} // namespace SpawnGroupsLegacyParser
