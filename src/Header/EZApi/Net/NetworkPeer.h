#pragma once

#include <cstdint>
#include <functional>
#include <string>

#include "../dll.h"

class NetworkPeer {
public:
    enum class Reliability : int {};
    enum class DataStatus : int { OK,
                                  BUSY };
    struct NetworkStatus {
        int    level;
        int    ping, avgping;
        double packetloss, avgpacketloss;
    };

    virtual ~NetworkPeer();
    virtual void          sendPacket(std::string, NetworkPeer::Reliability, int) = 0;
    virtual DataStatus    receivePacket(std::string&)                            = 0;
    virtual NetworkStatus getNetworkStatus()                                     = 0;
    MCAPI virtual void    update();
    MCAPI virtual void    flush(std::function<void(void)>&&);
};