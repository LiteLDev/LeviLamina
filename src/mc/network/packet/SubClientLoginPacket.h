#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/SubClientConnectionRequest.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SubClientLoginPacket : public ::Packet {
public:
    std::unique_ptr<SubClientConnectionRequest> mConnectionRequest; // this+0x30

    // prevent constructor by default
    SubClientLoginPacket& operator=(SubClientLoginPacket const&);
    SubClientLoginPacket(SubClientLoginPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SubClientLoginPacket@@UEAA@XZ
    virtual ~SubClientLoginPacket() = default;

    // vIndex: 1, symbol: ?getId@SubClientLoginPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@SubClientLoginPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@SubClientLoginPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 5, symbol: ?disallowBatching@SubClientLoginPacket@@UEBA_NXZ
    virtual bool disallowBatching() const;

    // vIndex: 7, symbol:
    // ?_read@SubClientLoginPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0SubClientLoginPacket@@QEAA@XZ
    MCAPI SubClientLoginPacket();

    // NOLINTEND
};
