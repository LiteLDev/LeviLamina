#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Util::Url { struct Components; }
namespace Util::Url { struct ComponentsView; }
// clang-format on

namespace Util::Url {
// NOLINTBEGIN
MCAPI std::string addUrlSchemeIfNotPresent(std::string const& url, std::string const& scheme);

MCAPI std::string anonymizeIPAddress(std::string const&);

MCAPI std::string anonymizeIPv6Address(std::string const&);

MCAPI bool isValidIP(std::string_view ipAddrStr, bool considerIPv4Valid, bool considerIPv6Valid);

MCAPI struct Util::Url::ComponentsView parseUrl(std::string_view url);
// NOLINTEND

// thunks
// NOLINTBEGIN
MCAPI std::vector<std::pair<std::string, std::string>> const& EMPTY_QUERY_PARAMETERS();

MCAPI struct Util::Url::Components const& EMPTY_URL();
// NOLINTEND

}; // namespace Util::Url
