#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
class Vec3;
// clang-format on

class ActorEventBroadcaster {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void broadcastActorEvent(
        ::Actor&                       actor,
        ::ActorEvent                   eventId,
        int                            data,
        ::Dimension&                   dimension,
        ::std::optional<::Vec3> const& fireAtPosition
    ) const;
    // NOLINTEND
};
