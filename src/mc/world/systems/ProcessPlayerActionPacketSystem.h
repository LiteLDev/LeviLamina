#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ProcessPlayerActionPacketSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROCESSPLAYERACTIONPACKETSYSTEM
public:
    ProcessPlayerActionPacketSystem& operator=(ProcessPlayerActionPacketSystem const&) = delete;
    ProcessPlayerActionPacketSystem(ProcessPlayerActionPacketSystem const&)            = delete;
    ProcessPlayerActionPacketSystem()                                                  = delete;
#endif

public:
    /**
     * @symbol
     * ?_foreachTransactionPacket\@ProcessPlayerActionPacketSystem\@\@SAXAEBUPlayerActionComponent\@\@_NAEBV?$function\@$$A6AXAEAVInventoryTransactionPacket\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static void
    _foreachTransactionPacket(struct PlayerActionComponent const&, bool, class std::function<void(class InventoryTransactionPacket&)> const&);
    /**
     * @symbol ?createSystem\@ProcessPlayerActionPacketSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
