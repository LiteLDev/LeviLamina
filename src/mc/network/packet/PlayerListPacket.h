#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/PlayerListEntry.h"
#include "mc/world/actor/player/PlayerListPacketType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerListPacket : public ::Packet {
public:
    std::vector<PlayerListEntry> mEntries; // this+0x30
    PlayerListPacketType         mAction;  // this+0x48

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PlayerListPacket@@UEAA@XZ
    virtual ~PlayerListPacket();

    // vIndex: 1, symbol: ?getId@PlayerListPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PlayerListPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@PlayerListPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 5, symbol:
    // ?read@PlayerListPacket@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // vIndex: 8, symbol:
    // ?_read@PlayerListPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0PlayerListPacket@@QEAA@XZ
    MCAPI PlayerListPacket();

    // symbol: ?emplace@PlayerListPacket@@QEAAX$$QEAVPlayerListEntry@@@Z
    MCAPI void emplace(class PlayerListEntry&& entry);

    // NOLINTEND
};
