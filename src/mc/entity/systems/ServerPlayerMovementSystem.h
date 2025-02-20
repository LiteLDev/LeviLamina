#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
struct FallDistanceComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

struct ServerPlayerMovementSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tryResetFallDistance(
        ::StateVectorComponent const& vecComp,
        ::FallDistanceComponent&      fallDistance,
        ::BlockSource const&          region
    );

    MCAPI static ::TickingSystemWithInfo createClearPlayerActionComponentSystem();

    MCAPI static ::std::array<::TickingSystemWithInfo, 2> createPostTravelSystems();

    MCAPI static ::TickingSystemWithInfo createServerPlayerResetFallDistanceSystem();
    // NOLINTEND
};
