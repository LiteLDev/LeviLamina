#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ClientboundCloseFormPacket : public ::Packet {
public:
    // prevent constructor by default
    ClientboundCloseFormPacket& operator=(ClientboundCloseFormPacket const&);
    ClientboundCloseFormPacket(ClientboundCloseFormPacket const&);
    ClientboundCloseFormPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ClientboundCloseFormPacket@@UEAA@XZ
    virtual ~ClientboundCloseFormPacket();

    // vIndex: 1, symbol: ?getId@ClientboundCloseFormPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ClientboundCloseFormPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@ClientboundCloseFormPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 8, symbol:
    // ?_read@ClientboundCloseFormPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // NOLINTEND
};
