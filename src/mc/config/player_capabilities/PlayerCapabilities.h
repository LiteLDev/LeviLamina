#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class Level;
namespace PlayerCapabilities { struct ISharedController; }
namespace PlayerCapabilities { struct IClientController; }
// clang-format on

namespace PlayerCapabilities {
// functions
// NOLINTBEGIN
MCNAPI_C ::std::unique_ptr<::PlayerCapabilities::IClientController>
createClientController(::std::weak_ptr<::IClientInstance const> client);

MCNAPI ::std::unique_ptr<::PlayerCapabilities::ISharedController> createController(::Level const& level);
// NOLINTEND

} // namespace PlayerCapabilities
