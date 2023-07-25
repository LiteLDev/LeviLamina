#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Util::Url { struct Components; }
namespace Util::Url { struct ComponentsView; }
// clang-format on

namespace Util::Url {
/**
 * @symbol
 * ?EMPTY_QUERY_PARAMETERS\@Url\@Util\@\@3V?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@B
 */
MCAPI extern std::vector<struct std::pair<std::string, std::string>> const EMPTY_QUERY_PARAMETERS;
/**
 * @symbol ?EMPTY_URL\@Url\@Util\@\@3UComponents\@12\@B
 */
MCAPI extern struct Util::Url::Components const EMPTY_URL;
/**
 * @symbol
 * ?addUrlSchemeIfNotPresent\@Url\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV34\@0\@Z
 */
MCAPI std::string addUrlSchemeIfNotPresent(std::string const&, std::string const&);
/**
 * @symbol
 * ?anonymizeIPAddress\@Url\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV34\@\@Z
 */
MCAPI std::string anonymizeIPAddress(std::string const&);
/**
 * @symbol
 * ?anonymizeIPv6Address\@Url\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV34\@\@Z
 */
MCAPI std::string anonymizeIPv6Address(std::string const&);
/**
 * @symbol
 * ?append\@Url\@Util\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV34\@0\@Z
 */
MCAPI std::string append(std::string const&, std::string const&);
/**
 * @symbol ?isValidIP\@Url\@Util\@\@YA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@_N1\@Z
 */
MCAPI bool isValidIP(class std::basic_string_view<char, struct std::char_traits<char>>, bool, bool);
/**
 * @symbol
 * ?parseUrl\@Url\@Util\@\@YA?AUComponentsView\@12\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
 */
MCAPI struct Util::Url::ComponentsView parseUrl(class std::basic_string_view<char, struct std::char_traits<char>>);

}; // namespace Util::Url
