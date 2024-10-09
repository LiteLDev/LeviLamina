#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EventingRequest {
public:
    // prevent constructor by default
    EventingRequest& operator=(EventingRequest const&);
    EventingRequest(EventingRequest const&);
    EventingRequest();

public:
    // NOLINTBEGIN
    MCAPI ~EventingRequest();

    MCAPI static struct EventingRequest
    addPersonaEmotePlayed(std::string const& emoteProductId, bool isEmoteEndedEarly, int emoteSlotId);

    MCAPI static struct EventingRequest addPlayerActionComparisonFailure(std::string const& message);

    MCAPI static struct EventingRequest
    addPlayerBounced(struct ActorUniqueID const& playerID, class Block const& block, int bounceHeight);

    MCAPI static struct EventingRequest
    addPlayerUnexpectedFallDamage(float fallDistance, bool isVehicle, float divergenceAmount);

    MCAPI static struct EventingRequest
    addVehiclePositionComparisonFailure(class Vec3 const& clientPos, class Vec3 const& serverPos);

    // NOLINTEND
};
