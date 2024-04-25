#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/CallStack.h"
#include "mc/deps/core/common/bedrock/ErrorInfoBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct CallStack; }
namespace Core { class Path; }
// clang-format on

namespace Bedrock::Detail {
// NOLINTBEGIN
// symbol:
// ?createContext@Detail@Bedrock@@YA?AUContext@CallStack@2@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI struct Bedrock::CallStack::Context createContext(std::string);

// symbol: ?createContext@Detail@Bedrock@@YA?AUnullopt_t@std@@XZ
MCAPI std::nullopt_t createContext();

// symbol: ?createError@Detail@Bedrock@@YA?AU?$ErrorInfoBuilder@Verror_code@std@@@12@W4errc@std@@@Z
MCAPI struct Bedrock::Detail::ErrorInfoBuilder<std::error_code> createError(std::errc);

// symbol: ?defaultDataStoreDelete@Detail@Bedrock@@YAXAEBVPath@Core@@@Z
MCAPI void defaultDataStoreDelete(class Core::Path const& path);

// symbol:
// ?defaultDataStoreLoad@Detail@Bedrock@@YA?AV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBVPath@Core@@@Z
MCAPI std::optional<std::string> defaultDataStoreLoad(class Core::Path const&);

// symbol: ?defaultDataStoreSave@Detail@Bedrock@@YAXAEBVPath@Core@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI void defaultDataStoreSave(class Core::Path const& path, std::string_view data);

// symbol:
// ?formatCallStackContexts@Detail@Bedrock@@YA?AV?$back_insert_iterator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@V34@AEBUCallStack@2@@Z
MCAPI std::back_insert_iterator<std::string>
      formatCallStackContexts(std::back_insert_iterator<std::string>, struct Bedrock::CallStack const&);
// NOLINTEND

}; // namespace Bedrock::Detail
