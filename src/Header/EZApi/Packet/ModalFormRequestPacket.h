#pragma once

#include "../Core/Packet.h"
#include "../dll.h"

class ModalFormRequestPacket : public Packet {
public:
    unsigned int id;
    std::string  content;

    inline ~ModalFormRequestPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};