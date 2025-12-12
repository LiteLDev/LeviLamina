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
    MCNAPI static void _tryResetFallDistance(
        ::StateVectorComponent const& vecComp,
        ::FallDistanceComponent&      fallDistance,
        ::BlockSource const&          region
    );

    MCNAPI static ::TickingSystemWithInfo createClearPlayerActionComponentSystem();

    MCNAPI static ::TickingSystemWithInfo createServerPlayerResetFallDistanceSystem();
    // NOLINTEND
};
