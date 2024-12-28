#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SerializerContext.h"

namespace CameraPresetsInternals {
// functions
// NOLINTBEGIN
MCAPI void
_doContentError(::std::string const& message, ::std::string_view filename, ::std::vector<::std::string> const& errors);

MCAPI ::std::string _getUnrecognizedFieldText(::std::vector<::cereal::SerializerContext::LogEntry> const& schemaLog);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::vector<::std::string>& ALLOWED_MC_INHERIT();
// NOLINTEND

} // namespace CameraPresetsInternals
