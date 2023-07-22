/**
 * @file  NetworkPacketEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkPacketEventCoordinator.
 *
 */
class NetworkPacketEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKPACKETEVENTCOORDINATOR
public:
    class NetworkPacketEventCoordinator& operator=(class NetworkPacketEventCoordinator const &) = delete;
    NetworkPacketEventCoordinator(class NetworkPacketEventCoordinator const &) = delete;
    NetworkPacketEventCoordinator() = delete;
#endif

public:
    /**
     * @symbol  ?sendPacketReceivedFrom\@NetworkPacketEventCoordinator\@\@QEAAXAEBVPacketHeader\@\@AEBVPacket\@\@\@Z
     */
    MCAPI void sendPacketReceivedFrom(class PacketHeader const &, class Packet const &);

};