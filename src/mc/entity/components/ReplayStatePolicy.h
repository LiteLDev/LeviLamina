#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ReplayStatePolicy {
// NOLINTBEGIN
MCAPI std::unique_ptr<struct IReplayStatePolicy> createClientContext(struct ReplayStateConfig const& config);

MCAPI std::unique_ptr<struct IReplayStatePolicy> createServerContext(struct ReplayStateConfig const& config);
// NOLINTEND

}; // namespace ReplayStatePolicy
