#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LayeredAbilities;
// clang-format on

namespace AgentAbilitiesHelper {
// functions
// NOLINTBEGIN
MCAPI void updateAbilities(
    ::LayeredAbilities const&    player,
    ::std::optional<bool> const& canModifyBlocks,
    ::LayeredAbilities&          agent
);
// NOLINTEND

} // namespace AgentAbilitiesHelper
