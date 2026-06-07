#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::OptionalHelper {
// functions
// NOLINTBEGIN
MCNAPI ::entt::meta_any getValue(::entt::meta_any& optionalAny);

MCNAPI bool isOptionalAny(::entt::meta_type const& type);
// NOLINTEND

} // namespace Scripting::OptionalHelper
