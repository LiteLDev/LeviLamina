#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/CallStack.h"
#include "mc/platform/ErrorInfoBuilder.h"
#include "mc/platform/diagnostics/LogAreaID.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class AssertLevel; }
namespace Core { class Path; }
// clang-format on

namespace Bedrock::Detail {
// functions
// NOLINTBEGIN
MCNAPI ::Bedrock::CallStack::Context createContext(::std::string value);

MCNAPI ::Bedrock::CallStack::Context createContext(
    ::Bedrock::AssertLevel      assertLevel,
    ::LogAreaID                 logArea,
    ::std::string               value,
    ::Bedrock::CallStack::Frame frame
);

MCNAPI ::Bedrock::Detail::ErrorInfoBuilder<::std::error_code> createError(::std::errc errc);

MCNAPI void defaultDataStoreDelete(::Core::Path const& path);

MCNAPI ::std::optional<::std::string> defaultDataStoreLoad(::Core::Path const& path);

MCNAPI void defaultDataStoreSave(::Core::Path const& path, ::std::string_view data);
// NOLINTEND

} // namespace Bedrock::Detail
