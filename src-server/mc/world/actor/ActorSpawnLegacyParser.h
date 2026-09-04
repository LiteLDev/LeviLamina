#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorSpawnRuleData;
namespace Puv { class Input; }
namespace Puv { class Logger; }
// clang-format on

namespace ActorSpawnLegacyParser {
// functions
// NOLINTBEGIN
MCAPI ::ActorSpawnRuleData parseSpawnRulesData(::Puv::Input const& input, ::Puv::Logger& logger);
// NOLINTEND

} // namespace ActorSpawnLegacyParser
