#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerStartItemCooldownPacket : public ::Packet {
public:
    std::string mItemCategory;  // this+0x30
    int         mDurationTicks; // this+0x50

    // prevent constructor by default
    PlayerStartItemCooldownPacket& operator=(PlayerStartItemCooldownPacket const&);
    PlayerStartItemCooldownPacket(PlayerStartItemCooldownPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PlayerStartItemCooldownPacket@@UEAA@XZ
    virtual ~PlayerStartItemCooldownPacket();

    // vIndex: 1, symbol: ?getId@PlayerStartItemCooldownPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PlayerStartItemCooldownPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@PlayerStartItemCooldownPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@PlayerStartItemCooldownPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0PlayerStartItemCooldownPacket@@QEAA@XZ
    MCAPI PlayerStartItemCooldownPacket();

    // symbol:
    // ??0PlayerStartItemCooldownPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI PlayerStartItemCooldownPacket(std::string const&, int);

    // NOLINTEND
};
