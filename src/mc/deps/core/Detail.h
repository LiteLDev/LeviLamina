#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/CallStack.h"
#include "mc/platform/ErrorInfoBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct CallStack; }
namespace Core { class Path; }
// clang-format on

namespace Bedrock::Detail {
// NOLINTBEGIN
MCAPI struct Bedrock::CallStack::Context createContext(std::string value);

MCAPI std::nullopt_t createContext();

MCAPI struct Bedrock::Detail::ErrorInfoBuilder<std::error_code> createError(std::errc);

MCAPI void defaultDataStoreDelete(class Core::Path const& path);

MCAPI std::optional<std::string> defaultDataStoreLoad(class Core::Path const& path);

MCAPI void defaultDataStoreSave(class Core::Path const& path, std::string_view data);

MCAPI std::back_insert_iterator<std::string>
      formatCallStackContexts(std::back_insert_iterator<std::string> it, struct Bedrock::CallStack const& callStack);
// NOLINTEND

}; // namespace Bedrock::Detail
