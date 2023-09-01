#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerListPacket : public ::Packet {
public:
    // prevent constructor by default
    PlayerListPacket& operator=(PlayerListPacket const&) = delete;
    PlayerListPacket(PlayerListPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@PlayerListPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PlayerListPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@PlayerListPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 4, symbol:
    // ?read@PlayerListPacket@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> read(class ReadOnlyBinaryStream&);

    // vIndex: 7, symbol:
    // ?_read@PlayerListPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1PlayerListPacket@@UEAA@XZ
    MCVAPI ~PlayerListPacket();

    // symbol: ??0PlayerListPacket@@QEAA@XZ
    MCAPI PlayerListPacket();

    // symbol: ?emplace@PlayerListPacket@@QEAAX$$QEAVPlayerListEntry@@@Z
    MCAPI void emplace(class PlayerListEntry&&);

    // NOLINTEND
};
