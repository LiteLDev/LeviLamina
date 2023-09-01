#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerSkinPacket : public ::Packet {
public:
    // prevent constructor by default
    PlayerSkinPacket& operator=(PlayerSkinPacket const&) = delete;
    PlayerSkinPacket(PlayerSkinPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@PlayerSkinPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PlayerSkinPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@PlayerSkinPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 4, symbol:
    // ?read@PlayerSkinPacket@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> read(class ReadOnlyBinaryStream&);

    // vIndex: 7, symbol:
    // ?_read@PlayerSkinPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1PlayerSkinPacket@@UEAA@XZ
    MCVAPI ~PlayerSkinPacket();

    // symbol: ??0PlayerSkinPacket@@QEAA@XZ
    MCAPI PlayerSkinPacket();

    // NOLINTEND
};
