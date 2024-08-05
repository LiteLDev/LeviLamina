#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::OptionalHelper {
// NOLINTBEGIN
MCAPI entt::meta_any getValue(entt::meta_any&);

MCAPI bool isOptionalAny(entt::meta_type type);
// NOLINTEND

}; // namespace Scripting::OptionalHelper
