#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::OptionalHelper {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_S
MCNAPI ::entt::meta_any getValue(::entt::meta_any& optionalAny);
#endif

MCNAPI bool isOptionalAny(::entt::meta_type const& type);
// NOLINTEND

} // namespace Scripting::OptionalHelper
