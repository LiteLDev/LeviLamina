#pragma once

#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

#include "ll/api/network/packet/PacketRegistrar.h"

class NetworkIdentifier;

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

    void beginLogin(NetworkIdentifier const& client);

    [[nodiscard]] static bool acceptsFromClient(NetworkIdentifier const& client, PacketRuntimeId id);

    [[nodiscard]] std::optional<std::string>
    checkClient(NetworkIdentifier const& client, std::string_view locale) const;

    void updateClient(NetworkIdentifier const& client, std::vector<PacketRuntimeId> const& packets, bool handled);

    void removeClient(NetworkIdentifier const& client);

    void updateServer(std::vector<PacketRuntimeId> const& packets, bool handled);

    void removeServer();

    [[nodiscard]] std::optional<std::string> checkServer() const;
};
} // namespace ll::network
