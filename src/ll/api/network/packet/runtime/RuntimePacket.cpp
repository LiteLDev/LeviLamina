#include "ll/api/network/packet/runtime/RuntimePacket.h"
#include "ll/api/network/packet/PacketRegistrar.h"

#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"

namespace ll::network {

MinecraftPacketIds RuntimePacket::getId() const { return MinecraftPacketIds::LeviLaminaRuntimePacket; }

std::string RuntimePacket::getName() const { return "LeviLaminaRuntimePacket"; }

void RuntimePacket::write(BinaryStream& bs) const {
    bs.writeUnsignedInt64(runtimeId, "RuntimeId", "The runtime id of the packet");
    packet->write(bs);
}

Bedrock::Result<void> RuntimePacket::_read(ReadOnlyBinaryStream& bs) {
    if (auto res = bs.getUnsignedInt64(); res) {
        runtimeId = res.value();
    } else {
        return nonstd::make_unexpected(res.error());
    }
    movePacket(PacketRegistrar::getInstance().createPacket(runtimeId));
    if (!ownedPacket) {
        return nonstd::make_unexpected(Bedrock::ErrorInfo<>{std::error_code{}});
    }
    return ownedPacket->read(bs);
}

}; // namespace ll::network
