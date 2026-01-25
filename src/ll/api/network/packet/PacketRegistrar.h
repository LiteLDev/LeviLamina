#pragma once

#include <functional>
#include <memory>
#include <string_view>

#include "ll/api/base/Containers.h"
#include "ll/api/base/StdInt.h"

namespace ll::network {

class Packet;
class IPacketHandler;

using PacketRuntimeId = uint64;

class PacketRegistrar {
public:
    using PacketFactory = std::function<std::unique_ptr<Packet>()>;
    using PacketHandler = optional_ref<IPacketHandler>;

    LLNDAPI static PacketRegistrar& getInstance();

    LLAPI bool registerPacket(std::string_view name, PacketRuntimeId id, PacketFactory factory);
    LLAPI bool registerPacket(std::string_view name, PacketRuntimeId id, PacketFactory factory, PacketHandler handler);
    LLAPI bool registerHandler(std::string_view name, PacketRuntimeId id, PacketHandler handler);

    LLNDAPI std::unique_ptr<Packet> createPacket(PacketRuntimeId runtimeId);
    LLNDAPI PacketHandler           getHandler(PacketRuntimeId runtimeId);

private:
    PacketRegistrar() = default;

    ConcurrentDenseMap<PacketRuntimeId, PacketFactory> mPackets;
    ConcurrentDenseMap<PacketRuntimeId, PacketHandler> mHandlers;
};

} // namespace ll::network
