#pragma once

#include "../Core/ContainerID.h"
#include "../Core/Packet.h"
#include "../Item/ItemStack.h"
#include "../Item/NetworkItemStackDescriptor.h"

class InventorySlotPacket : public Packet {
public:
    ContainerID                id;
    uint32_t                   slot;
    NetworkItemStackDescriptor item;

    inline ~InventorySlotPacket() {
    }

    MCAPI InventorySlotPacket(void);
    MCAPI InventorySlotPacket(enum ContainerID containerId, unsigned int slot, class ItemStack const& item);

    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};