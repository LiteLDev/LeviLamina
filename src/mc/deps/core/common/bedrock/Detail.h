#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/CallStack.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Detail { template<typename T0> struct ErrorInfoBuilder; }
namespace Core { class Path; }
// clang-format on

namespace Bedrock::Detail {
/**
 * @symbol ?createContext\@Detail\@Bedrock\@\@YA?AUnullopt_t\@std\@\@XZ
 */
MCAPI struct std::nullopt_t createContext();
/**
 * @symbol
 * ?createContext\@Detail\@Bedrock\@\@YA?AUContext\@CallStack\@2\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI struct Bedrock::CallStack::Context createContext(std::string);
/**
 * @symbol ?createError\@Detail\@Bedrock\@\@YA?AU?$ErrorInfoBuilder\@Verror_code\@std\@\@\@12\@W4errc\@std\@\@\@Z
 */
MCAPI struct Bedrock::Detail::ErrorInfoBuilder<class std::error_code> createError(enum class std::errc);
/**
 * @symbol ?defaultDataStoreDelete\@Detail\@Bedrock\@\@YAXAEBVPath\@Core\@\@\@Z
 */
MCAPI void defaultDataStoreDelete(class Core::Path const&);
/**
 * @symbol
 * ?defaultDataStoreLoad\@Detail\@Bedrock\@\@YA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBVPath\@Core\@\@\@Z
 */
MCAPI class std::optional<std::string> defaultDataStoreLoad(class Core::Path const&);
/**
 * @symbol
 * ?defaultDataStoreSave\@Detail\@Bedrock\@\@YAXAEBVPath\@Core\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
 */
MCAPI void
defaultDataStoreSave(class Core::Path const&, class std::basic_string_view<char, struct std::char_traits<char>>);

}; // namespace Bedrock::Detail
