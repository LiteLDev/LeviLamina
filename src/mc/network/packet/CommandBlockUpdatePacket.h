#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/server/commands/CommandBlockMode.h"
#include "mc/world/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

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
    // vIndex: 0, symbol: ??1CommandBlockUpdatePacket@@UEAA@XZ
    virtual ~CommandBlockUpdatePacket();

    // vIndex: 1, symbol: ?getId@CommandBlockUpdatePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@CommandBlockUpdatePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@CommandBlockUpdatePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@CommandBlockUpdatePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0CommandBlockUpdatePacket@@QEAA@XZ
    MCAPI CommandBlockUpdatePacket();

    // symbol: ??0CommandBlockUpdatePacket@@QEAA@AEBV0@@Z
    MCAPI CommandBlockUpdatePacket(class CommandBlockUpdatePacket const&);

    // NOLINTEND
};
