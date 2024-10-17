#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cereal/SerializerContext.h"

// auto generated forward declare list
// clang-format off
namespace CameraPresetsInternals { struct VerboseCameraList; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CameraPresetsInternals {
// NOLINTBEGIN
MCAPI void
_doContentError(std::string const& message, std::string const& filename, std::vector<std::string> const& errors);

MCAPI std::string _getUnrecognizedFieldText(std::vector<struct cereal::SerializerContext::LogEntry> const& schemaLog);
// NOLINTEND

}; // namespace CameraPresetsInternals
