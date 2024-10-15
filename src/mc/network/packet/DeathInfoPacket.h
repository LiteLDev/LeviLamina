#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class DeathInfoPacket : public ::Packet {
public:
    std::pair<std::string, std::vector<std::string>> mDeathCauseMessage; // this+0x30

    // prevent constructor by default
    DeathInfoPacket& operator=(DeathInfoPacket const&);
    DeathInfoPacket(DeathInfoPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DeathInfoPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI DeathInfoPacket();

    MCAPI explicit DeathInfoPacket(std::pair<std::string, std::vector<std::string>> const& deathCauseMessage);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(std::pair<std::string, std::vector<std::string>> const& deathCauseMessage);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
