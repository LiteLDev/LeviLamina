#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class ComponentStorage; }
// clang-format on

namespace ResourceProcessing::ActorDefinitionUtils {
// functions
// NOLINTBEGIN
MCNAPI bool containsFamily(::cereal::ComponentStorage const& definitions, ::std::string_view familyName);
// NOLINTEND

} // namespace ResourceProcessing::ActorDefinitionUtils
