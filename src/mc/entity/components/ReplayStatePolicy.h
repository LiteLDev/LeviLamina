#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct IReplayStatePolicy;
struct ReplayStateConfig;
// clang-format on

namespace ReplayStatePolicy {
// functions
// NOLINTBEGIN
MCNAPI_C ::std::unique_ptr<::IReplayStatePolicy> createClientContext(::ReplayStateConfig const& config);

MCNAPI ::std::unique_ptr<::IReplayStatePolicy> createServerContext(::ReplayStateConfig const& config);
// NOLINTEND

} // namespace ReplayStatePolicy
