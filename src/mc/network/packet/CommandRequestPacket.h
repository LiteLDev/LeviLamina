#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandOriginData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CommandRequestPacket : public ::Packet {
public:
    std::string       mCommand;        // this+0x30
    CommandOriginData mOrigin;         // this+0x50
    bool              mInternalSource; // this+0x90

    // prevent constructor by default
    CommandRequestPacket& operator=(CommandRequestPacket const&);
    CommandRequestPacket(CommandRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandRequestPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI CommandRequestPacket();

    MCAPI CommandRequestPacket(class CommandContext& context, bool internalSource);

    // NOLINTEND
};
