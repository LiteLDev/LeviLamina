#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace PlayerCapabilities { struct ISharedController; }
// clang-format on

namespace PlayerCapabilities {
// functions
// NOLINTBEGIN
MCAPI ::std::unique_ptr<::PlayerCapabilities::ISharedController> createController(::Level const& level);
// NOLINTEND

} // namespace PlayerCapabilities
