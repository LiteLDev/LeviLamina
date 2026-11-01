#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace UI::Resources { struct ResolvedPropertyData; }
namespace UI::Resources { struct ResolvedTextureData; }
namespace cohtml { class Binder; }
// clang-format on

namespace UI::Resources {
// functions
// NOLINTBEGIN
MCNAPI void CoherentBind(::cohtml::Binder* binder, ::UI::Resources::ResolvedTextureData* data);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::UI::Resources::ResolvedPropertyData* data);

MCNAPI ::std::string toString(::glm::vec2 const& vec);
// NOLINTEND

} // namespace UI::Resources
