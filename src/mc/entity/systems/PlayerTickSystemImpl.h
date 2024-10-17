#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerTickSystemImpl {
// NOLINTBEGIN
MCAPI std::optional<uint64>
      _tryTickPlayerMovement(struct PlayerTickComponent& tickComponent, struct IPlayerTickPolicy const& policy);
// NOLINTEND

}; // namespace PlayerTickSystemImpl
