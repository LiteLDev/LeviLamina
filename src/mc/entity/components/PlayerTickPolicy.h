#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct IPlayerTickPolicy;
struct PlayerTickConfig;
// clang-format on

namespace PlayerTickPolicy {
// functions
// NOLINTBEGIN
MCAPI ::std::unique_ptr<::IPlayerTickPolicy> createPolicy(::PlayerTickConfig const& config);
// NOLINTEND

} // namespace PlayerTickPolicy
