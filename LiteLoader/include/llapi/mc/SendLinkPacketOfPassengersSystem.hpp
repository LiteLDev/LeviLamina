/**
 * @file  SendLinkPacketOfPassengersSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SendLinkPacketOfPassengersSystem.
 *
 */
class SendLinkPacketOfPassengersSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SENDLINKPACKETOFPASSENGERSSYSTEM
public:
    class SendLinkPacketOfPassengersSystem& operator=(class SendLinkPacketOfPassengersSystem const &) = delete;
    SendLinkPacketOfPassengersSystem(class SendLinkPacketOfPassengersSystem const &) = delete;
    SendLinkPacketOfPassengersSystem() = delete;
#endif

public:
    /**
     * @symbol ?createCleanupSystem\@SendLinkPacketOfPassengersSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createCleanupSystem();
    /**
     * @symbol ?createSystem\@SendLinkPacketOfPassengersSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
