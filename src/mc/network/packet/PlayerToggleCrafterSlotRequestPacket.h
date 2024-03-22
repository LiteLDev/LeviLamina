#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerToggleCrafterSlotRequestPacket : public ::Packet {
public:
    NetworkBlockPosition mPosition;
    int                  mSlot;
    bool                 mDisabled;

    // prevent constructor by default
    PlayerToggleCrafterSlotRequestPacket& operator=(PlayerToggleCrafterSlotRequestPacket const&);
    PlayerToggleCrafterSlotRequestPacket(PlayerToggleCrafterSlotRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PlayerToggleCrafterSlotRequestPacket@@UEAA@XZ
    virtual ~PlayerToggleCrafterSlotRequestPacket() = default;

    // vIndex: 1, symbol: ?getId@PlayerToggleCrafterSlotRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PlayerToggleCrafterSlotRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@PlayerToggleCrafterSlotRequestPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 8, symbol:
    // ?_read@PlayerToggleCrafterSlotRequestPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0PlayerToggleCrafterSlotRequestPacket@@QEAA@XZ
    MCAPI PlayerToggleCrafterSlotRequestPacket();

    // NOLINTEND
};
