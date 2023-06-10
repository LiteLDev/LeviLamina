/**
 * @file  ProcessPlayerActionPacketSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ProcessPlayerActionPacketSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROCESSPLAYERACTIONPACKETSYSTEM
public:
    class ProcessPlayerActionPacketSystem& operator=(class ProcessPlayerActionPacketSystem const &) = delete;
    ProcessPlayerActionPacketSystem(class ProcessPlayerActionPacketSystem const &) = delete;
    ProcessPlayerActionPacketSystem() = delete;
#endif

public:
    /**
     * @symbol ?_foreachTransactionPacket\@ProcessPlayerActionPacketSystem\@\@SAXAEBUPlayerActionComponent\@\@_NAEBV?$function\@$$A6AXAEAVInventoryTransactionPacket\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static void _foreachTransactionPacket(struct PlayerActionComponent const &, bool, class std::function<void (class InventoryTransactionPacket &)> const &);
    /**
     * @symbol ?createSystem\@ProcessPlayerActionPacketSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
