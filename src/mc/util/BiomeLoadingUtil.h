#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SerializerContext.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace BiomeLoadingUtil {
// functions
// NOLINTBEGIN
MCAPI void
_doContentError(::std::string const& message, ::Core::Path const& filePath, ::std::vector<::std::string> const& errors);

MCAPI ::std::string _getUnrecognizedFieldText(::std::vector<::cereal::SerializerContext::LogEntry> const& schemaLog);
// NOLINTEND

} // namespace BiomeLoadingUtil
