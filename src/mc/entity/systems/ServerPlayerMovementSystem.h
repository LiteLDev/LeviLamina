#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerPlayerMovementSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYERMOVEMENTSYSTEM
public:
    ServerPlayerMovementSystem& operator=(ServerPlayerMovementSystem const&) = delete;
    ServerPlayerMovementSystem(ServerPlayerMovementSystem const&)            = delete;
    ServerPlayerMovementSystem()                                             = delete;
#endif

public:
    /**
     * @symbol
     * ?_updateFallDistance\@ServerPlayerMovementSystem\@\@SAXAEBUServerPlayerCurrentMovementComponent\@\@AEBUStateVectorComponent\@\@AEAUFallDistanceComponent\@\@\@Z
     */
    MCAPI static void
    _updateFallDistance(struct ServerPlayerCurrentMovementComponent const&, struct StateVectorComponent const&, struct FallDistanceComponent&);
    /**
     * @symbol
     * ?createPostInputSystems\@ServerPlayerMovementSystem\@\@SA?AV?$array\@UTickingSystemWithInfo\@\@$01\@std\@\@XZ
     */
    MCAPI static class std::array<struct TickingSystemWithInfo, 2> createPostInputSystems();
    /**
     * @symbol
     * ?createPostTravelSystems\@ServerPlayerMovementSystem\@\@SA?AV?$array\@UTickingSystemWithInfo\@\@$03\@std\@\@XZ
     */
    MCAPI static class std::array<struct TickingSystemWithInfo, 4> createPostTravelSystems();
    /**
     * @symbol
     * ?createPreInputSystems\@ServerPlayerMovementSystem\@\@SA?AV?$array\@UTickingSystemWithInfo\@\@$02\@std\@\@XZ
     */
    MCAPI static class std::array<struct TickingSystemWithInfo, 3> createPreInputSystems();
    /**
     * @symbol ?createServerPlayerMovementFinalSystem\@ServerPlayerMovementSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createServerPlayerMovementFinalSystem();
};
