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
// functions
// NOLINTBEGIN
MCAPI ::Bedrock::CallStack::Context createContext(::std::string value);

MCAPI ::std::nullopt_t createContext();

MCAPI ::Bedrock::Detail::ErrorInfoBuilder<::std::error_code> createError(::std::errc errc);

MCAPI void defaultDataStoreDelete(::Core::Path const& path);

MCAPI ::std::optional<::std::string> defaultDataStoreLoad(::Core::Path const& path);

MCAPI void defaultDataStoreSave(::Core::Path const& path, ::std::string_view data);

MCAPI ::std::back_insert_iterator<::std::string>
formatCallStackContexts(::std::back_insert_iterator<::std::string> it, ::Bedrock::CallStack const& callStack);
// NOLINTEND

} // namespace Bedrock::Detail
