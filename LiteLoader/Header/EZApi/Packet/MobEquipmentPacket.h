#pragma once

#include "../Actor/ActorRuntimeID.h"
#include "../Core/Packet.h"
#include "../Item/ItemStack.h"
#include "../Item/NetworkItemStackDescriptor.h"
#include "../dll.h"

class MobEquipmentPacket : public Packet {
public:
    ActorRuntimeID             actorId;
    NetworkItemStackDescriptor stack;
    uint32_t                   inventorySlot = 0;
    uint32_t                   hotbarSlot    = 0;
    bool                       flag192       = 0;
    char                       containerId   = 0; //193
    bool                       flag194       = 0;
    bool                       flag195       = 0;
    bool                       flag196       = 0;

    inline ~MobEquipmentPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};