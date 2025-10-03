#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class Input; }
namespace Puv { class Logger; }
namespace SharedTypes::v1_21_60::DimensionDefinition { struct DimensionDocument; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace DimensionLegacyParser {
// functions
// NOLINTBEGIN
MCNAPI ::SharedTypes::v1_21_60::DimensionDefinition::DimensionDocument
parseDimensionLegacy(::Puv::Input const& input, ::Puv::Logger& logger, ::cereal::ReflectionCtx const& ctx);
// NOLINTEND

} // namespace DimensionLegacyParser
