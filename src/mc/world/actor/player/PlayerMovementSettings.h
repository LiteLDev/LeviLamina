#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/PlayerTickConfig.h"
#include "mc/entity/components/ReplayStateConfig.h"
#include "mc/entity/components/ServerAuthMovementMode.h"
#include "mc/world/actor/player/preview/movement_preview/ServerAuthMovementFlight.h"

struct PlayerMovementSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::MovementPreview::ServerAuthMovementFlight> MovementFlight;
    ::ll::TypedStorage<1, 1, bool>                                        mIsVanillaWorld;
    ::ll::TypedStorage<1, 1, ::ServerAuthMovementMode>                    AuthorityMode;
    ::ll::TypedStorage<4, 4, float>                                       ScoreThreshold;
    ::ll::TypedStorage<4, 4, float>                                       ActionDirectionThreshold;
    ::ll::TypedStorage<4, 4, float>                                       DistanceThreshold;
    ::ll::TypedStorage<4, 4, float>                                       DistanceThresholdSqr;
    ::ll::TypedStorage<4, 4, int>                                         DurationThreshold;
    ::ll::TypedStorage<4, 20, ::ReplayStateConfig>                        mReplay;
    ::ll::TypedStorage<8, 32, ::PlayerTickConfig>                         mPlayerTickConfig;
    ::ll::TypedStorage<1, 1, bool>                                        ServerAuthBlockBreaking;
    ::ll::TypedStorage<4, 4, float>                                       mServerPlayerPickRangeScalar;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PlayerMovementSettings getDefault();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PlayerMovementSettings const& INVALID();
    // NOLINTEND
};
