#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/MultiplayerSettingsPacketType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/MultiplayerSettingsPacketType.h"
#include "mc/network/packet/Packet.h"

class MultiplayerSettingsPacket : public ::Packet {
public:
    MultiplayerSettingsPacketType mPacketType; // this+0x30

    // prevent constructor by default
    MultiplayerSettingsPacket& operator=(MultiplayerSettingsPacket const&);
    MultiplayerSettingsPacket(MultiplayerSettingsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MultiplayerSettingsPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI MultiplayerSettingsPacket();

    MCAPI explicit MultiplayerSettingsPacket(::MultiplayerSettingsPacketType packetType);

    // NOLINTEND
};
