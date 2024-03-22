#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CompletedUsingItemPacket : public ::Packet {
public:
    short mItemId;        // this+0x30
    int   mItemUseMethod; // this+0x34

    // prevent constructor by default
    CompletedUsingItemPacket& operator=(CompletedUsingItemPacket const&);
    CompletedUsingItemPacket(CompletedUsingItemPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CompletedUsingItemPacket@@UEAA@XZ
    virtual ~CompletedUsingItemPacket();

    // vIndex: 1, symbol: ?getId@CompletedUsingItemPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@CompletedUsingItemPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@CompletedUsingItemPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@CompletedUsingItemPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0CompletedUsingItemPacket@@QEAA@XZ
    MCAPI CompletedUsingItemPacket();

    // symbol: ??0CompletedUsingItemPacket@@QEAA@FH@Z
    MCAPI CompletedUsingItemPacket(short itemId, int itemUseMethod);

    // NOLINTEND
};
