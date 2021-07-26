#pragma once

#include "../Core/ConnectionRequest.h"
#include "../Core/Packet.h"
#include "../dll.h"

class LoginPacket : public Packet {
public:
    int                                protocol;
    std::unique_ptr<ConnectionRequest> request;

    inline ~LoginPacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};

static_assert(offsetof(LoginPacket, protocol) == 48);
static_assert(offsetof(LoginPacket, request) == 56);