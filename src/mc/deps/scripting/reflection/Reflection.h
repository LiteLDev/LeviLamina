#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::Reflection {
// functions
// NOLINTBEGIN
MCAPI bool HasBaseType(::entt::meta_type const& baseAnyType, ::entt::meta_type const& derivedAnyType);
// NOLINTEND

} // namespace Scripting::Reflection
