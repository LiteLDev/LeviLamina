#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class DebugInfoPacket : public ::Packet {
public:
    std::string   mData;    // this+0x30
    ActorUniqueID mActorId; // this+0x50

    // prevent constructor by default
    DebugInfoPacket& operator=(DebugInfoPacket const&);
    DebugInfoPacket(DebugInfoPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DebugInfoPacket@@UEAA@XZ
    virtual ~DebugInfoPacket() = default;

    // vIndex: 1, symbol: ?getId@DebugInfoPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@DebugInfoPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@DebugInfoPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@DebugInfoPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0DebugInfoPacket@@QEAA@XZ
    MCAPI DebugInfoPacket();

    // NOLINTEND
};
