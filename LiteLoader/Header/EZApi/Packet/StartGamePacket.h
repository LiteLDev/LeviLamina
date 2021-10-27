#pragma once

#include "../Actor/ActorRuntimeID.h"
#include "../Core/Packet.h"
#include "../Level/LevelSettings.h"
#include "../dll.h"

class StartGamePacket : public Packet {
public:
    LevelSettings settings;

    inline ~StartGamePacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};