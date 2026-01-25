#include "ll/api/network/packet/runtime/RuntimePacket.h"
#include "ll/api/network/packet/PacketRegistrar.h"

#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"

namespace ll::network {

MinecraftPacketIds RuntimePacket::getId() const { return MinecraftPacketIds::RuntimePacket; }

std::string RuntimePacket::getName() const { return "RuntimePacket"; }

void RuntimePacket::write(BinaryStream& bs) const {
    bs.writeUnsignedInt64(mRuntimeId, "RuntimeId", "The runtime id of the packet");
    mPacket->write(bs);
}

Bedrock::Result<void> RuntimePacket::_read(ReadOnlyBinaryStream& bs) {
    mRuntimeId = bs.getUnsignedInt64().value();

    mPacket = PacketRegistrar::getInstance().createPacket(mRuntimeId);
    if (!mPacket) {
        return {};
    }

    return mPacket->_read(bs);
}

}; // namespace ll::network
