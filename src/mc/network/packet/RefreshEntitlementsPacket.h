#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class RefreshEntitlementsPacket : public ::Packet {
public:
    // prevent constructor by default
    RefreshEntitlementsPacket& operator=(RefreshEntitlementsPacket const&);
    RefreshEntitlementsPacket(RefreshEntitlementsPacket const&);
    RefreshEntitlementsPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RefreshEntitlementsPacket@@UEAA@XZ
    virtual ~RefreshEntitlementsPacket() = default;

    // vIndex: 1, symbol: ?getId@RefreshEntitlementsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@RefreshEntitlementsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@RefreshEntitlementsPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 8, symbol:
    // ?_read@RefreshEntitlementsPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // NOLINTEND
};
