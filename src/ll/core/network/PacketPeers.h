#pragma once

#include <functional>
#include <memory>
#include <optional>
#include <string>
#include <vector>

#include "ll/api/network/packet/PacketRegistrar.h"

class NetworkIdentifier;
class NetworkStackLatencyPacket;
class ServerPlayer;

namespace ll::network {
class PacketPeers {
    struct Impl;
    std::unique_ptr<Impl> impl;

    PacketPeers();
    ~PacketPeers();

public:
    static PacketPeers& getInstance();

    void onLocalChanged(PacketSide side, std::vector<PacketRuntimeId> const& packets, bool handled);

    [[nodiscard]] bool clientHandles(NetworkIdentifier const& client, PacketRuntimeId id) const;

    [[nodiscard]] bool serverHandles(PacketRuntimeId id) const;

    void holdLogin(NetworkIdentifier const& client, ServerPlayer& player, std::function<void()> resume);

    [[nodiscard]] bool releaseLogin(NetworkIdentifier const& client, NetworkStackLatencyPacket const& packet);

    void updateClient(NetworkIdentifier const& client, std::vector<PacketRuntimeId> const& packets, bool handled);

    void removeClient(NetworkIdentifier const& client);

    void updateServer(std::vector<PacketRuntimeId> const& packets, bool handled);

    void removeServer();

    [[nodiscard]] std::optional<std::string> checkServer() const;
};
} // namespace ll::network
