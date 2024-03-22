#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/ActorLink.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetActorLinkPacket : public ::Packet {
public:
    ActorLink mLink; // this+0x30

    // prevent constructor by default
    SetActorLinkPacket& operator=(SetActorLinkPacket const&);
    SetActorLinkPacket(SetActorLinkPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SetActorLinkPacket@@UEAA@XZ
    virtual ~SetActorLinkPacket();

    // vIndex: 1, symbol: ?getId@SetActorLinkPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SetActorLinkPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@SetActorLinkPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@SetActorLinkPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0SetActorLinkPacket@@QEAA@XZ
    MCAPI SetActorLinkPacket();

    // symbol: ??0SetActorLinkPacket@@QEAA@AEBUActorLink@@@Z
    MCAPI explicit SetActorLinkPacket(struct ActorLink const& link);

    // NOLINTEND
};
