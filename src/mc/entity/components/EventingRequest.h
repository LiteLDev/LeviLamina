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
    // symbol: ??1EventingRequest@@QEAA@XZ
    MCAPI ~EventingRequest();

    // symbol:
    // ?addPersonaEmotePlayed@EventingRequest@@SA?AU1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NH@Z
    MCAPI static struct EventingRequest addPersonaEmotePlayed(std::string const&, bool, int);

    // symbol:
    // ?addPlayerActionComparisonFailure@EventingRequest@@SA?AU1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static struct EventingRequest addPlayerActionComparisonFailure(std::string const&);

    // symbol: ?addPlayerBounced@EventingRequest@@SA?AU1@AEBUActorUniqueID@@AEBVBlock@@H@Z
    MCAPI static struct EventingRequest
    addPlayerBounced(struct ActorUniqueID const& playerID, class Block const& block, int bounceHeight);

    // symbol: ?addPlayerUnexpectedFallDamage@EventingRequest@@SA?AU1@M_NM@Z
    MCAPI static struct EventingRequest addPlayerUnexpectedFallDamage(float, bool, float);

    // symbol: ?addVehiclePositionComparisonFailure@EventingRequest@@SA?AU1@AEBVVec3@@0@Z
    MCAPI static struct EventingRequest addVehiclePositionComparisonFailure(class Vec3 const&, class Vec3 const&);

    // NOLINTEND
};
