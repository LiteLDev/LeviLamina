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
MCNAPI_C ::std::string addUrlSchemeIfNotPresent(::std::string const& url, ::std::string const& scheme);

MCNAPI ::std::string anonymizeIPAddress(::std::string const& ipAddress);

MCNAPI ::std::string anonymizeIPv6Address(::std::string const& ipAddress);

MCNAPI ::std::string append(::std::string const& lhs, ::std::string const& rhs);

MCNAPI_C ::std::string appendQueryString(::std::string const& url, ::std::string const& query);

MCNAPI_C ::std::string buildMailtoUrl(::std::string const& subject, ::std::string const& body);

MCNAPI_C bool doesRouteMatch(::std::string_view routePattern, ::std::string_view route);

MCNAPI_C ::std::string extractAuthorityAndPathFromUrl(::std::string const& url);

MCNAPI_C ::std::optional<::std::string> getExtension(::std::string const& url);

MCNAPI_C ::std::vector<::std::pair<::std::string_view, ::std::string_view>> getQueryParameters(::std::string_view url);

MCNAPI_C bool isValidAbsoluteUrl(::std::string const& url);

MCNAPI bool isValidIP(::std::string_view ipAddrStr, bool considerIPv4Valid, bool considerIPv6Valid);

MCNAPI ::Util::Url::ComponentsView parseUrl(::std::string_view url);

MCNAPI_C ::std::string setQueryParameter(::std::string_view url, ::std::string_view key, ::std::string_view value);

MCNAPI_C bool startsWithMatchingFullPathSegments(::std::string_view route, ::std::string_view start);

MCNAPI_C ::std::string stripProtocol(::std::string const& url);

MCNAPI_C ::std::optional<::std::string> urlDecode(::std::string_view value, bool replacePlusWithSpace);

MCNAPI ::std::string urlEncode(::std::string_view value, ::std::function<bool(uchar)> isAlphaNum);

MCNAPI ::Util::ResourceUri::ValidationResult validateAbsoluteUrl(::std::string const& url);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::vector<::std::pair<::std::string, ::std::string>> const& EMPTY_QUERY_PARAMETERS();

MCNAPI ::Util::Url::Components const& EMPTY_URL();
// NOLINTEND

} // namespace Util::Url
