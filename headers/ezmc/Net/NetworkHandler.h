#pragma once

#include <bitset>
#include <chrono>
#include <memory>
#include <queue>
#include <vector>

#include "NetworkIdentifier.h"
#include "NetworkPeer.h"

#include "../dll.h"

class PacketObserver;
class Scheduler;
class NetworkPacketRecoder;
class EncryptedNetworkPeer;
class BatchedNetworkPeer;

class NetworkHandler {
public:
    class Connection {
    public:
        NetworkIdentifier                       id;
        int                                     unk152;
        std::weak_ptr<NetworkPacketRecoder>     packet_recoder;
        std::weak_ptr<EncryptedNetworkPeer>     encrypted;
        std::weak_ptr<BatchedNetworkPeer>       batched;
        std::shared_ptr<NetworkPeer>            shared;
        std::chrono::steady_clock::time_point   time_a, time_b;
        bool                                    flag240, flag241;
        std::bitset<2>                          cahnnel_status;
        std::queue<std::string>                 packet_queue;
        std::array<std::vector<std::string>, 2> buffer_arr;

        MCAPI Connection(
            NetworkIdentifier const& id, std::shared_ptr<NetworkPeer> shared, std::chrono::steady_clock::time_point time,
            bool flag, PacketObserver*, Scheduler&);
        MCAPI ~Connection();
        MCAPI NetworkPeer::DataStatus receivePacket(std::string&);

        inline bool isChannelPaused(uint32_t chan_id) {
            return cahnnel_status.test(chan_id);
        }
    };
    MCAPI void               disconnect();
    MCAPI void               runEvents();
    MCAPI void               send(class NetworkIdentifier const&, class Packet const&, unsigned char);
    MCAPI class NetworkPeer* getPeerForUser(class NetworkIdentifier const&);
};

static_assert(offsetof(NetworkHandler::Connection, packet_recoder) == 160);