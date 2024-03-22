#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ActorPickRequestPacket : public ::Packet {
public:
    int64 mID;       // this+0x30
    bool  mWithData; // this+0x38
    uchar mMaxSlots; // this+0x39

    // prevent constructor by default
    ActorPickRequestPacket& operator=(ActorPickRequestPacket const&);
    ActorPickRequestPacket(ActorPickRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorPickRequestPacket@@UEAA@XZ
    virtual ~ActorPickRequestPacket() = default;

    // vIndex: 1, symbol: ?getId@ActorPickRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ActorPickRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@ActorPickRequestPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ActorPickRequestPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ActorPickRequestPacket@@QEAA@XZ
    MCAPI ActorPickRequestPacket();

    // NOLINTEND
};
