#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class Logger; }
namespace SharedTypes::v1_26_60 { struct ActorDefinitions; }
// clang-format on

namespace ResourceProcessing {
// functions
// NOLINTBEGIN
MCNAPI void
validatePreferredPathComponent(::SharedTypes::v1_26_60::ActorDefinitions const& actorDef, ::Puv::Logger& logger);

MCNAPI void validateTimerComponent(::SharedTypes::v1_26_60::ActorDefinitions const& actorDef, ::Puv::Logger& logger);
// NOLINTEND

} // namespace ResourceProcessing
