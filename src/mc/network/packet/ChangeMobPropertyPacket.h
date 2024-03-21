#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ChangeMobPropertyPacket : public ::Packet {
public:
    // prevent constructor by default
    ChangeMobPropertyPacket& operator=(ChangeMobPropertyPacket const&);
    ChangeMobPropertyPacket(ChangeMobPropertyPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ChangeMobPropertyPacket@@UEAA@XZ
    virtual ~ChangeMobPropertyPacket() = default;

    // vIndex: 1, symbol: ?getId@ChangeMobPropertyPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ChangeMobPropertyPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@ChangeMobPropertyPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@ChangeMobPropertyPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ChangeMobPropertyPacket@@QEAA@XZ
    MCAPI ChangeMobPropertyPacket();

    // NOLINTEND
};
