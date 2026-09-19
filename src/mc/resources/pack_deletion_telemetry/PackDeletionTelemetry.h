#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
namespace Core { class PathView; }
namespace PackDeletionTelemetry { struct EventData; }
namespace PackDeletionTelemetry { struct PackInfo; }
// clang-format on

namespace PackDeletionTelemetry {
// functions
// NOLINTBEGIN
MCNAPI ::PackDeletionTelemetry::EventData createEventData(
    ::std::string_view                reason,
    ::PackDeletionTelemetry::PackInfo packInfo,
    ::Core::PathView                  path,
    ::std::optional<uint64>           sizeBeforeDelete,
    bool                              deletionSucceeded
);

MCNAPI void sendEvent(
    ::IMinecraftEventing*             eventing,
    ::std::string_view                reason,
    ::PackDeletionTelemetry::PackInfo packInfo,
    ::Core::PathView                  path,
    ::std::optional<uint64>           sizeBeforeDelete,
    bool                              deletionSucceeded
);

MCNAPI ::std::optional<uint64> tryMeasurePathSize(::Core::PathView path);
// NOLINTEND

} // namespace PackDeletionTelemetry
