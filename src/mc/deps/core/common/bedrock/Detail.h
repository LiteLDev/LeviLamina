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
MCAPI struct Bedrock::CallStack::Context createContext(std::string);

MCAPI std::nullopt_t createContext();

MCAPI struct Bedrock::Detail::ErrorInfoBuilder<std::error_code> createError(std::errc);

MCAPI void defaultDataStoreDelete(class Core::Path const& path);

MCAPI std::optional<std::string> defaultDataStoreLoad(class Core::Path const&);

MCAPI void defaultDataStoreSave(class Core::Path const& path, std::string_view data);

MCAPI std::back_insert_iterator<std::string>
      formatCallStackContexts(std::back_insert_iterator<std::string>, struct Bedrock::CallStack const&);
// NOLINTEND

}; // namespace Bedrock::Detail
