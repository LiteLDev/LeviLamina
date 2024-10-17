#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandOriginData.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class CommandContext& context, bool internalSource);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
