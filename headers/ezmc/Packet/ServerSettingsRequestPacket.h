#pragma once

#include "../Core/Packet.h"
#include "../dll.h"

class ServerSettingsRequestPacket : public Packet {
public:
    inline ~ServerSettingsRequestPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};