#pragma once

#include "../dll.h"

class EntityServerPacket : public Packet {
public:
    uint64_t entityNetId;

    EntityServerPacket(class EntityContext const&);

    inline ~EntityServerPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};