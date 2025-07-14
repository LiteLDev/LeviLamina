#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/DiscoveryEnvironment.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services { struct AzureIdentityConfig; }
// clang-format on

namespace Bedrock::Services {
// functions
// NOLINTBEGIN
MCNAPI ::Bedrock::Services::AzureIdentityConfig
createAzureIdentityConfig(::DiscoveryEnvironment environment, ::std::string const& serviceName);
// NOLINTEND

} // namespace Bedrock::Services
