#pragma once

#include <functional>
#include <memory>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/mod/NativeMod.h"

#include "mc/deps/core/utility/optional_ref.h"

namespace ll::network {

class Packet;
class IPacketHandler;

using PacketRuntimeId = uint64;

enum class PacketSide : uchar {
    Server = 1 << 0,
    Client = 1 << 1,
    Both   = Server | Client,
};

class PacketRegistrar {
    struct Impl;
    std::unique_ptr<Impl> impl;

    PacketRegistrar();
    ~PacketRegistrar();

    void removeMod(std::string_view name);

public:
    using PacketFactory = std::function<std::unique_ptr<Packet>()>;
    using PacketHandler = optional_ref<IPacketHandler>;

    LLNDAPI static PacketRegistrar& getInstance();

    LLAPI bool registerPacket(
        std::string_view        name,
        PacketRuntimeId         id,
        PacketFactory           factory,
        PacketSide              side     = PacketSide::Both,
        bool                    optional = false,
        std::weak_ptr<mod::Mod> mod      = mod::NativeMod::current()
    );
    LLAPI bool registerPacket(
        std::string_view        name,
        PacketRuntimeId         id,
        PacketFactory           factory,
        PacketHandler           handler,
        PacketSide              side     = PacketSide::Both,
        bool                    optional = false,
        std::weak_ptr<mod::Mod> mod      = mod::NativeMod::current()
    );
    LLAPI bool registerHandler(
        std::string_view        name,
        PacketRuntimeId         id,
        PacketHandler           handler,
        PacketSide              side = PacketSide::Both,
        std::weak_ptr<mod::Mod> mod  = mod::NativeMod::current()
    );

    LLAPI bool unregisterPacket(PacketRuntimeId id);
    LLAPI bool unregisterHandler(PacketRuntimeId id, PacketSide side = PacketSide::Both);

    LLNDAPI std::unique_ptr<Packet> createPacket(PacketRuntimeId runtimeId);
    LLNDAPI PacketHandler           getHandler(PacketRuntimeId runtimeId, PacketSide side);

    LLNDAPI std::vector<PacketRuntimeId> getHandledPackets(PacketSide side) const;

    LLNDAPI std::vector<std::pair<PacketRuntimeId, std::string>> getRequiredPackets(PacketSide side) const;
};

} // namespace ll::network
