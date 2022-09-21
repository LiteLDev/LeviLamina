/**
 * @file  MC/ServerPlayerMovementSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1354702167
     * @symbol ?_foreachTransactionPacket@ServerPlayerMovementSystem@@SAXAEBUPlayerActionComponent@@_NAEBV?$function@$$A6AXAEAVInventoryTransactionPacket@@@Z@std@@@Z
     */
    MCAPI static void _foreachTransactionPacket(struct PlayerActionComponent const &, bool, class std::function<void (class InventoryTransactionPacket &)> const &);
    /**
     * @hash   739976736
     * @symbol ?create@ServerPlayerMovementSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @hash   1633914005
     * @symbol ?onPlayerAuthInputPacket@ServerPlayerMovementSystem@@SAXAEAUServerPlayerMovementComponent@@AEBVPlayerAuthInputPacket@@@Z
     */
    MCAPI static void onPlayerAuthInputPacket(struct ServerPlayerMovementComponent &, class PlayerAuthInputPacket const &);

};