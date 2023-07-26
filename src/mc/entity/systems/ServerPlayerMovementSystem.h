#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerPlayerMovementSystem {

public:
    // prevent constructor by default
    ServerPlayerMovementSystem& operator=(ServerPlayerMovementSystem const&) = delete;
    ServerPlayerMovementSystem(ServerPlayerMovementSystem const&)            = delete;
    ServerPlayerMovementSystem()                                             = delete;

public:
    /**
     * @symbol
     * ?_updateFallDistance\@ServerPlayerMovementSystem\@\@SAXAEBUServerPlayerCurrentMovementComponent\@\@AEBUStateVectorComponent\@\@AEAUFallDistanceComponent\@\@\@Z
     */
    MCAPI static void
    _updateFallDistance(struct ServerPlayerCurrentMovementComponent const&, struct StateVectorComponent const&, struct FallDistanceComponent&); // NOLINT
    /**
     * @symbol
     * ?createPostInputSystems\@ServerPlayerMovementSystem\@\@SA?AV?$array\@UTickingSystemWithInfo\@\@$01\@std\@\@XZ
     */
    MCAPI static class std::array<struct TickingSystemWithInfo, 2> createPostInputSystems(); // NOLINT
    /**
     * @symbol
     * ?createPostTravelSystems\@ServerPlayerMovementSystem\@\@SA?AV?$array\@UTickingSystemWithInfo\@\@$03\@std\@\@XZ
     */
    MCAPI static class std::array<struct TickingSystemWithInfo, 4> createPostTravelSystems(); // NOLINT
    /**
     * @symbol
     * ?createPreInputSystems\@ServerPlayerMovementSystem\@\@SA?AV?$array\@UTickingSystemWithInfo\@\@$02\@std\@\@XZ
     */
    MCAPI static class std::array<struct TickingSystemWithInfo, 3> createPreInputSystems(); // NOLINT
    /**
     * @symbol ?createServerPlayerMovementFinalSystem\@ServerPlayerMovementSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createServerPlayerMovementFinalSystem(); // NOLINT
};
