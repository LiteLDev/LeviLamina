#pragma once

#include "../Core/ContainerID.h"
#include "../Core/Packet.h"
#include "../Item/ItemStack.h"
#include "../Item/NetworkItemStackDescriptor.h"

class InventoryContentPacket : public Packet {
public:
    ContainerID                             id;
    std::vector<NetworkItemStackDescriptor> items;

    inline ~InventoryContentPacket() {
    }

    MCAPI InventoryContentPacket(void);
    MCAPI InventoryContentPacket(ContainerID containerId, std::vector<ItemStack> const& items);

    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

    MCAPI static InventoryContentPacket fromPlayerInventoryId(ContainerID containerId, class Player& player);

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};