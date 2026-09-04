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

#ifdef LL_PLAT_C
MCNAPI ::std::string appendQueryString(::std::string const& url, ::std::string const& query);

MCNAPI ::std::string buildMailtoUrl(::std::string const& subject, ::std::string const& body);

MCNAPI bool doesRouteMatch(::std::string_view routePattern, ::std::string_view route);

MCNAPI ::std::string extractAuthorityAndPathFromUrl(::std::string const& url);

MCNAPI ::std::optional<::std::string> getExtension(::std::string const& url);

MCNAPI ::std::vector<::std::pair<::std::string_view, ::std::string_view>> getQueryParameters(::std::string_view url);
#endif

MCNAPI bool isValidIP(::std::string_view ipAddrStr, bool considerIPv4Valid, bool considerIPv6Valid);

MCNAPI bool isValidIPv4(::std::string_view ipAddrStr);

MCNAPI bool isValidIPv6(::std::string_view ipAddrStr);

MCNAPI ::Util::Url::ComponentsView parseUrl(::std::string_view url);

#ifdef LL_PLAT_C
MCNAPI ::std::string setQueryParameter(::std::string_view url, ::std::string_view key, ::std::string_view value);

MCNAPI ::std::string stripProtocol(::std::string const& url);

MCNAPI ::std::string stripQueryParameters(::std::string const& url);

MCNAPI ::std::optional<::std::string> urlDecode(::std::string_view value, bool replacePlusWithSpace);
#endif

MCNAPI ::std::string urlEncode(::std::string_view value, ::std::function<bool(uchar)> isAlphaNum);

MCNAPI ::Util::ResourceUri::ValidationResult validateAbsoluteUrl(::std::string const& url);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::Util::Url::Components const& EMPTY_URL();
// NOLINTEND

} // namespace Util::Url
