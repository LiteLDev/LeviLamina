#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Util::Url { struct Components; }
namespace Util::Url { struct ComponentsView; }
// clang-format on

namespace Util::Url {
// functions
// NOLINTBEGIN
MCAPI ::std::string addUrlSchemeIfNotPresent(::std::string const& url, ::std::string const& scheme);

MCAPI ::std::string anonymizeIPAddress(::std::string const& ipAddress);

MCAPI ::std::string anonymizeIPv6Address(::std::string const& ipAddress);

MCAPI bool isValidIP(::std::string_view ipAddrStr, bool considerIPv4Valid, bool considerIPv6Valid);

MCAPI ::Util::Url::ComponentsView parseUrl(::std::string_view url);

MCAPI ::std::string urlEncode(::std::string_view value, ::std::function<bool(uchar)> isAlphaNum);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::vector<::std::pair<::std::string, ::std::string>> const& EMPTY_QUERY_PARAMETERS();

MCAPI ::Util::Url::Components const& EMPTY_URL();
// NOLINTEND

} // namespace Util::Url
