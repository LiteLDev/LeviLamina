#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerTickPolicy {
// NOLINTBEGIN
MCAPI std::unique_ptr<struct IPlayerTickPolicy> createPolicy(struct PlayerTickConfig const& config);
// NOLINTEND

}; // namespace PlayerTickPolicy
