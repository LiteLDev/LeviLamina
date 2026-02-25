#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace UI::Resources { struct ResolvedPropertyData; }
namespace UI::Resources { struct ResolvedTextureData; }
namespace cohtml { class Binder; }
namespace ui { struct SliceSize; }
// clang-format on

namespace UI::Resources {
// functions
// NOLINTBEGIN
MCAPI void CoherentBind(::cohtml::Binder* binder, ::UI::Resources::ResolvedTextureData* data);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::UI::Resources::ResolvedPropertyData* data);

MCAPI ::std::string toString(::ui::SliceSize const& vec);

MCAPI ::std::string toString(::glm::vec2 const& vec);
// NOLINTEND

} // namespace UI::Resources
