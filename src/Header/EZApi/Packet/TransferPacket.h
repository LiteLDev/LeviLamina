#pragma once

#include <loader/Loader.h>

#include "../Core/Packet.h"
#include "../dll.h"

class TransferPacket : public Packet {
    std::string address;
    int         port = 0;

public:
    TransferPacket(std::string address, int port)
        : address(address)
        , port(port) {
    }
    inline virtual ~TransferPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};