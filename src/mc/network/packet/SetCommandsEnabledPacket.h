#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetCommandsEnabledPacket : public ::Packet {
public:
    bool mCommandsEnabled; // this+0x30

    // prevent constructor by default
    SetCommandsEnabledPacket& operator=(SetCommandsEnabledPacket const&);
    SetCommandsEnabledPacket(SetCommandsEnabledPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetCommandsEnabledPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SetCommandsEnabledPacket();

    MCAPI explicit SetCommandsEnabledPacket(bool commandsEnabled);

    // NOLINTEND
};
