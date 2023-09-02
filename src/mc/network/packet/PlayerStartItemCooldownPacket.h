#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerStartItemCooldownPacket : public ::Packet {
public:
    std::string mItemCategory;  // this+0x30
    int32_t         mDurationTicks; // this+0x50

    // prevent constructor by default
    PlayerStartItemCooldownPacket& operator=(PlayerStartItemCooldownPacket const&) = delete;
    PlayerStartItemCooldownPacket(PlayerStartItemCooldownPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@PlayerStartItemCooldownPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@PlayerStartItemCooldownPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@PlayerStartItemCooldownPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@PlayerStartItemCooldownPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1PlayerStartItemCooldownPacket@@UEAA@XZ
    MCVAPI ~PlayerStartItemCooldownPacket();

    // symbol:
    // ??0PlayerStartItemCooldownPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI PlayerStartItemCooldownPacket(std::string const&, int);

    // symbol: ??0PlayerStartItemCooldownPacket@@QEAA@XZ
    MCAPI PlayerStartItemCooldownPacket();

    // NOLINTEND
};
