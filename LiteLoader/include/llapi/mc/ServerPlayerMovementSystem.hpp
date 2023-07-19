/**
 * @file  ServerPlayerMovementSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerPlayerMovementSystem.
 *
 */
class ServerPlayerMovementSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYERMOVEMENTSYSTEM
public:
    class ServerPlayerMovementSystem& operator=(class ServerPlayerMovementSystem const &) = delete;
    ServerPlayerMovementSystem(class ServerPlayerMovementSystem const &) = delete;
    ServerPlayerMovementSystem() = delete;
#endif

public:
    /**
     * @symbol ?_updateFallDistance\@ServerPlayerMovementSystem\@\@SAXAEBUServerPlayerCurrentMovementComponent\@\@AEBUStateVectorComponent\@\@AEAUFallDistanceComponent\@\@\@Z
     */
    MCAPI static void _updateFallDistance(struct ServerPlayerCurrentMovementComponent const &, struct StateVectorComponent const &, struct FallDistanceComponent &);
    /**
     * @symbol ?createPostInputSystems\@ServerPlayerMovementSystem\@\@SA?AV?$array\@UTickingSystemWithInfo\@\@$01\@std\@\@XZ
     */
    MCAPI static class std::array<struct TickingSystemWithInfo, 2> createPostInputSystems();
    /**
     * @symbol ?createPostTravelSystems\@ServerPlayerMovementSystem\@\@SA?AV?$array\@UTickingSystemWithInfo\@\@$03\@std\@\@XZ
     */
    MCAPI static class std::array<struct TickingSystemWithInfo, 4> createPostTravelSystems();
    /**
     * @symbol ?createPreInputSystems\@ServerPlayerMovementSystem\@\@SA?AV?$array\@UTickingSystemWithInfo\@\@$02\@std\@\@XZ
     */
    MCAPI static class std::array<struct TickingSystemWithInfo, 3> createPreInputSystems();
    /**
     * @symbol ?createServerPlayerMovementFinalSystem\@ServerPlayerMovementSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createServerPlayerMovementFinalSystem();

};
