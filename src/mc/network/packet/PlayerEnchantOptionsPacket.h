#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/containers/managers/models/ItemEnchantOption.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerEnchantOptionsPacket : public ::Packet {
public:
    std::vector<ItemEnchantOption> mOptions; // this+0x30

    // prevent constructor by default
    PlayerEnchantOptionsPacket& operator=(PlayerEnchantOptionsPacket const&);
    PlayerEnchantOptionsPacket(PlayerEnchantOptionsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PlayerEnchantOptionsPacket@@UEAA@XZ
    virtual ~PlayerEnchantOptionsPacket();

    // vIndex: 1, symbol: ?getId@PlayerEnchantOptionsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PlayerEnchantOptionsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@PlayerEnchantOptionsPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@PlayerEnchantOptionsPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0PlayerEnchantOptionsPacket@@QEAA@XZ
    MCAPI PlayerEnchantOptionsPacket();

    // NOLINTEND
};
