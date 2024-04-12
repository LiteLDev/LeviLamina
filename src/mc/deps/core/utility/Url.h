#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Util::Url { struct Components; }
namespace Util::Url { struct ComponentsView; }
// clang-format on

namespace Util::Url {
// NOLINTBEGIN
// symbol:
// ?EMPTY_QUERY_PARAMETERS@Url@Util@@3V?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@B
MCAPI extern std::vector<std::pair<std::string, std::string>> const EMPTY_QUERY_PARAMETERS;

// symbol: ?EMPTY_URL@Url@Util@@3UComponents@12@B
MCAPI extern struct Util::Url::Components const EMPTY_URL;

// symbol:
// ?addUrlSchemeIfNotPresent@Url@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV34@0@Z
MCAPI std::string addUrlSchemeIfNotPresent(std::string const& url, std::string const& scheme);

// symbol: ?anonymizeIPAddress@Url@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV34@@Z
MCAPI std::string anonymizeIPAddress(std::string const& ipAddress);

// symbol: ?anonymizeIPv6Address@Url@Util@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV34@@Z
MCAPI std::string anonymizeIPv6Address(std::string const& ipAddress);

// symbol: ?isValidIP@Url@Util@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@_N1@Z
MCAPI bool isValidIP(std::string_view ipAddrStr, bool considerIPv4Valid, bool considerIPv6Valid);

// symbol: ?parseUrl@Url@Util@@YA?AUComponentsView@12@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI struct Util::Url::ComponentsView parseUrl(std::string_view url);
// NOLINTEND

}; // namespace Util::Url
