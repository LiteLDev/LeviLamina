#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Util::ResourceUri { struct ValidationResult; }
namespace Util::Url { struct Components; }
namespace Util::Url { struct ComponentsView; }
// clang-format on

namespace Util::Url {
// functions
// NOLINTBEGIN
MCNAPI ::std::string anonymizeIPAddress(::std::string const& ipAddress);

MCNAPI ::std::string anonymizeIPv6Address(::std::string const& ipAddress);

MCNAPI ::std::string append(::std::string const& lhs, ::std::string const& rhs);

MCNAPI bool isValidIP(::std::string_view ipAddrStr, bool considerIPv4Valid, bool considerIPv6Valid);

MCNAPI ::Util::Url::ComponentsView parseUrl(::std::string_view url);

MCNAPI ::std::string urlEncode(::std::string_view value, ::std::function<bool(uchar)> isAlphaNum);

MCNAPI ::Util::ResourceUri::ValidationResult validateAbsoluteUrl(::std::string const& url);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::vector<::std::pair<::std::string, ::std::string>> const& EMPTY_QUERY_PARAMETERS();

MCNAPI ::Util::Url::Components const& EMPTY_URL();
// NOLINTEND

}
