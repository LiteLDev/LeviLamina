#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorRuntimeID.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/world/level/block/CommandBlockMode.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class CommandBlockUpdatePacket : public ::Packet {
public:
    NetworkBlockPosition mBlockPos;           // this+0x30
    CommandBlockMode     mMode;               // this+0x3C
    bool                 mRedstoneMode;       // this+0x3E
    bool                 mIsConditional;      // this+0x3F
    ActorRuntimeID       mEntityId;           // this+0x40
    std::string          mCommand;            // this+0x48
    std::string          mLastOutput;         // this+0x68
    std::string          mName;               // this+0x88
    int                  mTickDelay;          // this+0xA8
    bool                 mTrackOutput;        // this+0xAC
    bool                 mExecuteOnFirstTick; // this+0xAD
    bool                 mIsBlock;            // this+0xAE

    // prevent constructor by default
    CommandBlockUpdatePacket& operator=(CommandBlockUpdatePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandBlockUpdatePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI CommandBlockUpdatePacket();

    MCAPI CommandBlockUpdatePacket(class CommandBlockUpdatePacket const&);

    // NOLINTEND
};
