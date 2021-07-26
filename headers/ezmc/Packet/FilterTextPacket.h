#pragma once

#include "../Core/Packet.h"
#include "../Core/mce.h"
#include "../dll.h"

class FilterTextPacket : public Packet {
public:
    std::string content;
    bool        fromServer;

    inline ~FilterTextPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const = 0;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};