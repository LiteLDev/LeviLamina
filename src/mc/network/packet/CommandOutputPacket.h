#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandOriginData.h"
#include "mc/server/commands/CommandOutput.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class CommandOutputPacket : public ::Packet {
public:
    CommandOriginData mOriginData; // this+0x30
    CommandOutput     mOutput;     // this+0x70

    // prevent constructor by default
    CommandOutputPacket& operator=(CommandOutputPacket const&);
    CommandOutputPacket(CommandOutputPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandOutputPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI CommandOutputPacket();

    MCAPI CommandOutputPacket(class CommandOrigin const& origin, class CommandOutput const& output);

    // NOLINTEND
};
