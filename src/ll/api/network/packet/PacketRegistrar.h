#pragma once

#include <functional>
#include <memory>
#include <string_view>

#include "ll/api/base/Containers.h"
#include "ll/api/base/StdInt.h"

namespace ll::network {

class Packet;
class IPacketHandler;

class PacketRegistrar {
public:
    using PacketFactory = std::function<std::shared_ptr<Packet>()>;
    using PacketHandler = std::shared_ptr<IPacketHandler>;

    static PacketRegistrar& getInstance();

    bool registerPacket(std::string_view name, PacketFactory factory);
    bool registerPacket(std::string_view name, PacketFactory factory, PacketHandler handler);
    bool registerHandler(std::string_view name, PacketHandler handler);

    std::shared_ptr<Packet> createPacket(uint64 runtimeId);
    PacketHandler           getHandler(uint64 runtimeId);

private:
    PacketRegistrar() = default;

    ConcurrentDenseMap<uint64, PacketFactory> mPackets;
    ConcurrentDenseMap<uint64, PacketHandler> mHandlers;
};

} // namespace ll::network
