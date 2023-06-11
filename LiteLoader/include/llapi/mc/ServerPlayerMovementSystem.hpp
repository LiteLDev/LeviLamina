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
     * @symbol ?createSystems\@ServerPlayerMovementSystem\@\@SA?AV?$array\@UTickingSystemWithInfo\@\@$0BE\@\@std\@\@XZ
     */
    MCAPI static class std::array<struct TickingSystemWithInfo, 20> createSystems();

};
