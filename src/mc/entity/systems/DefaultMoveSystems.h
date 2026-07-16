#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace DefaultMoveSystems {
// functions
// NOLINTBEGIN
MCAPI void forSystems(::brstd::function_ref<void(::TickingSystemWithInfo&&)> func);
// NOLINTEND

} // namespace DefaultMoveSystems
