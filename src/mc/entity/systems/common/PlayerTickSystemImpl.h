#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerTickSystemImpl {
// NOLINTBEGIN
MCAPI std::optional<uint64> _tryTickPlayerMovement(struct PlayerTickComponent&, struct IPlayerTickPolicy const&);
// NOLINTEND

}; // namespace PlayerTickSystemImpl
