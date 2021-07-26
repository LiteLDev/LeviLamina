#pragma once

#include "../Core/Packet.h"
#include "../dll.h"

class ShowProfilePacket : public Packet {
public:
    std::string xuid;

    inline ~ShowProfilePacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};